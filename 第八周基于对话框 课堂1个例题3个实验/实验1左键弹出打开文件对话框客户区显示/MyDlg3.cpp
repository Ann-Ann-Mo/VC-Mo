// MyDlg3.cpp : 实现文件
//

#include "stdafx.h"
#include "实验1左键弹出打开文件对话框客户区显示.h"
#include "MyDlg3.h"
#include "afxdialogex.h"
#include"实验1左键弹出打开文件对话框客户区显示Doc.h"

// MyDlg3 对话框

IMPLEMENT_DYNAMIC(MyDlg3, CDialogEx)

MyDlg3::MyDlg3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, b(_T(""))
{

}

MyDlg3::~MyDlg3()
{
}

void MyDlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, b);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(MyDlg3, CDialogEx)
//	ON_COMMAND(ID_output, &MyDlg3::Onoutput)
	ON_LBN_SELCHANGE(IDC_LIST1, &MyDlg3::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// MyDlg3 消息处理程序




BOOL MyDlg3::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//Lbox.AddString(_T("%s"),b);
	//Lbox.AddString(_T("在此添加额外的初始化"));
	// TODO:  在此添加额外的初始化
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDlg3::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码
}
