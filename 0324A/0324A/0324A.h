
// 0324A.h : 0324A Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0324AApp:
// �йش����ʵ�֣������ 0324A.cpp
//

class CMy0324AApp : public CWinAppEx
{
public:
	CMy0324AApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0324AApp theApp;
