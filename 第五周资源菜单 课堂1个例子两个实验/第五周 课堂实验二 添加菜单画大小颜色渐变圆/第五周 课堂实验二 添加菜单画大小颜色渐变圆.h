
// ������ ����ʵ��� ��Ӳ˵�����С��ɫ����Բ.h : ������ ����ʵ��� ��Ӳ˵�����С��ɫ����Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲApp:
// �йش����ʵ�֣������ ������ ����ʵ��� ��Ӳ˵�����С��ɫ����Բ.cpp
//

class C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲApp : public CWinAppEx
{
public:
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲApp theApp;
