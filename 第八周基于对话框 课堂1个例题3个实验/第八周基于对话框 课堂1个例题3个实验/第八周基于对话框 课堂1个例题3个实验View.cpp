
// 第八周基于对话框 课堂1个例题3个实验View.cpp : C第八周基于对话框课堂1个例题3个实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第八周基于对话框 课堂1个例题3个实验.h"
#endif

#include "第八周基于对话框 课堂1个例题3个实验Doc.h"
#include "第八周基于对话框 课堂1个例题3个实验View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第八周基于对话框课堂1个例题3个实验View

IMPLEMENT_DYNCREATE(C第八周基于对话框课堂1个例题3个实验View, CView)

BEGIN_MESSAGE_MAP(C第八周基于对话框课堂1个例题3个实验View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第八周基于对话框课堂1个例题3个实验View 构造/析构

C第八周基于对话框课堂1个例题3个实验View::C第八周基于对话框课堂1个例题3个实验View()
{
	// TODO: 在此处添加构造代码

}

C第八周基于对话框课堂1个例题3个实验View::~C第八周基于对话框课堂1个例题3个实验View()
{
}

BOOL C第八周基于对话框课堂1个例题3个实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第八周基于对话框课堂1个例题3个实验View 绘制

void C第八周基于对话框课堂1个例题3个实验View::OnDraw(CDC* /*pDC*/)
{
	C第八周基于对话框课堂1个例题3个实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第八周基于对话框课堂1个例题3个实验View 诊断

#ifdef _DEBUG
void C第八周基于对话框课堂1个例题3个实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第八周基于对话框课堂1个例题3个实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第八周基于对话框课堂1个例题3个实验Doc* C第八周基于对话框课堂1个例题3个实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第八周基于对话框课堂1个例题3个实验Doc)));
	return (C第八周基于对话框课堂1个例题3个实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第八周基于对话框课堂1个例题3个实验View 消息处理程序


void C第八周基于对话框课堂1个例题3个实验View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg md2;
	int r = md2.DoModal();
	if (r == IDOK)
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 100, s1);
	}
	CView::OnRButtonDblClk(nFlags, point);
}
