// chen.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "chen.h"
#include "afxdialogex.h"
#include"Resource.h"
#include"MFCApplication1Dlg.h"


// chen 对话框

IMPLEMENT_DYNAMIC(chen, CDialogEx)

chen::chen(CWnd* pParent /*=NULL*/)
	: CDialogEx(chen::IDD, pParent)
{

}

chen::~chen()
{
}

void chen::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_name);
	DDX_Control(pDX, IDC_EDIT2, m_password);
}


BEGIN_MESSAGE_MAP(chen, CDialogEx)
	ON_BN_CLICKED(IDOK, &chen::OnBnClickedOk)
END_MESSAGE_MAP()


// chen 消息处理程序


void chen::OnBnClickedOk()
{
	CString b, c;
	m_name.GetWindowText(c);
	m_password.GetWindowText(b);
	if (c.IsEmpty() || b.IsEmpty())
	{
		MessageBox(_T("用户名或者密码不能为空"), _T("用户登录信息"));

	}
	else if (c == "201412235062"&&b == "123456")
	{
		CMFCApplication1Dlg dlg;

		INT_PTR nResponse = dlg.DoModal();
		MessageBox(_T("测试成功"), _T("用户登录"));



	}
	else
	{
		MessageBox(_T("用户名或者密码不正确"), _T("提示"));

	}

	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
