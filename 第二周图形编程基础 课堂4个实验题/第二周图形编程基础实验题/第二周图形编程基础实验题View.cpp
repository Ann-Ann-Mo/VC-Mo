
// 第二周图形编程基础实验题View.cpp : C第二周图形编程基础实验题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第二周图形编程基础实验题.h"
#endif

#include "第二周图形编程基础实验题Doc.h"
#include "第二周图形编程基础实验题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第二周图形编程基础实验题View

IMPLEMENT_DYNCREATE(C第二周图形编程基础实验题View, CView)

BEGIN_MESSAGE_MAP(C第二周图形编程基础实验题View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第二周图形编程基础实验题View 构造/析构

C第二周图形编程基础实验题View::C第二周图形编程基础实验题View()
{
	// TODO: 在此处添加构造代码

}

C第二周图形编程基础实验题View::~C第二周图形编程基础实验题View()
{
}

BOOL C第二周图形编程基础实验题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第二周图形编程基础实验题View 绘制

void C第二周图形编程基础实验题View::OnDraw(CDC* pDC)
{
	C第二周图形编程基础实验题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: 在此处为本机数据添加绘制代码
}


// C第二周图形编程基础实验题View 诊断

#ifdef _DEBUG
void C第二周图形编程基础实验题View::AssertValid() const
{
	CView::AssertValid();
}

void C第二周图形编程基础实验题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第二周图形编程基础实验题Doc* C第二周图形编程基础实验题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第二周图形编程基础实验题Doc)));
	return (C第二周图形编程基础实验题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第二周图形编程基础实验题View 消息处理程序


void C第二周图形编程基础实验题View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r;
	r = rand()%(100-10)+10;
	CClientDC dc(this);
	CRect rect(point.x - r, point.y + r, point.x + r, point.y - r);
	dc.Ellipse(&rect);
	CView::OnLButtonDown(nFlags, point);
}
