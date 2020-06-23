
// 0317View.cpp : CMy0317View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0317.h"
#endif

#include "0317Doc.h"
#include "0317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317View

IMPLEMENT_DYNCREATE(CMy0317View, CView)

BEGIN_MESSAGE_MAP(CMy0317View, CView)
	ON_WM_TIMER()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy0317View 构造/析构

CMy0317View::CMy0317View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy0317View::~CMy0317View()
{
}

BOOL CMy0317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0317View 绘制

void CMy0317View::OnDraw(CDC* pDC)
{
	CMy0317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		set = FALSE;
	}
	// TODO: 在此处为本机数据添加绘制代码
 for (int i = 0; i < N; i++)
{ 
	pDC->Ellipse(cr[i]);
}
 }
// CMy0317View 诊断

#ifdef _DEBUG
void CMy0317View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317Doc* CMy0317View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317Doc)));
	return (CMy0317Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317View 消息处理程序


void CMy0317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMy0317View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CMy0317Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
/*	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{   case VK_LEFT:
		if (pDoc->tagRec.left > 0)
		{
			pDoc->tagRec.left -= 6;
			pDoc->tagRec.right -= 6;
		}
		break;
	case VK_RIGHT:
			if (pDoc->tagRec.right <= (clientRec.right - clientRec.left))
			{
				pDoc->tagRec.left += 6;
				pDoc->tagRec.right += 6;
			}

	}*/
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
