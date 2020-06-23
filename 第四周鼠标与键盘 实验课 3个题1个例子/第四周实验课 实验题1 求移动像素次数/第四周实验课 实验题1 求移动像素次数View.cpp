
// 第四周实验课 实验题1 求移动像素次数View.cpp : C第四周实验课实验题1求移动像素次数View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周实验课 实验题1 求移动像素次数.h"
#endif

#include "第四周实验课 实验题1 求移动像素次数Doc.h"
#include "第四周实验课 实验题1 求移动像素次数View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周实验课实验题1求移动像素次数View

IMPLEMENT_DYNCREATE(C第四周实验课实验题1求移动像素次数View, CView)

BEGIN_MESSAGE_MAP(C第四周实验课实验题1求移动像素次数View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第四周实验课实验题1求移动像素次数View 构造/析构

C第四周实验课实验题1求移动像素次数View::C第四周实验课实验题1求移动像素次数View()
{
	// TODO: 在此处添加构造代码

}

C第四周实验课实验题1求移动像素次数View::~C第四周实验课实验题1求移动像素次数View()
{
}

BOOL C第四周实验课实验题1求移动像素次数View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周实验课实验题1求移动像素次数View 绘制

void C第四周实验课实验题1求移动像素次数View::OnDraw(CDC* /*pDC*/)
{
	C第四周实验课实验题1求移动像素次数Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周实验课实验题1求移动像素次数View 诊断

#ifdef _DEBUG
void C第四周实验课实验题1求移动像素次数View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周实验课实验题1求移动像素次数View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周实验课实验题1求移动像素次数Doc* C第四周实验课实验题1求移动像素次数View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周实验课实验题1求移动像素次数Doc)));
	return (C第四周实验课实验题1求移动像素次数Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周实验课实验题1求移动像素次数View 消息处理程序


void C第四周实验课实验题1求移动像素次数View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C第四周实验课实验题1求移动像素次数Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->sx = point.x;
	CView::OnLButtonDown(nFlags, point);
}


void C第四周实验课实验题1求移动像素次数View::OnLButtonUp(UINT nFlags, CPoint point)
{
	C第四周实验课实验题1求移动像素次数Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC DC(this);
	CString s;
	pDoc->sy = point.x;
	s.Format(_T("%d像素移动一次，共移动了%d次"), (pDoc->sy - pDoc->sx)/pDoc->count, pDoc->count);
	DC.TextOutW(200, 300, s);
	pDoc->count = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C第四周实验课实验题1求移动像素次数View::OnMouseMove(UINT nFlags, CPoint point)
{
	C第四周实验课实验题1求移动像素次数Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->count++;
	CView::OnMouseMove(nFlags, point);
}
