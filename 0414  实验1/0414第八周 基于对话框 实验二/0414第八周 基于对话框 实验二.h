
// 0414�ڰ��� ���ڶԻ��� ʵ���.h : 0414�ڰ��� ���ڶԻ��� ʵ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414�ڰ��ܻ��ڶԻ���ʵ���App:
// �йش����ʵ�֣������ 0414�ڰ��� ���ڶԻ��� ʵ���.cpp
//

class CMy0414�ڰ��ܻ��ڶԻ���ʵ���App : public CWinAppEx
{
public:
	CMy0414�ڰ��ܻ��ڶԻ���ʵ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414�ڰ��ܻ��ڶԻ���ʵ���App theApp;
