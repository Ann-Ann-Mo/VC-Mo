
// ������MFCͨ���� ����ʵ����������.h : ������MFCͨ���� ����ʵ���������� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������MFCͨ�������ʵ����������App:
// �йش����ʵ�֣������ ������MFCͨ���� ����ʵ����������.cpp
//

class C������MFCͨ�������ʵ����������App : public CWinAppEx
{
public:
	C������MFCͨ�������ʵ����������App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������MFCͨ�������ʵ����������App theApp;
