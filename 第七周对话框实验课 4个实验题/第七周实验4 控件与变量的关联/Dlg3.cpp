// Dlg3.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "������ʵ��4 �ؼ�������Ĺ���.h"
#include "Dlg3.h"
#include "afxdialogex.h"


// Dlg3 �Ի���

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


// Dlg3 ��Ϣ�������


void Dlg3::OnBnClickedButton1()
{   CString s;
	this->UpdateData(true);
	CString A; int B;
	A = this->a;
	B = this->b;
	s.Format(_T("%s%d"), A ,B);
	this->c = s;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
