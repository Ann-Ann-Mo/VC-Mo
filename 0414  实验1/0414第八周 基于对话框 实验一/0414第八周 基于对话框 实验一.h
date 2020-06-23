
// 0414第八周 基于对话框 实验一.h : 0414第八周 基于对话框 实验一 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy0414第八周基于对话框实验一App:
// 有关此类的实现，请参阅 0414第八周 基于对话框 实验一.cpp
//

class CMy0414第八周基于对话框实验一App : public CWinAppEx
{
public:
	CMy0414第八周基于对话框实验一App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414第八周基于对话框实验一App theApp;
