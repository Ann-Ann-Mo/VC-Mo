
// �ļ���д����.h : �ļ���д���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ļ���д����App:
// �йش����ʵ�֣������ �ļ���д����.cpp
//

class C�ļ���д����App : public CWinAppEx
{
public:
	C�ļ���д����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ļ���д����App theApp;
