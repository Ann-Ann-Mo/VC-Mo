
// �ھ������л����ļ���д������ϰ12.h : �ھ������л����ļ���д������ϰ12 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ھ������л����ļ���д������ϰ12App:
// �йش����ʵ�֣������ �ھ������л����ļ���д������ϰ12.cpp
//

class C�ھ������л����ļ���д������ϰ12App : public CWinApp
{
public:
	C�ھ������л����ļ���д������ϰ12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ھ������л����ļ���д������ϰ12App theApp;
