
// �����ܶԻ���ʵ��� 4��ʵ����.h : �����ܶԻ���ʵ��� 4��ʵ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����ܶԻ���ʵ���4��ʵ����App:
// �йش����ʵ�֣������ �����ܶԻ���ʵ��� 4��ʵ����.cpp
//

class C�����ܶԻ���ʵ���4��ʵ����App : public CWinAppEx
{
public:
	C�����ܶԻ���ʵ���4��ʵ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����ܶԻ���ʵ���4��ʵ����App theApp;
