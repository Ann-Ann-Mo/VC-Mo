
// �ھ������л����ļ���д������ϰ��12.h : �ھ������л����ļ���д������ϰ��12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ھ������л����ļ���д������ϰ��12App:
// �йش����ʵ�֣������ �ھ������л����ļ���д������ϰ��12.cpp
//

class C�ھ������л����ļ���д������ϰ��12App : public CWinAppEx
{
public:
	C�ھ������л����ļ���д������ϰ��12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ھ������л����ļ���д������ϰ��12App theApp;
