
// ����������3 �ǿͻ�������ƶ���Ϣ.h : ����������3 �ǿͻ�������ƶ���Ϣ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������3�ǿͻ�������ƶ���ϢApp:
// �йش����ʵ�֣������ ����������3 �ǿͻ�������ƶ���Ϣ.cpp
//

class C����������3�ǿͻ�������ƶ���ϢApp : public CWinAppEx
{
public:
	C����������3�ǿͻ�������ƶ���ϢApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������3�ǿͻ�������ƶ���ϢApp theApp;
