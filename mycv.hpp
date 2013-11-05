/**
 *	@file		mycv.hpp
 *	@brief		OpenCV helper<br>
 *				This file defines macros for ease of use of OpenCV.<br>
 *				And include OpenCV library header as well as disable
 *				stupid warning.<br>
 *				You can use this file as follow.
 *
 				@code
 					#include "mycv.hpp"
 					#pragma comment(lib, OPENCV_LIB_EXPAND("core"))
 				@endcode
 *
 *				OPENCV_LIB_EXPAND macro replace the module name with corresponding
 *				library file name, e.g. opencv_core246.lib or opencv_246d.lib, by
 *				expanding library prefix, version string and debug or release postfix.
 *				The version string is also configured automatically depending on the 
 *				version of OpenCV library.
 *				
 *	@author		seonho.oh@gmail.com
 *	@date		2013-07-01
 *	@copyright	2007-2013 seonho.oh@gmail.com
 *	@version	1.0
 *
 *	@section	LICENSE
 *
 *		Copyright (c) 2013, Seonho Oh
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

#pragma warning(disable: 4819)

#include <opencv2/opencv.hpp>
 
#define OPEPCV_LIB_PREFIX   "opencv_"
 
#ifdef _DEBUG
    #define OPENCV_LIB_POSTFIX  "d.lib"
#else
    #define OPENCV_LIB_POSTFIX  ".lib"
#endif
 
#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)
 
#define OPENCV_VERSION_STRING STR(CV_MAJOR_VERSION) STR(CV_MINOR_VERSION) STR(CV_SUBMINOR_VERSION)
 
#define OPENCV_LIB_EXPAND(x) OPEPCV_LIB_PREFIX x OPENCV_VERSION_STRING OPENCV_LIB_POSTFIX