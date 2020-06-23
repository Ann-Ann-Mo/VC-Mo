#pragma once
#include "afxwin.h"


// MyDlg3 对话框

class MyDlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg3)

public:
	MyDlg3(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg3();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString b;
	virtual BOOL OnInitDialog();
	CListBox Lbox;
	afx_msg void OnLbnSelchangeList1();
};
