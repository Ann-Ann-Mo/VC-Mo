
// 第三周 实验课实验3View.cpp : C第三周实验课实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周 实验课实验3.h"
#endif

#include "第三周 实验课实验3Doc.h"
#include "第三周 实验课实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周实验课实验3View

IMPLEMENT_DYNCREATE(C第三周实验课实验3View, CView)

BEGIN_MESSAGE_MAP(C第三周实验课实验3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第三周实验课实验3View 构造/析构

C第三周实验课实验3View::C第三周实验课实验3View()
{
	// TODO: 在此处添加构造代码

}

C第三周实验课实验3View::~C第三周实验课实验3View()
{
}

BOOL C第三周实验课实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周实验课实验3View 绘制

void C第三周实验课实验3View::OnDraw(CDC* pDC)
{
	C第三周实验课实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return; 
	CRect cr1(60, 360,200, 60);
	CRect cr2(260, 360, 400, 60);
	CRect cr3(460, 360, 600, 60);
	pDC->Rectangle(&cr1);
	pDC->Rectangle(&cr2);
	pDC->Rectangle(&cr3);
	pDoc->a = rand() % 50 + 5;
	pDoc->b = rand() % 50 + 5;
	//dc.Ellipse(pDoc->cr1);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周实验课实验3View 诊断

#ifdef _DEBUG
void C第三周实验课实验3View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周实验课实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周实验课实验3Doc* C第三周实验课实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周实验课实验3Doc)));
	return (C第三周实验课实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周实验课实验3View 消息处理程序


void C第三周实验课实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C第三周实验课实验3Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s1, s2,s3,s4;
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s3.Format(_T("%d"), pDoc->a+pDoc->b);
	if (point.x > 60 && point.x < 200 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s1);
	else if (point.x > 260 && point.x < 400 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s2);
	else if (point.x > 460 && point.x < 600 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s3);
	else
	{
		s4 = "点击无效";
		dc.TextOutW(point.x, point.y, s4);
	}

	CView::OnLButtonDown(nFlags, point);
}
