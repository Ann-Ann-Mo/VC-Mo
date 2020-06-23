
// 0414第八周 基于对话框 实验一View.cpp : CMy0414第八周基于对话框实验一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414第八周 基于对话框 实验一.h"
#endif

#include "0414第八周 基于对话框 实验一Doc.h"
#include "0414第八周 基于对话框 实验一View.h"
#include "MyD81.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414第八周基于对话框实验一View

IMPLEMENT_DYNCREATE(CMy0414第八周基于对话框实验一View, CView)

BEGIN_MESSAGE_MAP(CMy0414第八周基于对话框实验一View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy0414第八周基于对话框实验一View 构造/析构

CMy0414第八周基于对话框实验一View::CMy0414第八周基于对话框实验一View()
{
	// TODO: 在此处添加构造代码

}

CMy0414第八周基于对话框实验一View::~CMy0414第八周基于对话框实验一View()
{
}

BOOL CMy0414第八周基于对话框实验一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414第八周基于对话框实验一View 绘制

void CMy0414第八周基于对话框实验一View::OnDraw(CDC* /*pDC*/)
{
	CMy0414第八周基于对话框实验一Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0414第八周基于对话框实验一View 诊断

#ifdef _DEBUG
void CMy0414第八周基于对话框实验一View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414第八周基于对话框实验一View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414第八周基于对话框实验一Doc* CMy0414第八周基于对话框实验一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414第八周基于对话框实验一Doc)));
	return (CMy0414第八周基于对话框实验一Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414第八周基于对话框实验一View 消息处理程序


void CMy0414第八周基于对话框实验一View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd1(true);
	int r = cfd1.DoModal();
	if (r == IDOK)
	{
		CString s1 = cfd1.GetFileName();
		GetDC()->TextOutW(200, 155, s1);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
