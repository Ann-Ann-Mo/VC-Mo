
// ����������6 ���̴�д��ĸ����Բ���ƶ�.h : ����������6 ���̴�д��ĸ����Բ���ƶ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������6���̴�д��ĸ����Բ���ƶ�App:
// �йش����ʵ�֣������ ����������6 ���̴�д��ĸ����Բ���ƶ�.cpp
//

class C����������6���̴�д��ĸ����Բ���ƶ�App : public CWinApp
{
public:
	C����������6���̴�д��ĸ����Բ���ƶ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������6���̴�д��ĸ����Բ���ƶ�App theApp;
