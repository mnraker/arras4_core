// Copyright 2023-2024 DreamWorks Animation LLC and Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#ifndef __ARRAS_HTTP_PLATFORM_H__
#define __ARRAS_HTTP_PLATFORM_H__

#if !defined(SOCKET_CLOSE)

	#ifdef PLATFORM_WINDOWS

		typedef unsigned int ARRAS_SOCKET;
		const unsigned int ARRAS_INVALID_SOCKET = (~0);
		#define SOCKET_CLOSE(x) ::closesocket(x)

	#else 

		typedef int ARRAS_SOCKET;
		const int ARRAS_INVALID_SOCKET = -1;
		#define SOCKET_CLOSE(x) ::close(x)

	#endif 

#endif

#endif
