#pragma once

//////////////////////////////////////////////////////////////////////////////////
#ifndef _SECURE_ATL 
#define _SECURE_ATL 1 
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#include "targetver.h"

#ifndef WINVER
#define WINVER 0x0501
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0510
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0400
#endif

#define _ATL_ATTRIBUTES
#define _AFX_ALL_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

//////////////////////////////////////////////////////////////////////////////////

//MFC 文件
#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxCmn.h>
#include <AfxDisp.h>


//MFC 文件
#include <Nb30.h>
#include <AfxInet.h>


//////////////////////////////////////////////////////////////////////////////////
// 去警告

#pragma warning(disable:4996)


//////////////////////////////////////////////////////////////////////////////////
//包含文件

//平台定义
#include "..\全局定义\Platform.h"
#include "..\消息定义\CMD_Correspond.h"
#include "..\消息定义\CMD_LogonServer.h"

//组件定义
#include "..\服务核心\ServiceCoreHead.h"
#include "..\内核引擎\KernelEngineHead.h"

//////////////////////////////////////////////////////////////////////////////////
//链接代码

#ifndef _DEBUG
	#ifndef _UNICODE
		#pragma comment (lib,"../链接库/Ansi/ServiceCore.lib")
		#pragma comment (lib,"../链接库/Ansi/KernelEngine.lib")
	#else
		#pragma comment (lib,"../链接库/Unicode/ServiceCore.lib")
		#pragma comment (lib,"../链接库/Unicode/KernelEngine.lib")
	#endif
#else
	#ifndef _UNICODE
		#pragma comment (lib,"../链接库/Ansi/ServiceCoreD.lib")
		#pragma comment (lib,"../链接库/Ansi/KernelEngineD.lib")
	#else
		#pragma comment (lib,"../链接库/Unicode/ServiceCoreD.lib")
		#pragma comment (lib,"../链接库/Unicode/KernelEngineD.lib")
	#endif
#endif

