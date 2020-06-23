
// 第四周例子4 键盘控制鼠标捕获窗口外消息View.cpp : C第四周例子4键盘控制鼠标捕获窗口外消息View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周例子4 键盘控制鼠标捕获窗口外消息.h"
#endif

#include "第四周例子4 键盘控制鼠标捕获窗口外消息Doc.h"
#include "第四周例子4 键盘控制鼠标捕获窗口外消息View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第四周例子4键盘控制鼠标捕获窗口外消息View

IMPLEMENT_DYNCREATE(C第四周例子4键盘控制鼠标捕获窗口外消息View, CView)

BEGIN_MESSAGE_MAP(C第四周例子4键盘控制鼠标捕获窗口外消息View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第四周例子4键盘控制鼠标捕获窗口外消息View 构造/析构

C第四周例子4键盘控制鼠标捕获窗口外消息View::C第四周例子4键盘控制鼠标捕获窗口外消息View()
{
	// TODO: 在此处添加构造代码

}

C第四周例子4键盘控制鼠标捕获窗口外消息View::~C第四周例子4键盘控制鼠标捕获窗口外消息View()
{
}

BOOL C第四周例子4键盘控制鼠标捕获窗口外消息View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第四周例子4键盘控制鼠标捕获窗口外消息View 绘制

void C第四周例子4键盘控制鼠标捕获窗口外消息View::OnDraw(CDC* /*pDC*/)
{
	C第四周例子4键盘控制鼠标捕获窗口外消息Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第四周例子4键盘控制鼠标捕获窗口外消息View 诊断

#ifdef _DEBUG
void C第四周例子4键盘控制鼠标捕获窗口外消息View::AssertValid() const
{
	CView::AssertValid();
}

void C第四周例子4键盘控制鼠标捕获窗口外消息View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第四周例子4键盘控制鼠标捕获窗口外消息Doc* C第四周例子4键盘控制鼠标捕获窗口外消息View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第四周例子4键盘控制鼠标捕获窗口外消息Doc)));
	return (C第四周例子4键盘控制鼠标捕获窗口外消息Doc*)m_pDocument;
}
#endif //_DEBUG


// C第四周例子4键盘控制鼠标捕获窗口外消息View 消息处理程序


void C第四周例子4键盘控制鼠标捕获窗口外消息View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();//捕获鼠标消息
	CView::OnLButtonDown(nFlags, point);
}


void C第四周例子4键盘控制鼠标捕获窗口外消息View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();//释放鼠标捕获
	CView::OnLButtonUp(nFlags, point);
}


void C第四周例子4键盘控制鼠标捕获窗口外消息View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	CClientDC dc(this);
	s.Format(_T("x=%d  y=%d"), point.x, point.y);
	dc.TextOutW(200, 300, s);
	CView::OnMouseMove(nFlags, point);
}
