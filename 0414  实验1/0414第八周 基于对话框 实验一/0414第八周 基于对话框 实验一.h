
// 0414�ڰ��� ���ڶԻ��� ʵ��һ.h : 0414�ڰ��� ���ڶԻ��� ʵ��һ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һApp:
// �йش����ʵ�֣������ 0414�ڰ��� ���ڶԻ��� ʵ��һ.cpp
//

class CMy0414�ڰ��ܻ��ڶԻ���ʵ��һApp : public CWinAppEx
{
public:
	CMy0414�ڰ��ܻ��ڶԻ���ʵ��һApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414�ڰ��ܻ��ڶԻ���ʵ��һApp theApp;
