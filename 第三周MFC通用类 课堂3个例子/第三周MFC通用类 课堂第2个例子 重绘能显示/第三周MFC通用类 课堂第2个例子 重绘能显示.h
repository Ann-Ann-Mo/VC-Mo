
// ������MFCͨ���� ���õ�2������ �ػ�����ʾ.h : ������MFCͨ���� ���õ�2������ �ػ�����ʾ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������MFCͨ������õ�2�������ػ�����ʾApp:
// �йش����ʵ�֣������ ������MFCͨ���� ���õ�2������ �ػ�����ʾ.cpp
//

class C������MFCͨ������õ�2�������ػ�����ʾApp : public CWinApp
{
public:
	C������MFCͨ������õ�2�������ػ�����ʾApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������MFCͨ������õ�2�������ػ�����ʾApp theApp;
