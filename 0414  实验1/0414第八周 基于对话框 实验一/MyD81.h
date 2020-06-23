#pragma once


// MyD81 对话框

class MyD81 : public CDialogEx
{
	DECLARE_DYNAMIC(MyD81)

public:
	MyD81(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyD81();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
