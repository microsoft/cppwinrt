
#ifdef WINRT_IMPL_COROUTINES
namespace winrt::impl
{
	template<typename Derived, typename TResult>
	struct iterable_promise_base : implements<Derived, winrt::Windows::Foundation::Collections::IIterable<TResult>>
	{
	private:
		struct iterator;

		enum class IterationStatus
		{
			Initial,
			Producing,
			Value,
			Done
		};

	public:
		unsigned long __stdcall Release() noexcept
		{
			uint32_t const remaining = this->subtract_reference();

			if (remaining == 0)
			{
				std::atomic_thread_fence(std::memory_order_acquire);
				coroutine_handle<Derived>::from_promise(*static_cast<Derived*>(this)).destroy();
			}

			return remaining;
		}

		winrt::Windows::Foundation::Collections::IIterable<TResult> get_return_object() noexcept
		{
			return *this;
		}

		suspend_always initial_suspend() const noexcept
		{
			return {};
		}

		struct final_suspend_awaiter
		{
			iterable_promise_base* promise;

			bool await_ready() const noexcept
			{
				return false;
			}

			void await_resume() const noexcept
			{
			}

			bool await_suspend(coroutine_handle<>) const noexcept
			{
				uint32_t const remaining = promise->subtract_reference();

				if (remaining == 0)
				{
					std::atomic_thread_fence(std::memory_order_acquire);
				}

				return remaining > 0;
			}
		};

		final_suspend_awaiter final_suspend() noexcept
		{
			return {this};
		}

		void unhandled_exception() const
		{
			throw;
		}

		constexpr void await_transform() = delete;

		constexpr void return_void() noexcept
		{
			m_status = IterationStatus::Done;
		}

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
		void use_make_function_to_create_this_object() final
		{
		}
#endif

		bool produce_value()
		{
			if (m_status != IterationStatus::Initial && m_status != IterationStatus::Value)
			{
				return false;
			}

			m_status = IterationStatus::Producing;

			coroutine_handle<Derived>::from_promise(*static_cast<Derived*>(this)).resume();
			return m_status != IterationStatus::Done;
		}

		void on_value() noexcept
		{
			m_status = IterationStatus::Value;
		}

		bool has_value() const noexcept
		{
			return m_status == IterationStatus::Value;
		}

		auto First()
		{
			if (m_status != IterationStatus::Initial)
			{
				throw hresult_changed_state{};
			}

			return winrt::make<iterator>(static_cast<Derived*>(this));
		}

	private:
		struct iterator : winrt::implements<iterator, winrt::Windows::Foundation::Collections::IIterator<TResult>>
		{
			iterator(Derived* const promise)
			{
				m_promise.copy_from(promise);
				MoveNext();
			}

			bool HasCurrent() const noexcept
			{
				return m_promise->has_value();
			}

			TResult Current() noexcept
			{
				return m_promise->get_value();
			}

			uint32_t GetMany(array_view<TResult> values)
			{
				uint32_t count{ 0 };
				for (auto it = values.begin(); it != values.end(); ++it)
				{
					if (!MoveNext())
					{
						break;
					}

					*it = Current();
				}

				return count;
			}

			bool MoveNext()
			{
				return m_promise->produce_value();
			}

		private:
			com_ptr<Derived> m_promise;
		};

		IterationStatus m_status{ IterationStatus::Initial };
	};
}

namespace std
{
	template<typename T, typename... Args>
	struct coroutine_traits<winrt::Windows::Foundation::Collections::IIterable<T>, Args...>
	{
		struct promise_type final : winrt::impl::iterable_promise_base<promise_type, T>
		{
			suspend_always yield_value(T&& value) noexcept
			{
				m_result = value;
				winrt::impl::iterable_promise_base<promise_type, T>::on_value();
				return {};
			}

			suspend_always yield_value(T const& value) noexcept
			{
				m_result = value;
				winrt::impl::iterable_promise_base<promise_type, T>::on_value();
				return {};
			}

			T get_value() noexcept
			{
				return m_result;
			}

		private:
			T m_result{ winrt::impl::empty_value<T>() };
		};
	};
}
#endif