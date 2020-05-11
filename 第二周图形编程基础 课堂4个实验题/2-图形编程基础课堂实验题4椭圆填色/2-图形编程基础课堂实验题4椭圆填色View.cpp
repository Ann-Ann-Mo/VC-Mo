
// 2-图形编程基础课堂实验题4椭圆填色View.cpp : CMy2图形编程基础课堂实验题4椭圆填色View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2-图形编程基础课堂实验题4椭圆填色.h"
#endif

#include "2-图形编程基础课堂实验题4椭圆填色Doc.h"
#include "2-图形编程基础课堂实验题4椭圆填色View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2图形编程基础课堂实验题4椭圆填色View

IMPLEMENT_DYNCREATE(CMy2图形编程基础课堂实验题4椭圆填色View, CView)

BEGIN_MESSAGE_MAP(CMy2图形编程基础课堂实验题4椭圆填色View, CView)
END_MESSAGE_MAP()

// CMy2图形编程基础课堂实验题4椭圆填色View 构造/析构

CMy2图形编程基础课堂实验题4椭圆填色View::CMy2图形编程基础课堂实验题4椭圆填色View()
{
	// TODO: 在此处添加构造代码

}

CMy2图形编程基础课堂实验题4椭圆填色View::~CMy2图形编程基础课堂实验题4椭圆填色View()
{
}

BOOL CMy2图形编程基础课堂实验题4椭圆填色View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy2图形编程基础课堂实验题4椭圆填色View 绘制

void CMy2图形编程基础课堂实验题4椭圆填色View::OnDraw(CDC* pDC)
{
	CMy2图形编程基础课堂实验题4椭圆填色Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CRect rect;
	GetClientRect (&rect);
	int red = 66, green = 166, blue = 66;
		int color = RGB(red, green, blue);
		CBrush newbrush(color);
		CBrush*oldbrush = pDC->SelectObject(&newbrush);
		pDC->Ellipse(rect);
		pDC->SelectObject(oldbrush);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy2图形编程基础课堂实验题4椭圆填色View 诊断

#ifdef _DEBUG
void CMy2图形编程基础课堂实验题4椭圆填色View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2图形编程基础课堂实验题4椭圆填色View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2图形编程基础课堂实验题4椭圆填色Doc* CMy2图形编程基础课堂实验题4椭圆填色View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2图形编程基础课堂实验题4椭圆填色Doc)));
	return (CMy2图形编程基础课堂实验题4椭圆填色Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2图形编程基础课堂实验题4椭圆填色View 消息处理程序
