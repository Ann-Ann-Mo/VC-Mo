
// ʵ��һ.h : ʵ��һ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��һApp:
// �йش����ʵ�֣������ ʵ��һ.cpp
//

class Cʵ��һApp : public CWinAppEx
{
public:
	Cʵ��һApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��һApp theApp;
