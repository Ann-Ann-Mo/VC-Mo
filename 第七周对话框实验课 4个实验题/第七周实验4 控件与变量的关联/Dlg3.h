#pragma once


// Dlg3 �Ի���

class Dlg3 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg3)

public:
	Dlg3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	int b;
	CString c;
	afx_msg void OnBnClickedButton1();
};
