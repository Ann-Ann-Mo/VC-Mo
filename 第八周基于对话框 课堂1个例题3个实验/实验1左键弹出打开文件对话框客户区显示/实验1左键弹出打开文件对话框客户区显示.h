
// 实验1左键弹出打开文件对话框客户区显示.h : 实验1左键弹出打开文件对话框客户区显示 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C实验1左键弹出打开文件对话框客户区显示App:
// 有关此类的实现，请参阅 实验1左键弹出打开文件对话框客户区显示.cpp
//

class C实验1左键弹出打开文件对话框客户区显示App : public CWinAppEx
{
public:
	C实验1左键弹出打开文件对话框客户区显示App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C实验1左键弹出打开文件对话框客户区显示App theApp;
