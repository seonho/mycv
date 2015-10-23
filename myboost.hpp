/**
 *		@file   	myboost.hpp
 *		@brief		Boost library link helper macro
 *		@author		seonho.oh [at] gmail.com
 *		@date		2015-03-11
 *		@copyright	2007-2015
 *		@version	1.0
 *		@section	LICENSE
 *
 *		Copyright (c) 2015, Seonho Oh
 *		All rights reserved. 
 * 
 *		Redistribution and use in source and binary forms, with or without  
 *		modification, are permitted provided that the following conditions are  
 *		met: 
 * 
 *		    * Redistributions of source code must retain the above copyright  
 *		    notice, this list of conditions and the following disclaimer. 
 *		    * Redistributions in binary form must reproduce the above copyright  
 *		    notice, this list of conditions and the following disclaimer in the  
 *		    documentation and/or other materials provided with the distribution. 
 *		    * Neither the name of the <ORGANIZATION> nor the names of its  
 *		    contributors may be used to endorse or promote products derived from  
 *		    this software without specific prior written permission. 
 * 
 *		THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS  
 *		IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED  
 *		TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A  
 *		PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER  
 *		OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,  
 *		EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,  
 *		PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR  
 *		PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  
 *		LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING  
 *		NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS  
 *		SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */
#pragma once

#include <boost/version.hpp>

#if		_MSC_VER == 1600
#	define MSVC_VER_STR "vc100" // Visual Studio 2010
#elif	_MSC_VER == 1700
#	define MSVC_VER_STR "vc110" // Visual Studio 2012
#elif	_MSC_VER == 1800
#	define MSVC_VER_STR "vc120" // Visual Studio 2013
#elif	_MSC_VER == 1900
#	define MSVC_VER_STR "vc140" // Visual Studio 2015
#endif

#define BOOST_LIB_EXPAND_PREFIX "libboost_"

#ifdef _DEBUG
#	define BOOST_LIB_POSTFIX "-" MSVC_VER_STR "-mt-gd-" BOOST_LIB_VERSION ".lib"
#else
#	define BOOST_LIB_POSTFIX "-" MSVC_VER_STR "-mt-" BOOST_LIB_VERSION ".lib"
#endif

#define BOOST_LIB_EXPAND(x) BOOST_LIB_EXPAND_PREFIX x BOOST_LIB_POSTFIX
