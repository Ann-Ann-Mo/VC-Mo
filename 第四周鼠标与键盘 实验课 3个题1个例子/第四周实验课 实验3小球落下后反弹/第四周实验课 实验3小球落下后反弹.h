
// ������ʵ��� ʵ��3С�����º󷴵�.h : ������ʵ��� ʵ��3С�����º󷴵� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ʵ���ʵ��3С�����º󷴵�App:
// �йش����ʵ�֣������ ������ʵ��� ʵ��3С�����º󷴵�.cpp
//

class C������ʵ���ʵ��3С�����º󷴵�App : public CWinAppEx
{
public:
	C������ʵ���ʵ��3С�����º󷴵�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ʵ���ʵ��3С�����º󷴵�App theApp;
