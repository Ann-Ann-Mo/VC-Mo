
// 第四周例子6 键盘大写字母控制圆形移动View.cpp : C第四周例子6键盘大写字母控制圆形移动View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周例子6 键盘大写字母控制圆形移动.h"
#endif

#include "第四周例子6 键盘大写字母控制圆形移动Doc.h"
#include "第四周例子6 键盘大写字母控制圆形移动View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周例子6键盘大写字母控制圆形移动View

IMPLEMENT_DYNCREATE(C第四周例子6键盘大写字母控制圆形移动View, CView)

BEGIN_MESSAGE_MAP(C第四周例子6键盘大写字母控制圆形移动View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C第四周例子6键盘大写字母控制圆形移动View 构造/析构

C第四周例子6键盘大写字母控制圆形移动View::C第四周例子6键盘大写字母控制圆形移动View()
{
	
	// TODO: 在此处添加构造代码

}

C第四周例子6键盘大写字母控制圆形移动View::~C第四周例子6键盘大写字母控制圆形移动View()
{
}

BOOL C第四周例子6键盘大写字母控制圆形移动View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周例子6键盘大写字母控制圆形移动View 绘制

void C第四周例子6键盘大写字母控制圆形移动View::OnDraw(CDC* pDC)
{
	C第四周例子6键盘大写字母控制圆形移动Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周例子6键盘大写字母控制圆形移动View 诊断

#ifdef _DEBUG
void C第四周例子6键盘大写字母控制圆形移动View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周例子6键盘大写字母控制圆形移动View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周例子6键盘大写字母控制圆形移动Doc* C第四周例子6键盘大写字母控制圆形移动View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周例子6键盘大写字母控制圆形移动Doc)));
	return (C第四周例子6键盘大写字母控制圆形移动Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周例子6键盘大写字母控制圆形移动View 消息处理程序


void C第四周例子6键盘大写字母控制圆形移动View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第四周例子6键盘大写字母控制圆形移动Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect clrect;
	GetClientRect(&clrect);
	switch (nChar)
	{
	case 'L':
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 50;
			pDoc->cr.right -= 50;
		}
		break;
	case 'R':
		if (pDoc->cr.right <= (clrect.right-clrect.left))
		{
			pDoc->cr.left += 50;
			pDoc->cr.right += 50;
		}
		break;}
		InvalidateRect(NULL,TRUE);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
