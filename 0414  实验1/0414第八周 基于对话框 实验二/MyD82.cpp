// MyD82.cpp : 实现文件
//

#include "stdafx.h"
#include "0414第八周 基于对话框 实验二.h"
#include "MyD82.h"
#include "afxdialogex.h"


// MyD82 对话框

IMPLEMENT_DYNAMIC(MyD82, CDialogEx)

MyD82::MyD82(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, Ebox1(_T(""))
{

}

MyD82::~MyD82()
{
}

void MyD82::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, Ebox);
	DDX_Text(pDX, IDC_EDIT2, Ebox1);
}


BEGIN_MESSAGE_MAP(MyD82, CDialogEx)
	//ON_EN_CHANGE(IDC_EDIT1, &MyD82::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &MyD82::OnEnChangeEdit2)
END_MESSAGE_MAP()


// MyD82 消息处理程序


void MyD82::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void MyD82::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码

}


BOOL MyD82::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	//UpdateData(TRUE);//读取数据
	CFileDialog cfd822(true);
	int r1 = cfd822.DoModal();
	if (r1 == IDOK)
	{
		CString s = cfd822.GetFileName();

		GetDC()->TextOutW(200, 155, s);
	}
	//UpdateData(FALSE);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
