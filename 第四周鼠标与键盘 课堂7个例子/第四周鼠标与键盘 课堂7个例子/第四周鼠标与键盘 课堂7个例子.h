
// �������������� ����7������.h : �������������� ����7������ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�������������̿���7������App:
// �йش����ʵ�֣������ �������������� ����7������.cpp
//

class C�������������̿���7������App : public CWinAppEx
{
public:
	C�������������̿���7������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�������������̿���7������App theApp;
