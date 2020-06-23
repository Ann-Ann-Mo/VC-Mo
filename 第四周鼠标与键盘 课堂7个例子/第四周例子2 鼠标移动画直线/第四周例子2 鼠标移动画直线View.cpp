
// 第四周例子2 鼠标移动画直线View.cpp : C第四周例子2鼠标移动画直线View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周例子2 鼠标移动画直线.h"
#endif

#include "第四周例子2 鼠标移动画直线Doc.h"
#include "第四周例子2 鼠标移动画直线View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周例子2鼠标移动画直线View

IMPLEMENT_DYNCREATE(C第四周例子2鼠标移动画直线View, CView)

BEGIN_MESSAGE_MAP(C第四周例子2鼠标移动画直线View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第四周例子2鼠标移动画直线View 构造/析构

C第四周例子2鼠标移动画直线View::C第四周例子2鼠标移动画直线View()
{
	// TODO: 在此处添加构造代码

}

C第四周例子2鼠标移动画直线View::~C第四周例子2鼠标移动画直线View()
{
}

BOOL C第四周例子2鼠标移动画直线View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周例子2鼠标移动画直线View 绘制

void C第四周例子2鼠标移动画直线View::OnDraw(CDC* pDC)
{
	C第四周例子2鼠标移动画直线Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point(0, 0);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->mpoint);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周例子2鼠标移动画直线View 诊断

#ifdef _DEBUG
void C第四周例子2鼠标移动画直线View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周例子2鼠标移动画直线View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周例子2鼠标移动画直线Doc* C第四周例子2鼠标移动画直线View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周例子2鼠标移动画直线Doc)));
	return (C第四周例子2鼠标移动画直线Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周例子2鼠标移动画直线View 消息处理程序


void C第四周例子2鼠标移动画直线View::OnMouseMove(UINT nFlags, CPoint point)
{
	C第四周例子2鼠标移动画直线Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->mpoint = point;
	InvalidateRect(NULL,FALSE);
	CView::OnMouseMove(nFlags, point);
}
