
// ʵ��2 �˵������Ի���ʵ�ּӷ�.h : ʵ��2 �˵������Ի���ʵ�ּӷ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��2�˵������Ի���ʵ�ּӷ�App:
// �йش����ʵ�֣������ ʵ��2 �˵������Ի���ʵ�ּӷ�.cpp
//

class Cʵ��2�˵������Ի���ʵ�ּӷ�App : public CWinAppEx
{
public:
	Cʵ��2�˵������Ի���ʵ�ּӷ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��2�˵������Ի���ʵ�ּӷ�App theApp;
