
// 第四周鼠标与键盘 课堂7个例子View.cpp : C第四周鼠标与键盘课堂7个例子View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周鼠标与键盘 课堂7个例子.h"
#endif

#include "第四周鼠标与键盘 课堂7个例子Doc.h"
#include "第四周鼠标与键盘 课堂7个例子View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周鼠标与键盘课堂7个例子View

IMPLEMENT_DYNCREATE(C第四周鼠标与键盘课堂7个例子View, CView)

BEGIN_MESSAGE_MAP(C第四周鼠标与键盘课堂7个例子View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第四周鼠标与键盘课堂7个例子View 构造/析构

C第四周鼠标与键盘课堂7个例子View::C第四周鼠标与键盘课堂7个例子View()
{
	// TODO: 在此处添加构造代码

}

C第四周鼠标与键盘课堂7个例子View::~C第四周鼠标与键盘课堂7个例子View()
{
}

BOOL C第四周鼠标与键盘课堂7个例子View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周鼠标与键盘课堂7个例子View 绘制

void C第四周鼠标与键盘课堂7个例子View::OnDraw(CDC* pDC)
{
	C第四周鼠标与键盘课堂7个例子Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周鼠标与键盘课堂7个例子View 诊断

#ifdef _DEBUG
void C第四周鼠标与键盘课堂7个例子View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周鼠标与键盘课堂7个例子View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周鼠标与键盘课堂7个例子Doc* C第四周鼠标与键盘课堂7个例子View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周鼠标与键盘课堂7个例子Doc)));
	return (C第四周鼠标与键盘课堂7个例子Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周鼠标与键盘课堂7个例子View 消息处理程序


void C第四周鼠标与键盘课堂7个例子View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第四周鼠标与键盘课堂7个例子Doc* pDoc = GetDocument();
	if (nFlags&MK_SHIFT)
	{
		pDoc->cr.left = 30; pDoc->cr.top = 30;
		pDoc->cr.right = 300; pDoc->cr.bottom = 300;
	}
	else
	{
		pDoc->cr.left = point.x; pDoc->cr.top = point.y;
		pDoc->cr.right = point.x + 270; pDoc->cr.bottom = point.y + 270;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
