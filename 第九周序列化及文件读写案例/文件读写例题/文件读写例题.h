
// 文件读写例题.h : 文件读写例题 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C文件读写例题App:
// 有关此类的实现，请参阅 文件读写例题.cpp
//

class C文件读写例题App : public CWinAppEx
{
public:
	C文件读写例题App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C文件读写例题App theApp;
