// MyD2.cpp : 实现文件
//

#include "stdafx.h"
#include "Dlg2.h"
#include "MyD2.h"
#include "afxdialogex.h"


// MyD2 对话框

IMPLEMENT_DYNAMIC(MyD2, CDialogEx)

MyD2::MyD2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyD2::~MyD2()
{
}

void MyD2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(MyD2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyD2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyD2 消息处理程序


BOOL MyD2::OnInitDialog()
{//添加项目  初始化显示字符串
	CDialogEx::OnInitDialog();
	s = " ";
	// TODO:  在此添加额外的初始化
	Lbox.AddString(_T("异常: OCX 属性页应返回 FALSE"));
	Lbox.AddString(_T("TODO异常: OCX 属性页应返回 FALSE"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyD2::选择()
{
	// TODO: 在此添加控件通知处理程序代码
}


void MyD2::OnBnClickedButton1()
{
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);

	// TODO: 在此添加控件通知处理程序代码
}
