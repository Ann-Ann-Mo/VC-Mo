
// �ڰ��ܻ��ڶԻ��� ����1������3��ʵ��.h : �ڰ��ܻ��ڶԻ��� ����1������3��ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ڰ��ܻ��ڶԻ������1������3��ʵ��App:
// �йش����ʵ�֣������ �ڰ��ܻ��ڶԻ��� ����1������3��ʵ��.cpp
//

class C�ڰ��ܻ��ڶԻ������1������3��ʵ��App : public CWinAppEx
{
public:
	C�ڰ��ܻ��ڶԻ������1������3��ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ڰ��ܻ��ڶԻ������1������3��ʵ��App theApp;
