// Dlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "实验2 菜单弹出对话框实现加法.h"
#include "Dlg1.h"
#include "afxdialogex.h"


// Dlg1 对话框

IMPLEMENT_DYNAMIC(Dlg1, CDialogEx)

Dlg1::Dlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, sum(0)
{

}

Dlg1::~Dlg1()
{
}

void Dlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &Dlg1::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg1 消息处理程序


void Dlg1::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Dlg1::OnBnClickedButton1()
{
	this->UpdateData(true);
	sum = a + b;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
