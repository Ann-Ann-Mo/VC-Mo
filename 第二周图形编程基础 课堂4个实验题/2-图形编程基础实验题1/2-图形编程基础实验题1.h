
// 2-图形编程基础实验题1.h : 2-图形编程基础实验题1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy2图形编程基础实验题1App:
// 有关此类的实现，请参阅 2-图形编程基础实验题1.cpp
//

class CMy2图形编程基础实验题1App : public CWinAppEx
{
public:
	CMy2图形编程基础实验题1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy2图形编程基础实验题1App theApp;
