// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ڰ��ܻ��ڶԻ��� ����1������3��ʵ��.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
	s = " ";
}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
	ON_LBN_SELCHANGE(IDC_LIST1, &MyDlg::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	Lbox.AddString(_T("�쳣: OCX ����ҳӦ���� FALSE"));
	Lbox.AddString(_T("�ڴ���Ӷ���ĳ�ʼ��"));
	//Lbox.DeleteString(0);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = Lbox.GetCurSel();
	Lbox.GetText(n, s);
}


void MyDlg::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
