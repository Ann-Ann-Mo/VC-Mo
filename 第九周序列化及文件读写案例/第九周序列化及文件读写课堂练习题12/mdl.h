#pragma once


// mdl �Ի���

class mdl : public CDialogEx
{
	DECLARE_DYNAMIC(mdl)

public:
	mdl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~mdl();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
