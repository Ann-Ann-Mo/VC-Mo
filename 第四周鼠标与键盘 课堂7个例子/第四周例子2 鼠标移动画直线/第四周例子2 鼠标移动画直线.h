
// 第四周例子2 鼠标移动画直线.h : 第四周例子2 鼠标移动画直线 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第四周例子2鼠标移动画直线App:
// 有关此类的实现，请参阅 第四周例子2 鼠标移动画直线.cpp
//

class C第四周例子2鼠标移动画直线App : public CWinAppEx
{
public:
	C第四周例子2鼠标移动画直线App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第四周例子2鼠标移动画直线App theApp;
