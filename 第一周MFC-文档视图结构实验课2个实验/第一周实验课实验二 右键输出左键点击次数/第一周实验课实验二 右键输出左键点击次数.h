
// ��һ��ʵ���ʵ��� �Ҽ��������������.h : ��һ��ʵ���ʵ��� �Ҽ�������������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��һ��ʵ���ʵ����Ҽ��������������App:
// �йش����ʵ�֣������ ��һ��ʵ���ʵ��� �Ҽ��������������.cpp
//

class C��һ��ʵ���ʵ����Ҽ��������������App : public CWinAppEx
{
public:
	C��һ��ʵ���ʵ����Ҽ��������������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��һ��ʵ���ʵ����Ҽ��������������App theApp;
