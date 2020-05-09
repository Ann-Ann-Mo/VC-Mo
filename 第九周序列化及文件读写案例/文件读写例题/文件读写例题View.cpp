
// 文件读写例题View.cpp : C文件读写例题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "文件读写例题.h"
#endif

#include "文件读写例题Doc.h"
#include "文件读写例题View.h"

#include <fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C文件读写例题View

IMPLEMENT_DYNCREATE(C文件读写例题View, CView)

BEGIN_MESSAGE_MAP(C文件读写例题View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C文件读写例题View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C文件读写例题View::OnFileSaveAs)
END_MESSAGE_MAP()

// C文件读写例题View 构造/析构

C文件读写例题View::C文件读写例题View()
{
	// TODO: 在此处添加构造代码

}

C文件读写例题View::~C文件读写例题View()
{
}

BOOL C文件读写例题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C文件读写例题View 绘制

void C文件读写例题View::OnDraw(CDC* /*pDC*/)
{
	C文件读写例题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C文件读写例题View 诊断

#ifdef _DEBUG
void C文件读写例题View::AssertValid() const
{
	CView::AssertValid();
}

void C文件读写例题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C文件读写例题Doc* C文件读写例题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C文件读写例题Doc)));
	return (C文件读写例题Doc*)m_pDocument;
}
#endif //_DEBUG


// C文件读写例题View 消息处理程序


void C文件读写例题View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;

		CClientDC dc(this);
		int x = 20, y = 10;
		while(ifs>>s)
		{
			dc.TextOutW(x,y, CString(s.c_str()));
			y += 30;
		}

	}
	// TODO: 在此添加命令处理程序代码
}


void C文件读写例题View::OnFileSaveAs()
{
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << "OK" << endl;
		ofs << cfd.GetPathName() << endl;
	}
	// TODO: 在此添加命令处理程序代码
}
