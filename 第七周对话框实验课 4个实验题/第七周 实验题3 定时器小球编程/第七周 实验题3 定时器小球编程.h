
// ������ ʵ����3 ��ʱ��С����.h : ������ ʵ����3 ��ʱ��С���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ʵ����3��ʱ��С����App:
// �йش����ʵ�֣������ ������ ʵ����3 ��ʱ��С����.cpp
//

class C������ʵ����3��ʱ��С����App : public CWinAppEx
{
public:
	C������ʵ����3��ʱ��С����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ʵ����3��ʱ��С����App theApp;
