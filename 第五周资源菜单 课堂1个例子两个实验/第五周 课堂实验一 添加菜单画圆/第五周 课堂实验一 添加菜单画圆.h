
// ������ ����ʵ��һ ��Ӳ˵���Բ.h : ������ ����ʵ��һ ��Ӳ˵���Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����ܿ���ʵ��һ��Ӳ˵���ԲApp:
// �йش����ʵ�֣������ ������ ����ʵ��һ ��Ӳ˵���Բ.cpp
//

class C�����ܿ���ʵ��һ��Ӳ˵���ԲApp : public CWinAppEx
{
public:
	C�����ܿ���ʵ��һ��Ӳ˵���ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����ܿ���ʵ��һ��Ӳ˵���ԲApp theApp;
