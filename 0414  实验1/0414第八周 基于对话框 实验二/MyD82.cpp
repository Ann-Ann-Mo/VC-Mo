// MyD82.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "0414�ڰ��� ���ڶԻ��� ʵ���.h"
#include "MyD82.h"
#include "afxdialogex.h"


// MyD82 �Ի���

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


// MyD82 ��Ϣ�������


void MyD82::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void MyD82::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������

}


BOOL MyD82::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	//UpdateData(TRUE);//��ȡ����
	CFileDialog cfd822(true);
	int r1 = cfd822.DoModal();
	if (r1 == IDOK)
	{
		CString s = cfd822.GetFileName();

		GetDC()->TextOutW(200, 155, s);
	}
	//UpdateData(FALSE);


	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
