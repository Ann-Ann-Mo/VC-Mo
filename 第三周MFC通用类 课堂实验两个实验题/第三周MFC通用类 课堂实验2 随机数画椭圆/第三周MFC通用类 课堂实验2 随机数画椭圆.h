
// ������MFCͨ���� ����ʵ��2 ���������Բ.h : ������MFCͨ���� ����ʵ��2 ���������Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������MFCͨ�������ʵ��2���������ԲApp:
// �йش����ʵ�֣������ ������MFCͨ���� ����ʵ��2 ���������Բ.cpp
//

class C������MFCͨ�������ʵ��2���������ԲApp : public CWinAppEx
{
public:
	C������MFCͨ�������ʵ��2���������ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������MFCͨ�������ʵ��2���������ԲApp theApp;
