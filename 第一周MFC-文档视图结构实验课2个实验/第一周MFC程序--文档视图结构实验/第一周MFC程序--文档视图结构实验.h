
// ��һ��MFC����--�ĵ���ͼ�ṹʵ��.h : ��һ��MFC����--�ĵ���ͼ�ṹʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��һ��MFC�����ĵ���ͼ�ṹʵ��App:
// �йش����ʵ�֣������ ��һ��MFC����--�ĵ���ͼ�ṹʵ��.cpp
//

class C��һ��MFC�����ĵ���ͼ�ṹʵ��App : public CWinApp
{
public:
	C��һ��MFC�����ĵ���ͼ�ṹʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��һ��MFC�����ĵ���ͼ�ṹʵ��App theApp;
