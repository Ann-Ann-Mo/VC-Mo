
// 0407View.cpp : CMy0407View 类的实现



// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0407.h"
#endif
#include "stdafx.h"
#include "0407Doc.h"
#include "0407View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0407View

IMPLEMENT_DYNCREATE(CMy0407View, CView)

BEGIN_MESSAGE_MAP(CMy0407View, CView)
	ON_COMMAND(ID_32771, &CMy0407View::On32771)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy0407View 构造/析构

CMy0407View::CMy0407View()
{
	// TODO: 在此处添加构造代码

}

CMy0407View::~CMy0407View()
{
}

BOOL CMy0407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0407View 绘制

void CMy0407View::OnDraw(CDC* /*pDC*/)
{
	CMy0407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0407View 诊断

#ifdef _DEBUG
void CMy0407View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0407Doc* CMy0407View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0407Doc)));
	return (CMy0407Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0407View 消息处理程序


void CMy0407View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int R, X, Y;
		R = dlg.r;
		X = dlg.x;
		Y = dlg.r;
		CRect re(X - R, Y-R,X + R, Y + R);
		GetDC()->Ellipse(re);
	}
}


void CMy0407View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg0 *pD=new MyDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}
