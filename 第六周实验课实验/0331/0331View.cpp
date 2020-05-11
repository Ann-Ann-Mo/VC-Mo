
// 0331View.cpp : CMy0331View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0331.h"
#endif

#include "0331Doc.h"
#include "0331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0331View

IMPLEMENT_DYNCREATE(CMy0331View, CView)

BEGIN_MESSAGE_MAP(CMy0331View, CView)
END_MESSAGE_MAP()

// CMy0331View 构造/析构

CMy0331View::CMy0331View()
{
	// TODO: 在此处添加构造代码

}

CMy0331View::~CMy0331View()
{
}

BOOL CMy0331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0331View 绘制

void CMy0331View::OnDraw(CDC* /*pDC*/)
{
	CMy0331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0331View 诊断

#ifdef _DEBUG
void CMy0331View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331Doc* CMy0331View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331Doc)));
	return (CMy0331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331View 消息处理程序
