# CMake support for C++/WinRT library

# Usage:
#
# project(winrtproject)
# find_package(cppwinrt)
# ...
# add_executable(winrtclient_exe ...)
# target_link_libraries(winrtclient_exe PRIVATE cppwinrt)
# ...
# add_library(winrtclient_dll SHARED ...)
# target_link_libraries(winrtclient_dll PUBLIC cppwinrt)


# In case C++/WinRT supports multiple SDK versions,
# select different one that the default by using
#
#   set(CPPWINRT_SDK "10.0.XXXXX.0")
#
# between project() and find_package(cppwinrt)

set(CPPWINRT_DIR ${CMAKE_CURRENT_LIST_DIR})

if(NOT DEFINED CPPWINRT_SDK)
	set(CPPWINRT_SDK "10.0.16299.0")
endif()

set(CPPWINRT_INC_PATH "${CPPWINRT_DIR}/${CPPWINRT_SDK}")

add_library(cppwinrt INTERFACE)
target_include_directories(cppwinrt INTERFACE ${CPPWINRT_INC_PATH})
target_sources(cppwinrt INTERFACE ${CPPWINRT_INC_PATH}/winrt/cppwinrt.natvis)

if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8") # 64-bit platform
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_GetRestrictedErrorInfo=GetRestrictedErrorInfo)
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_RoGetActivationFactory=RoGetActivationFactory)
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_RoInitialize=RoInitialize)
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_RoOriginateError=RoOriginateError)
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_RoUninitialize=RoUninitialize)
	target_link_libraries(cppwinrt INTERFACE -alternatename:WINRT_SetRestrictedErrorInfo=SetRestrictedErrorInfo)
else()
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_GetRestrictedErrorInfo@4=_GetRestrictedErrorInfo@4)
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_RoGetActivationFactory@12=_RoGetActivationFactory@12)
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_RoInitialize@4=_RoInitialize@4)
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_RoOriginateError@8=_RoOriginateError@8)
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_RoUninitialize@0=_RoUninitialize@0)
	target_link_libraries(cppwinrt INTERFACE -alternatename:_WINRT_SetRestrictedErrorInfo@4=_SetRestrictedErrorInfo@4)
endif()

target_link_libraries(cppwinrt INTERFACE runtimeobject)
