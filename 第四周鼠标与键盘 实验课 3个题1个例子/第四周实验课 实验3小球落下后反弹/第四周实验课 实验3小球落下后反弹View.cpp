
// 第四周实验课 实验3小球落下后反弹View.cpp : C第四周实验课实验3小球落下后反弹View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周实验课 实验3小球落下后反弹.h"
#endif

#include "第四周实验课 实验3小球落下后反弹Doc.h"
#include "第四周实验课 实验3小球落下后反弹View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周实验课实验3小球落下后反弹View

IMPLEMENT_DYNCREATE(C第四周实验课实验3小球落下后反弹View, CView)

BEGIN_MESSAGE_MAP(C第四周实验课实验3小球落下后反弹View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C第四周实验课实验3小球落下后反弹View 构造/析构

C第四周实验课实验3小球落下后反弹View::C第四周实验课实验3小球落下后反弹View()
{
	// TODO: 在此处添加构造代码
	N = 5;
	set=TRUE;
	for (int i=0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, -20, t + 20, 0);
		cr.Add(rect);

	}
}

C第四周实验课实验3小球落下后反弹View::~C第四周实验课实验3小球落下后反弹View()
{
}

BOOL C第四周实验课实验3小球落下后反弹View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周实验课实验3小球落下后反弹View 绘制

void C第四周实验课实验3小球落下后反弹View::OnDraw(CDC* pDC)
{
	C第四周实验课实验3小球落下后反弹Doc* pDoc = GetDocument();
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
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周实验课实验3小球落下后反弹View 诊断

#ifdef _DEBUG
void C第四周实验课实验3小球落下后反弹View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周实验课实验3小球落下后反弹View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周实验课实验3小球落下后反弹Doc* C第四周实验课实验3小球落下后反弹View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周实验课实验3小球落下后反弹Doc)));
	return (C第四周实验课实验3小球落下后反弹Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周实验课实验3小球落下后反弹View 消息处理程序


void C第四周实验课实验3小球落下后反弹View::OnTimer(UINT_PTR nIDEvent)
{CRect rect;
	C第四周实验课实验3小球落下后反弹Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	this->GetClientRect(&rect);
		if (rect.bottom - cr[i].bottom <= 0)
			pDoc->s[i] = 1;
		if (pDoc->s[i] != 1)
		{
			cr[i].top += 20;
			cr[i].bottom += 20;
		}
		else if (pDoc->s[i] == 1)
		{
			cr[i].top -= 20;
			cr[i].bottom -= 20;
		}
	Invalidate();
	CView::OnTimer(nIDEvent);
}

