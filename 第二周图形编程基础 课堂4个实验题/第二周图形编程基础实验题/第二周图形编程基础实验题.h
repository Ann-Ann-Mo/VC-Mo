
// �ڶ���ͼ�α�̻���ʵ����.h : �ڶ���ͼ�α�̻���ʵ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ڶ���ͼ�α�̻���ʵ����App:
// �йش����ʵ�֣������ �ڶ���ͼ�α�̻���ʵ����.cpp
//

class C�ڶ���ͼ�α�̻���ʵ����App : public CWinApp
{
public:
	C�ڶ���ͼ�α�̻���ʵ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ڶ���ͼ�α�̻���ʵ����App theApp;
