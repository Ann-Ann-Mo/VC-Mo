
// ʵ��1����������ļ��Ի���ͻ�����ʾ.h : ʵ��1����������ļ��Ի���ͻ�����ʾ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��1����������ļ��Ի���ͻ�����ʾApp:
// �йش����ʵ�֣������ ʵ��1����������ļ��Ի���ͻ�����ʾ.cpp
//

class Cʵ��1����������ļ��Ի���ͻ�����ʾApp : public CWinAppEx
{
public:
	Cʵ��1����������ļ��Ի���ͻ�����ʾApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��1����������ļ��Ի���ͻ�����ʾApp theApp;
