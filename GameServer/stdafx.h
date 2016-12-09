// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE 类
#include <afxodlgs.h>       // MFC OLE 对话框类
#include <afxdisp.h>        // MFC 自动化类
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
// #include <afxdb.h>                      // MFC ODBC 数据库类
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
// #include <afxdao.h>                     // MFC DAO 数据库类
#endif // _AFX_NO_DAO_SUPPORT

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxsock.h>            // MFC 套接字扩展


#define _ATL_ATTRIBUTES
#define _AFX_ALL_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS


//////////////////////////////////////////////////////////////////////////////////
// DLL动态库定义

#define GAME_SERVICE_DLL


//////////////////////////////////////////////////////////////////////////////////
//MFC 文件

#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxCmn.h>
#include <AfxDisp.h>

#include "GameServiceHead.h"
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

//////////////////////////////////////////////////////////////////////////////////
