
// ����������5 ���̿���Բ���ƶ�.h : ����������5 ���̿���Բ���ƶ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������5���̿���Բ���ƶ�App:
// �йش����ʵ�֣������ ����������5 ���̿���Բ���ƶ�.cpp
//

class C����������5���̿���Բ���ƶ�App : public CWinAppEx
{
public:
	C����������5���̿���Բ���ƶ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������5���̿���Բ���ƶ�App theApp;
