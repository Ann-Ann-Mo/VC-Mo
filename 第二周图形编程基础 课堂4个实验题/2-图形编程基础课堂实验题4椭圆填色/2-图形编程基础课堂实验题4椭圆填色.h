
// 2-ͼ�α�̻�������ʵ����4��Բ��ɫ.h : 2-ͼ�α�̻�������ʵ����4��Բ��ɫ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫApp:
// �йش����ʵ�֣������ 2-ͼ�α�̻�������ʵ����4��Բ��ɫ.cpp
//

class CMy2ͼ�α�̻�������ʵ����4��Բ��ɫApp : public CWinAppEx
{
public:
	CMy2ͼ�α�̻�������ʵ����4��Բ��ɫApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy2ͼ�α�̻�������ʵ����4��Բ��ɫApp theApp;
