
// 第四周例子7 应用程序窗口的焦点View.cpp : C第四周例子7应用程序窗口的焦点View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周例子7 应用程序窗口的焦点.h"
#endif

#include "第四周例子7 应用程序窗口的焦点Doc.h"
#include "第四周例子7 应用程序窗口的焦点View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周例子7应用程序窗口的焦点View

IMPLEMENT_DYNCREATE(C第四周例子7应用程序窗口的焦点View, CView)

BEGIN_MESSAGE_MAP(C第四周例子7应用程序窗口的焦点View, CView)
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C第四周例子7应用程序窗口的焦点View 构造/析构

C第四周例子7应用程序窗口的焦点View::C第四周例子7应用程序窗口的焦点View()
{
	// TODO: 在此处添加构造代码

}

C第四周例子7应用程序窗口的焦点View::~C第四周例子7应用程序窗口的焦点View()
{
}

BOOL C第四周例子7应用程序窗口的焦点View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周例子7应用程序窗口的焦点View 绘制

void C第四周例子7应用程序窗口的焦点View::OnDraw(CDC* pDC)
{
	C第四周例子7应用程序窗口的焦点Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 300, pDoc->s);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周例子7应用程序窗口的焦点View 诊断

#ifdef _DEBUG
void C第四周例子7应用程序窗口的焦点View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周例子7应用程序窗口的焦点View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周例子7应用程序窗口的焦点Doc* C第四周例子7应用程序窗口的焦点View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周例子7应用程序窗口的焦点Doc)));
	return (C第四周例子7应用程序窗口的焦点Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周例子7应用程序窗口的焦点View 消息处理程序


void C第四周例子7应用程序窗口的焦点View::OnSetFocus(CWnd* pOldWnd)
{
	C第四周例子7应用程序窗口的焦点Doc* pDoc = GetDocument();
	CView::OnSetFocus(pOldWnd);
	pDoc->s = "获得了焦点.";
		InvalidateRect(NULL, TRUE);
	// TODO: 在此处添加消息处理程序代码
}


void C第四周例子7应用程序窗口的焦点View::OnKillFocus(CWnd* pNewWnd)
{
	CView::OnKillFocus(pNewWnd);
	C第四周例子7应用程序窗口的焦点Doc* pDoc = GetDocument();
	pDoc->s = "失去 了焦点.";
	InvalidateRect(NULL, TRUE);
	// TODO: 在此处添加消息处理程序代码
}


void C第四周例子7应用程序窗口的焦点View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MessageBeep(1);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
