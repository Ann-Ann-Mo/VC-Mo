#pragma once
#include "afxwin.h"


// MyD82 �Ի���

class MyD82 : public CDialogEx
{
	DECLARE_DYNAMIC(MyD82)

public:
	MyD82(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyD82();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	CEdit Ebox;
	virtual BOOL OnInitDialog();
	CString Ebox1;
};
