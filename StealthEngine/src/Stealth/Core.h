#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STEALTH_API __declspec(dllexport)
	#else
		#define STEALTH_API __declspec(dllimport)
	#endif
#else
	#error Stealth only supports windows!

#endif