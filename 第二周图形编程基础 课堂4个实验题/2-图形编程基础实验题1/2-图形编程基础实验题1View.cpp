
// 2-图形编程基础实验题1View.cpp : CMy2图形编程基础实验题1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2-图形编程基础实验题1.h"
#endif

#include "2-图形编程基础实验题1Doc.h"
#include "2-图形编程基础实验题1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2图形编程基础实验题1View

IMPLEMENT_DYNCREATE(CMy2图形编程基础实验题1View, CView)

BEGIN_MESSAGE_MAP(CMy2图形编程基础实验题1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy2图形编程基础实验题1View 构造/析构

CMy2图形编程基础实验题1View::CMy2图形编程基础实验题1View()
{
	// TODO: 在此处添加构造代码

}

CMy2图形编程基础实验题1View::~CMy2图形编程基础实验题1View()
{
}

BOOL CMy2图形编程基础实验题1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2图形编程基础实验题1View 绘制

void CMy2图形编程基础实验题1View::OnDraw(CDC* /*pDC*/)
{
	CMy2图形编程基础实验题1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int r;
	CPoint point;
	r = rand() % (100 - 10) + 10;
	CClientDC dc(this);
	CRect rect(point.x - r, point.y + r, point.x + r, point.y - r);
	dc.Ellipse(&rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy2图形编程基础实验题1View 诊断

#ifdef _DEBUG
void CMy2图形编程基础实验题1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2图形编程基础实验题1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2图形编程基础实验题1Doc* CMy2图形编程基础实验题1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2图形编程基础实验题1Doc)));
	return (CMy2图形编程基础实验题1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2图形编程基础实验题1View 消息处理程序


void CMy2图形编程基础实验题1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//       ????
	CView::OnLButtonDown(nFlags, point);
}
