
// 03.30B.h : 03.30B Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0330BApp:
// �йش����ʵ�֣������ 03.30B.cpp
//

class CMy0330BApp : public CWinApp
{
public:
	CMy0330BApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0330BApp theApp;
