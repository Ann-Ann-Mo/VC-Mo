
// Dlg0 ����.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDlg0����App: 
// �йش����ʵ�֣������ Dlg0 ����.cpp
//

class CDlg0����App : public CWinApp
{
public:
	CDlg0����App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDlg0����App theApp;