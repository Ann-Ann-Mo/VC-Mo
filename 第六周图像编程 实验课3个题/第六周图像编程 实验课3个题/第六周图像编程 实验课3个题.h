
// ������ͼ���� ʵ���3����.h : ������ͼ���� ʵ���3���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ͼ����ʵ���3����App:
// �йش����ʵ�֣������ ������ͼ���� ʵ���3����.cpp
//

class C������ͼ����ʵ���3����App : public CWinAppEx
{
public:
	C������ͼ����ʵ���3����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ͼ����ʵ���3����App theApp;
