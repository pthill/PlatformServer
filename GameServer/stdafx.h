
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展


#include <afxdisp.h>        // MFC 自动化类



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持


#include <afxsock.h>            // MFC 套接字扩展






//////////////////////////////////////////////////////////////////////////////////

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

#define _AFX_ALL_WARNINGS

#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxDisp.h>
#include <AfxDtctl.h>

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <AfxCmn.h>
#endif


//////////////////////////////////////////////////////////////////////////////////
// 去警告

#pragma warning(disable:4996)


//////////////////////////////////////////////////////////////////////////////////
//包含文件

//平台定义
#include "..\全局定义\Platform.h"
#include "..\消息定义\CMD_Commom.h"
#include "..\消息定义\CMD_Correspond.h"
#include "..\消息定义\CMD_GameServer.h"
#include "..\消息定义\CMD_LogonServer.h"
#include "..\消息定义\IPC_GameFrame.h"

//组件定义
#include "..\服务核心\ServiceCoreHead.h"
#include "..\内核引擎\KernelEngineHead.h"
#include "..\服务核心\ServiceCoreHead.h"
#include "..\游戏服务\GameServiceHead.h"
#include "..\比赛服务\MatchServiceHead.h"
#include "..\内核引擎\KernelEngineHead.h"
#include "..\模块管理\ModuleManagerHead.h"

//////////////////////////////////////////////////////////////////////////////////
//链接代码

#ifndef _DEBUG
#ifndef _UNICODE
	#pragma comment (lib,"../链接库/Ansi/ServiceCore.lib")
	#pragma comment (lib,"../链接库/Ansi/GameService.lib")
	#pragma comment (lib,"../链接库/Ansi/KernelEngine.lib")
	#pragma comment (lib,"../链接库/Ansi/ModuleManager.lib")
#else
	#pragma comment (lib,"../链接库/Unicode/ServiceCore.lib")
	#pragma comment (lib,"../链接库/Unicode/GameService.lib")
	#pragma comment (lib,"../链接库/Unicode/KernelEngine.lib")
	#pragma comment (lib,"../链接库/Unicode/ModuleManager.lib")
#endif
#else
#ifndef _UNICODE
	#pragma comment (lib,"../链接库/Ansi/ServiceCoreD.lib")
	#pragma comment (lib,"../链接库/Ansi/GameServiceD.lib")
	#pragma comment (lib,"../链接库/Ansi/KernelEngineD.lib")
	#pragma comment (lib,"../链接库/Ansi/ModuleManagerD.lib")
#else
	#pragma comment (lib,"../链接库/Unicode/ServiceCoreD.lib")
	#pragma comment (lib,"../链接库/Unicode/GameServiceD.lib")
	#pragma comment (lib,"../链接库/Unicode/KernelEngineD.lib")
	#pragma comment (lib,"../链接库/Unicode/ModuleManagerD.lib")
#endif
#endif


//////////////////////////////////////////////////////////////////////////////////




#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


