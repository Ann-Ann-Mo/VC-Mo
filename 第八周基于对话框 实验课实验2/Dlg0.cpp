// Dlg0.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ��ܻ��ڶԻ��� ʵ���ʵ��2.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 �Ի���

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
END_MESSAGE_MAP()


// Dlg0 ��Ϣ�������
