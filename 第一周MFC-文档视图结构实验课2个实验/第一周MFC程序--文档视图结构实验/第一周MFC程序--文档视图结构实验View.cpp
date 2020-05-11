
// 第一周MFC程序--文档视图结构实验View.cpp : C第一周MFC程序文档视图结构实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第一周MFC程序--文档视图结构实验.h"
#endif

#include "第一周MFC程序--文档视图结构实验Doc.h"
#include "第一周MFC程序--文档视图结构实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第一周MFC程序文档视图结构实验View

IMPLEMENT_DYNCREATE(C第一周MFC程序文档视图结构实验View, CView)

BEGIN_MESSAGE_MAP(C第一周MFC程序文档视图结构实验View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第一周MFC程序文档视图结构实验View 构造/析构

C第一周MFC程序文档视图结构实验View::C第一周MFC程序文档视图结构实验View()
{
	// TODO: 在此处添加构造代码

}

C第一周MFC程序文档视图结构实验View::~C第一周MFC程序文档视图结构实验View()
{
}

BOOL C第一周MFC程序文档视图结构实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第一周MFC程序文档视图结构实验View 绘制

void C第一周MFC程序文档视图结构实验View::OnDraw(CDC* pDC)
{
	C第一周MFC程序文档视图结构实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第一周MFC程序文档视图结构实验View 诊断

#ifdef _DEBUG
void C第一周MFC程序文档视图结构实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第一周MFC程序文档视图结构实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第一周MFC程序文档视图结构实验Doc* C第一周MFC程序文档视图结构实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第一周MFC程序文档视图结构实验Doc)));
	return (C第一周MFC程序文档视图结构实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第一周MFC程序文档视图结构实验View 消息处理程序


void C第一周MFC程序文档视图结构实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第一周MFC程序文档视图结构实验Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(_T("%s"), pDoc->name);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
