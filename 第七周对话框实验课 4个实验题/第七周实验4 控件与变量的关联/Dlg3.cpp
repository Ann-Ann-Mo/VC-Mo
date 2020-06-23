// Dlg3.cpp : 实现文件
//

#include "stdafx.h"
#include "第七周实验4 控件与变量的关联.h"
#include "Dlg3.h"
#include "afxdialogex.h"


// Dlg3 对话框

IMPLEMENT_DYNAMIC(Dlg3, CDialogEx)

Dlg3::Dlg3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
	, b(0)
	, c(_T(""))
{

}

Dlg3::~Dlg3()
{
}

void Dlg3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
}


BEGIN_MESSAGE_MAP(Dlg3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg3::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg3 消息处理程序


void Dlg3::OnBnClickedButton1()
{   CString s;
	this->UpdateData(true);
	CString A; int B;
	A = this->a;
	B = this->b;
	s.Format(_T("%s%d"), A ,B);
	this->c = s;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
