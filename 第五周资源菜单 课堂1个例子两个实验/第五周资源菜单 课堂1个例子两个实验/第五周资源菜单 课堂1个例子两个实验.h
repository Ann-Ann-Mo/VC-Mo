
// ��������Դ�˵� ����1����������ʵ��.h : ��������Դ�˵� ����1����������ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��������Դ�˵�����1����������ʵ��App:
// �йش����ʵ�֣������ ��������Դ�˵� ����1����������ʵ��.cpp
//

class C��������Դ�˵�����1����������ʵ��App : public CWinApp
{
public:
	C��������Դ�˵�����1����������ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��������Դ�˵�����1����������ʵ��App theApp;
