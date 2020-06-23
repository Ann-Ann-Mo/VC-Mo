
// 第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘View.cpp : C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘.h"
#endif

#include "第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘Doc.h"
#include "第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View

IMPLEMENT_DYNCREATE(C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View, CView)

BEGIN_MESSAGE_MAP(C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::OnFileOpen)
END_MESSAGE_MAP()

// C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 构造/析构

C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View()
{
	// TODO: 在此处添加构造代码

}

C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::~C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View()
{
}

BOOL C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 绘制

void C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::OnDraw(CDC* /*pDC*/)
{
	C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	RedrawWindow();
	// TODO: 在此处为本机数据添加绘制代码
}


// C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 诊断

#ifdef _DEBUG
void C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::AssertValid() const
{
	CView::AssertValid();
}

void C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc* C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc)));
	return (C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc*)m_pDocument;
}
#endif //_DEBUG


// C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 消息处理程序


void C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if(r==IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(0, 0, filename);
		CImage img;
		img.Load(filename);
		//img.Destroy();
		int w, h, sx, sy;
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
			else 
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
			dc.SetStretchBltMode(HALFTONE);
		img.Draw(dc.m_hDC, sx, sy, w, h);
	
		//img.Draw(dc.m_hDC, 100, 100, img.GetWidth(), img.GetHeight());
	}	
}
