
// 第七周对话框实验课 4个实验题View.cpp : C第七周对话框实验课4个实验题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第七周对话框实验课 4个实验题.h"
#endif

#include "第七周对话框实验课 4个实验题Doc.h"
#include "第七周对话框实验课 4个实验题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第七周对话框实验课4个实验题View

IMPLEMENT_DYNCREATE(C第七周对话框实验课4个实验题View, CView)

BEGIN_MESSAGE_MAP(C第七周对话框实验课4个实验题View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第七周对话框实验课4个实验题View 构造/析构

C第七周对话框实验课4个实验题View::C第七周对话框实验课4个实验题View()
{
	// TODO: 在此处添加构造代码

}

C第七周对话框实验课4个实验题View::~C第七周对话框实验课4个实验题View()
{
}

BOOL C第七周对话框实验课4个实验题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第七周对话框实验课4个实验题View 绘制

void C第七周对话框实验课4个实验题View::OnDraw(CDC* pDC)
{
	C第七周对话框实验课4个实验题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	//this->Invalidate();
	// TODO: 在此处为本机数据添加绘制代码
}


// C第七周对话框实验课4个实验题View 诊断

#ifdef _DEBUG
void C第七周对话框实验课4个实验题View::AssertValid() const
{
	CView::AssertValid();
}

void C第七周对话框实验课4个实验题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第七周对话框实验课4个实验题Doc* C第七周对话框实验课4个实验题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第七周对话框实验课4个实验题Doc)));
	return (C第七周对话框实验课4个实验题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第七周对话框实验课4个实验题View 消息处理程序


void C第七周对话框实验课4个实验题View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C第七周对话框实验课4个实验题Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top+100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left+100;
	//DC.Rectangle(pDoc->cr);
//	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}

void C第七周对话框实验课4个实验题View::OnMouseMove(UINT nFlags, CPoint point)
{C第七周对话框实验课4个实验题Doc* pDoc = GetDocument();
	if (set == 1) {
    pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top + 100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left + 100;
	//DC.Rectangle(pDoc->cr);
}
	//CClientDC DC(this);
	this->Invalidate();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CView::OnMouseMove(nFlags, point);
}

void C第七周对话框实验课4个实验题View::OnLButtonUp(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C第七周对话框实验课4个实验题Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = 0;
	pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top + 100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left + 100;
	//DC.Rectangle(pDoc->cr);
	CView::OnLButtonUp(nFlags, point);
}