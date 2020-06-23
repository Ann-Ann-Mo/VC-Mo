
// 第四周实验课 实验2方向键控制矩形移动View.cpp : C第四周实验课实验2方向键控制矩形移动View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周实验课 实验2方向键控制矩形移动.h"
#endif

#include "第四周实验课 实验2方向键控制矩形移动Doc.h"
#include "第四周实验课 实验2方向键控制矩形移动View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周实验课实验2方向键控制矩形移动View

IMPLEMENT_DYNCREATE(C第四周实验课实验2方向键控制矩形移动View, CView)

BEGIN_MESSAGE_MAP(C第四周实验课实验2方向键控制矩形移动View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第四周实验课实验2方向键控制矩形移动View 构造/析构

C第四周实验课实验2方向键控制矩形移动View::C第四周实验课实验2方向键控制矩形移动View()
{
	// TODO: 在此处添加构造代码

}

C第四周实验课实验2方向键控制矩形移动View::~C第四周实验课实验2方向键控制矩形移动View()
{
}

BOOL C第四周实验课实验2方向键控制矩形移动View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周实验课实验2方向键控制矩形移动View 绘制

void C第四周实验课实验2方向键控制矩形移动View::OnDraw(CDC* pDC)
{
	C第四周实验课实验2方向键控制矩形移动Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
//	pDoc->ca.Add(pDoc->cr);
	//for(int i = 0; i <= pDoc->ca.GetSize(); i++ )
	CClientDC dc(this);
		//pDoc->ca.Add(&pDoc->ca);
	if(pDoc->set)
	{
    CRect clrect;
	GetClientRect(&clrect);
	this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 60;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 80;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 60;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 80;
	pDC->Rectangle(pDoc->cr);
	}
	pDoc->set = FALSE;
 pDC->Rectangle(pDoc->cr);
	//InvalidateRect(NULL, TRUE);
//	}
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周实验课实验2方向键控制矩形移动View 诊断

#ifdef _DEBUG
void C第四周实验课实验2方向键控制矩形移动View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周实验课实验2方向键控制矩形移动View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周实验课实验2方向键控制矩形移动Doc* C第四周实验课实验2方向键控制矩形移动View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周实验课实验2方向键控制矩形移动Doc)));
	return (C第四周实验课实验2方向键控制矩形移动Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周实验课实验2方向键控制矩形移动View 消息处理程序


void C第四周实验课实验2方向键控制矩形移动View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	C第四周实验课实验2方向键控制矩形移动Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clrect;
	CClientDC dc(this);
	/*GetClientRect(&clrect);
	this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 10;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 8;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 10;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 8;
	dc.Rectangle(pDoc->cr);*/
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (clrect.right >=(cr.right - cr.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 3;
			pDoc->cr.bottom -= 3;
		}
		break;
	case VK_DOWN:
		if(clrect.bottom>=(cr.bottom-cr.top))
	{
			pDoc->cr.top += 3;
			pDoc->cr.bottom += 3;
	}
		break;
	case VK_HOME:
		if (pDoc->cr.top > 0 & pDoc->cr.left > 0)
		{
			pDoc->cr.top = pDoc->cr.top / 2;
			pDoc->cr.left = pDoc->cr.left / 2;
		}
		break;
	case VK_END:
		pDoc->cr.bottom = pDoc->cr.bottom * 2;
		pDoc->cr.right = pDoc->cr.right * 2;
	}
	//dc.Rectangle(pDoc->cr);
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void C第四周实验课实验2方向键控制矩形移动View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C第四周实验课实验2方向键控制矩形移动Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//CClientDC dc(this);
	CRect clrect;
	GetClientRect(&clrect);
this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 60;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 80;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 60;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 80;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
