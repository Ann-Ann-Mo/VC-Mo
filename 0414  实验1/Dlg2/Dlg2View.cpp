
// Dlg2View.cpp : CDlg2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg2.h"
#endif

#include "Dlg2Doc.h"
#include "Dlg2View.h"
#include "MyD2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg2View

IMPLEMENT_DYNCREATE(CDlg2View, CView)

BEGIN_MESSAGE_MAP(CDlg2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// CDlg2View 构造/析构

CDlg2View::CDlg2View()
{
	// TODO: 在此处添加构造代码

}

CDlg2View::~CDlg2View()
{
}

BOOL CDlg2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg2View 绘制

void CDlg2View::OnDraw(CDC* /*pDC*/)
{
	CDlg2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg2View 诊断

#ifdef _DEBUG
void CDlg2View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg2Doc* CDlg2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg2Doc)));
	return (CDlg2Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg2View 消息处理程序


void CDlg2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyD2 md2;
	int r = md2.DoModal();
	if(r == IDOK)
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 155, s1);
	}

	CView::OnRButtonDblClk(nFlags, point);
}
