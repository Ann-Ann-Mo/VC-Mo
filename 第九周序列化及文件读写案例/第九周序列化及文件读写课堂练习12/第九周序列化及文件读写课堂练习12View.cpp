
// 第九周序列化及文件读写课堂练习12View.cpp : C第九周序列化及文件读写课堂练习12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第九周序列化及文件读写课堂练习12.h"
#endif

#include "第九周序列化及文件读写课堂练习12Doc.h"
#include "第九周序列化及文件读写课堂练习12View.h"
#include <fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第九周序列化及文件读写课堂练习12View

IMPLEMENT_DYNCREATE(C第九周序列化及文件读写课堂练习12View, CView)

BEGIN_MESSAGE_MAP(C第九周序列化及文件读写课堂练习12View, CView)
	ON_COMMAND(ID_32771, &C第九周序列化及文件读写课堂练习12View::On32771)
	ON_COMMAND(ID_FILE_OPEN, &C第九周序列化及文件读写课堂练习12View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C第九周序列化及文件读写课堂练习12View::OnFileSaveAs)
END_MESSAGE_MAP()

// C第九周序列化及文件读写课堂练习12View 构造/析构

C第九周序列化及文件读写课堂练习12View::C第九周序列化及文件读写课堂练习12View()
{
	// TODO: 在此处添加构造代码

}

C第九周序列化及文件读写课堂练习12View::~C第九周序列化及文件读写课堂练习12View()
{
}

BOOL C第九周序列化及文件读写课堂练习12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第九周序列化及文件读写课堂练习12View 绘制

void C第九周序列化及文件读写课堂练习12View::OnDraw(CDC* /*pDC*/)
{
	C第九周序列化及文件读写课堂练习12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第九周序列化及文件读写课堂练习12View 诊断

#ifdef _DEBUG
void C第九周序列化及文件读写课堂练习12View::AssertValid() const
{
	CView::AssertValid();
}

void C第九周序列化及文件读写课堂练习12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第九周序列化及文件读写课堂练习12Doc* C第九周序列化及文件读写课堂练习12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第九周序列化及文件读写课堂练习12Doc)));
	return (C第九周序列化及文件读写课堂练习12Doc*)m_pDocument;
}
#endif //_DEBUG


// C第九周序列化及文件读写课堂练习12View 消息处理程序


void C第九周序列化及文件读写课堂练习12View::On32771()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(cfd.GetPathName());
		//CString s = cfd.GetPathName();
		ofs << CT2A(filename.GetString()) << endl;

	}
	// TODO: 在此添加命令处理程序代码
}


void C第九周序列化及文件读写课堂练习12View::OnFileOpen()
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
		while (ifs >> s)
		{
			dc.TextOutW(x, y, CString(s.c_str()));
			y += 30;
		}

		CImage img;
		img.Destroy();
		img.Load(filename);
		{   int w, h, sx, sy;
		CRect rect;
		GetClientRect(&rect);//取客户区信息
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		if (rect_ratio>img_ratio)
		{
			h = rect.Height();
			w = img_ratio*h;
			sx = (rect.Width() - w) / 2;
			sy = 0;

		}
		else {
			w = rect.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (rect.Height() - h) / 2;
		}
		}
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
	// TODO: 在此添加命令处理程序代码
}


void C第九周序列化及文件读写课堂练习12View::OnFileSaveAs()
{
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << "OK" << endl;
		CString s = cfd.GetPathName();
		ofs << CT2A(s.GetString())<< endl;
	}
	// TODO: 在此添加命令处理程序代码
}
