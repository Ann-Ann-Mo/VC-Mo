
// ������MFCͨ���� ���õ�3������ �����ݷ����ĵ���.h : ������MFCͨ���� ���õ�3������ �����ݷ����ĵ��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���App:
// �йش����ʵ�֣������ ������MFCͨ���� ���õ�3������ �����ݷ����ĵ���.cpp
//

class C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���App : public CWinAppEx
{
public:
	C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���App theApp;
