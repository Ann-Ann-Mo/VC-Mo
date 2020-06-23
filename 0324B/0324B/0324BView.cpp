
// 0324BView.cpp : CMy0324BView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324B.h"
#endif

#include "0324BDoc.h"
#include "0324BView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324BView

IMPLEMENT_DYNCREATE(CMy0324BView, CView)

BEGIN_MESSAGE_MAP(CMy0324BView, CView)
	ON_COMMAND(ID_32771, &CMy0324BView::On32771)
	ON_WM_LBUTTONDOWN()
	ON_WM_MBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy0324BView 构造/析构

CMy0324BView::CMy0324BView()
{
	// TODO: 在此处添加构造代码

}

CMy0324BView::~CMy0324BView()
{
}

BOOL CMy0324BView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324BView 绘制

void CMy0324BView::OnDraw(CDC* /*pDC*/)
{
	CMy0324BDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0324BView 诊断

#ifdef _DEBUG
void CMy0324BView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324BView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324BDoc* CMy0324BView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324BDoc)));
	return (CMy0324BDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324BView 消息处理程序


void CMy0324BView::On32771()
{
	// TODO: 在此添加命令处理程序代码
}


void CMy0324BView::OnLButtonDown(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CPoint start;
	start.x = point.x;  //保存鼠标左键按下时坐标，为直线的起点坐标
	start.y = point.y;
	set = 1;  //设置鼠标左键按下标志，为1表示鼠标左键按下
	CView::OnLButtonDown(nFlags, point);
}


void CMy0324BView::OnMButtonUp(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = 0;  //当值为0时，表示鼠标左键UP
	CView::OnMButtonUp(nFlags, point);
}


void CMy0324BView::OnMouseMove(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CPoint stop;
	stop.x = point.x;  //每次鼠标移动，会导致直线终点坐标改变
	stop.y = point.y;
	if (set == 1)  //当鼠标移动时，如果鼠标左键也是按下，则刷新绘制直线
	{
		Invalidate(TRUE);
	}
	
	CView::OnMouseMove(nFlags, point);
}
