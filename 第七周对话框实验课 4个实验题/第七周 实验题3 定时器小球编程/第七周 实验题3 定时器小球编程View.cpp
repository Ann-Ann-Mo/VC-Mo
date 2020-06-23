
// 第七周 实验题3 定时器小球编程View.cpp : C第七周实验题3定时器小球编程View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第七周 实验题3 定时器小球编程.h"
#endif

#include "第七周 实验题3 定时器小球编程Doc.h"
#include "第七周 实验题3 定时器小球编程View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第七周实验题3定时器小球编程View

IMPLEMENT_DYNCREATE(C第七周实验题3定时器小球编程View, CView)

BEGIN_MESSAGE_MAP(C第七周实验题3定时器小球编程View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第七周实验题3定时器小球编程View 构造/析构

C第七周实验题3定时器小球编程View::C第七周实验题3定时器小球编程View()
{
	// TODO: 在此处添加构造代码
	//GetClientRect (&ccr);(ccr.bottom - ccr.top) / 2 + 30
	cr.top = 300;
	cr.bottom = 360;
	cr.left = 0;
	cr.right = 60;
	set = false;
}

C第七周实验题3定时器小球编程View::~C第七周实验题3定时器小球编程View()
{
}

BOOL C第七周实验题3定时器小球编程View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第七周实验题3定时器小球编程View 绘制

void C第七周实验题3定时器小球编程View::OnDraw(CDC* pDC)
{
	C第七周实验题3定时器小球编程Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//if (set)
	//{
    // SetTimer(1, 200, NULL);
	 // set = FALSE;
	//}
	pDC->Ellipse(&cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// C第七周实验题3定时器小球编程View 诊断

#ifdef _DEBUG
void C第七周实验题3定时器小球编程View::AssertValid() const
{
	CView::AssertValid();
}

void C第七周实验题3定时器小球编程View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第七周实验题3定时器小球编程Doc* C第七周实验题3定时器小球编程View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第七周实验题3定时器小球编程Doc)));
	return (C第七周实验题3定时器小球编程Doc*)m_pDocument;
}
#endif //_DEBUG


// C第七周实验题3定时器小球编程View 消息处理程序

void C第七周实验题3定时器小球编程View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	SetTimer(1, 200, NULL);
	dc.Ellipse(cr);
	//set = true;
	//if (set == true)
	//{
		
	//}
	CView::OnLButtonDown(nFlags, point);
}


void C第七周实验题3定时器小球编程View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}

void C第七周实验题3定时器小球编程View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//int i= nIDEvent;
	//this->GetClientRect(&rect);
	this->GetClientRect(&ccr);
	//if (flag == 0) {
		if (cr.right < ccr.right )		
		{
			cr.left += 20;
			cr.right+= 20;
			cr.top =  300;
			cr.bottom =  360;
			//Invalidate();
		}
		else
		{
			cr.left -= 20;
			cr.right -= 20;
			cr.top = 300;
			cr.bottom = 360;
			//GetClientRect(&ccr);
			//cr.top = (ccr.bottom - ccr.top) / 2 - 30;
			//cr.bottom = (ccr.bottom - ccr.top) / 2 + 30;
			//Invalidate();
		}
		Invalidate();
	//}
	CView::OnTimer(nIDEvent);
}


