#pragma once
#include "afxwin.h"


// chen 对话框

class chen : public CDialogEx
{
	DECLARE_DYNAMIC(chen)

public:
	chen(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~chen();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CEdit m_name;
	CEdit m_password;
};
