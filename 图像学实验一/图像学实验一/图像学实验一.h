
// ͼ��ѧʵ��һ.h : ͼ��ѧʵ��һ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cͼ��ѧʵ��һApp:
// �йش����ʵ�֣������ ͼ��ѧʵ��һ.cpp
//

class Cͼ��ѧʵ��һApp : public CWinApp
{
public:
	Cͼ��ѧʵ��һApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cͼ��ѧʵ��һApp theApp;
