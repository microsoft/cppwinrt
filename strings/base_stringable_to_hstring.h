
WINRT_EXPORT namespace winrt
{
	inline hstring to_hstring(Windows::Foundation::IStringable const& stringable)
	{
		return stringable.ToString();
	}
}
