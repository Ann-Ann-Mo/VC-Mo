
// ������ʵ��� ʵ��2��������ƾ����ƶ�.h : ������ʵ��� ʵ��2��������ƾ����ƶ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ʵ���ʵ��2��������ƾ����ƶ�App:
// �йش����ʵ�֣������ ������ʵ��� ʵ��2��������ƾ����ƶ�.cpp
//

class C������ʵ���ʵ��2��������ƾ����ƶ�App : public CWinAppEx
{
public:
	C������ʵ���ʵ��2��������ƾ����ƶ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ʵ���ʵ��2��������ƾ����ƶ�App theApp;
