// Dlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ʵ��2 �˵������Ի���ʵ�ּӷ�.h"
#include "Dlg1.h"
#include "afxdialogex.h"


// Dlg1 �Ի���

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


// Dlg1 ��Ϣ�������


void Dlg1::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void Dlg1::OnBnClickedButton1()
{
	this->UpdateData(true);
	sum = a + b;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
