
// ����һDlg1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C����һDlg1App: 
// �йش����ʵ�֣������ ����һDlg1.cpp
//

class C����һDlg1App : public CWinApp
{
public:
	C����һDlg1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C����һDlg1App theApp;