#pragma once


// MyD81 �Ի���

class MyD81 : public CDialogEx
{
	DECLARE_DYNAMIC(MyD81)

public:
	MyD81(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyD81();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
