#pragma once

#include "ServiceUnits.h"
#include ".\flashaccredit.h"

// CLogonServerDlg 对话框

class CLogonServerDlg : public CDialog, public IServiceUnitsSink
{
	DECLARE_DYNAMIC(CLogonServerDlg)

protected:	
	CServiceUnits					m_ServiceUnits;						//服务单元
	CTraceServiceControl			m_TraceServiceControl;				//追踪窗口
	CFlashAccredit                  m_FlashAccredit;                    //Flash网络

public:
	CLogonServerDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLogonServerDlg();

	// 对话框数据
	enum { IDD = IDD_DLG_LOGON_SERVER };

public:
	//服务状态
	virtual VOID OnServiceUnitsStatus(enServiceStatus ServiceStatus);

protected:
	 // DDX/DDV 支持
	virtual void DoDataExchange(CDataExchange* pDX);   
	// 初始化
	virtual BOOL OnInitDialog();
	// 消息屏蔽
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//取消函数
	virtual VOID OnCancel();
	//启动服务
	VOID OnBnClickedStartService();
	//停止服务
	VOID OnBnClickedStopService();

public:
	//关闭询问
	BOOL OnQueryEndSession();
	//网络事件
	LRESULT OnNetworkEvent(WPARAM wparam, LPARAM lparam);

	DECLARE_MESSAGE_MAP()
};
