// MyDlg3.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ʵ��1����������ļ��Ի���ͻ�����ʾ.h"
#include "MyDlg3.h"
#include "afxdialogex.h"
#include"ʵ��1����������ļ��Ի���ͻ�����ʾDoc.h"

// MyDlg3 �Ի���

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


// MyDlg3 ��Ϣ�������




BOOL MyDlg3::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//Lbox.AddString(_T("%s"),b);
	//Lbox.AddString(_T("�ڴ���Ӷ���ĳ�ʼ��"));
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDlg3::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
