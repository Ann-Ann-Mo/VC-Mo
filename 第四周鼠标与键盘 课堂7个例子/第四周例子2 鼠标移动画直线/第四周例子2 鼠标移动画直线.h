
// ����������2 ����ƶ���ֱ��.h : ����������2 ����ƶ���ֱ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������2����ƶ���ֱ��App:
// �йش����ʵ�֣������ ����������2 ����ƶ���ֱ��.cpp
//

class C����������2����ƶ���ֱ��App : public CWinAppEx
{
public:
	C����������2����ƶ���ֱ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������2����ƶ���ֱ��App theApp;
