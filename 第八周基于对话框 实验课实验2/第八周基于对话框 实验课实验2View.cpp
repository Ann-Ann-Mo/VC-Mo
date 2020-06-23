
// 第八周基于对话框 实验课实验2View.cpp : C第八周基于对话框实验课实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周基于对话框 实验课实验2.h"
#endif

#include "第八周基于对话框 实验课实验2Doc.h"
#include "第八周基于对话框 实验课实验2View.h"
#include "Dlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周基于对话框实验课实验2View

IMPLEMENT_DYNCREATE(C第八周基于对话框实验课实验2View, CView)

BEGIN_MESSAGE_MAP(C第八周基于对话框实验课实验2View, CView)
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_output, &C第八周基于对话框实验课实验2View::Onoutput)
END_MESSAGE_MAP()

// C第八周基于对话框实验课实验2View 构造/析构

C第八周基于对话框实验课实验2View::C第八周基于对话框实验课实验2View()
{
	// TODO: 在此处添加构造代码

}

C第八周基于对话框实验课实验2View::~C第八周基于对话框实验课实验2View()
{
}

BOOL C第八周基于对话框实验课实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周基于对话框实验课实验2View 绘制

void C第八周基于对话框实验课实验2View::OnDraw(CDC* pDC)
{
	C第八周基于对话框实验课实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周基于对话框实验课实验2View 诊断

#ifdef _DEBUG
void C第八周基于对话框实验课实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周基于对话框实验课实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周基于对话框实验课实验2Doc* C第八周基于对话框实验课实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周基于对话框实验课实验2Doc)));
	return (C第八周基于对话框实验课实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周基于对话框实验课实验2View 消息处理程序


void C第八周基于对话框实验课实验2View::OnMouseMove(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C第八周基于对话框实验课实验2Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->rect.top = point.y;
	pDoc->rect.left = point.x;
	pDoc->rect.bottom = point.y-66;
	pDoc->rect.right = point.x+66;
	DC.Ellipse(pDoc->rect);
	//this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void C第八周基于对话框实验课实验2View::Onoutput()
{
	C第八周基于对话框实验课实验2Doc* pDoc = GetDocument();
	Dlg0 dlg;
	CClientDC DC(this);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		pDoc->rect.top = dlg.y;
		pDoc->rect.bottom = dlg.x;
		pDoc->rect.bottom = dlg.y - 66;
		pDoc->rect.right = dlg.x + 66;
		DC.Ellipse(pDoc->rect);
	}
	// TODO: 在此添加命令处理程序代码
}
