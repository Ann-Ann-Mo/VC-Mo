
// ������ʵ��4 �ؼ�������Ĺ���.h : ������ʵ��4 �ؼ�������Ĺ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ʵ��4�ؼ�������Ĺ���App:
// �йش����ʵ�֣������ ������ʵ��4 �ؼ�������Ĺ���.cpp
//

class C������ʵ��4�ؼ�������Ĺ���App : public CWinAppEx
{
public:
	C������ʵ��4�ؼ�������Ĺ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ʵ��4�ؼ�������Ĺ���App theApp;
