
// 第四周实验课 实验题1 求移动像素次数.h : 第四周实验课 实验题1 求移动像素次数 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第四周实验课实验题1求移动像素次数App:
// 有关此类的实现，请参阅 第四周实验课 实验题1 求移动像素次数.cpp
//

class C第四周实验课实验题1求移动像素次数App : public CWinAppEx
{
public:
	C第四周实验课实验题1求移动像素次数App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第四周实验课实验题1求移动像素次数App theApp;
