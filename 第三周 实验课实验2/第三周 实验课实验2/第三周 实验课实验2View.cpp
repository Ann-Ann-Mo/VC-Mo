
// 第三周 实验课实验2View.cpp : C第三周实验课实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周 实验课实验2.h"
#endif

#include "第三周 实验课实验2Doc.h"
#include "第三周 实验课实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周实验课实验2View

IMPLEMENT_DYNCREATE(C第三周实验课实验2View, CView)

BEGIN_MESSAGE_MAP(C第三周实验课实验2View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C第三周实验课实验2View 构造/析构

C第三周实验课实验2View::C第三周实验课实验2View()
{
	// TODO: 在此处添加构造代码

}

C第三周实验课实验2View::~C第三周实验课实验2View()
{
}

BOOL C第三周实验课实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周实验课实验2View 绘制

void C第三周实验课实验2View::OnDraw(CDC* /*pDC*/)
{
	C第三周实验课实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周实验课实验2View 诊断

#ifdef _DEBUG
void C第三周实验课实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周实验课实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周实验课实验2Doc* C第三周实验课实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周实验课实验2Doc)));
	return (C第三周实验课实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周实验课实验2View 消息处理程序


void C第三周实验课实验2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认
		C第三周实验课实验2Doc* pDoc = GetDocument();
		CString s;
		CClientDC dc(this);
		s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
		dc.TextOutW(200, 300, s);
	CView::OnLButtonUp(nFlags, point);
}
