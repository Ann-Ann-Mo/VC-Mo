
// ����������7 Ӧ�ó��򴰿ڵĽ���.h : ����������7 Ӧ�ó��򴰿ڵĽ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C����������7Ӧ�ó��򴰿ڵĽ���App:
// �йش����ʵ�֣������ ����������7 Ӧ�ó��򴰿ڵĽ���.cpp
//

class C����������7Ӧ�ó��򴰿ڵĽ���App : public CWinAppEx
{
public:
	C����������7Ӧ�ó��򴰿ڵĽ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������7Ӧ�ó��򴰿ڵĽ���App theApp;
