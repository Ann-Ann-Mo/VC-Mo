
// ������MFCͨ���� ����3������.h : ������MFCͨ���� ����3������ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������MFCͨ�������3������App:
// �йش����ʵ�֣������ ������MFCͨ���� ����3������.cpp
//

class C������MFCͨ�������3������App : public CWinApp
{
public:
	C������MFCͨ�������3������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������MFCͨ�������3������App theApp;
