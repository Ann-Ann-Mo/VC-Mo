#pragma once
#include "afxwin.h"


// MyDlg3 �Ի���

class MyDlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg3)

public:
	MyDlg3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString b;
	virtual BOOL OnInitDialog();
	CListBox Lbox;
	afx_msg void OnLbnSelchangeList1();
};
