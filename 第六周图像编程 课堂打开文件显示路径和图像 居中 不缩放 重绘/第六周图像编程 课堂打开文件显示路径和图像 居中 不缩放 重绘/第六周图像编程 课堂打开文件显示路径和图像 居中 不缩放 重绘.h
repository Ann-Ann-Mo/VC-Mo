
// ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�.h : ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�App:
// �йش����ʵ�֣������ ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�.cpp
//

class C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�App : public CWinAppEx
{
public:
	C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�App theApp;
