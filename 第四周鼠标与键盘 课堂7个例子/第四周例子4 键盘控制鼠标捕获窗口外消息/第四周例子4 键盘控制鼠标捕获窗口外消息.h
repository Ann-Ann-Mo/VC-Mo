
// ����������4 ���̿�����겶�񴰿�����Ϣ.h : ����������4 ���̿�����겶�񴰿�����Ϣ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������4���̿�����겶�񴰿�����ϢApp:
// �йش����ʵ�֣������ ����������4 ���̿�����겶�񴰿�����Ϣ.cpp
//

class C����������4���̿�����겶�񴰿�����ϢApp : public CWinAppEx
{
public:
	C����������4���̿�����겶�񴰿�����ϢApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������4���̿�����겶�񴰿�����ϢApp theApp;
