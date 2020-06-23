
// 200317View.cpp : CMy200317View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "200317.h"
#endif

#include "200317Doc.h"
#include "200317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy200317View

IMPLEMENT_DYNCREATE(CMy200317View, CView)

BEGIN_MESSAGE_MAP(CMy200317View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy200317View 构造/析构

CMy200317View::CMy200317View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 160;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy200317View::~CMy200317View()
{
	
	
}

BOOL CMy200317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy200317View 绘制

void CMy200317View::OnDraw(CDC* pDC)
{
	CMy200317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = FALSE;
		}
	}
	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy200317View 诊断

#ifdef _DEBUG
void CMy200317View::AssertValid() const
{
	CView::AssertValid();
}

void CMy200317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy200317Doc* CMy200317View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy200317Doc)));
	return (CMy200317Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy200317View 消息处理程序


void CMy200317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
