
// 第五周 课堂实验二 添加菜单画大小颜色渐变圆.h : 第五周 课堂实验二 添加菜单画大小颜色渐变圆 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第五周课堂实验二添加菜单画大小颜色渐变圆App:
// 有关此类的实现，请参阅 第五周 课堂实验二 添加菜单画大小颜色渐变圆.cpp
//

class C第五周课堂实验二添加菜单画大小颜色渐变圆App : public CWinAppEx
{
public:
	C第五周课堂实验二添加菜单画大小颜色渐变圆App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第五周课堂实验二添加菜单画大小颜色渐变圆App theApp;
