// MyD2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dlg2.h"
#include "MyD2.h"
#include "afxdialogex.h"


// MyD2 �Ի���

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


// MyD2 ��Ϣ�������


BOOL MyD2::OnInitDialog()
{//�����Ŀ  ��ʼ����ʾ�ַ���
	CDialogEx::OnInitDialog();
	s = " ";
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Lbox.AddString(_T("�쳣: OCX ����ҳӦ���� FALSE"));
	Lbox.AddString(_T("TODO�쳣: OCX ����ҳӦ���� FALSE"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyD2::ѡ��()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyD2::OnBnClickedButton1()
{
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
