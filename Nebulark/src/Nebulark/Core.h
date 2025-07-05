#pragma once

#ifdef NA_PLATFORM_WINDOWS
	#ifdef NA_BUILD_DLL
		#define NEBULARK_API __declspec(dllexport)
	#else
		#define NEBULARK_API __declspec(dllimport)
	#endif
#else
	#error Nebulark only supports Windows!
#endif