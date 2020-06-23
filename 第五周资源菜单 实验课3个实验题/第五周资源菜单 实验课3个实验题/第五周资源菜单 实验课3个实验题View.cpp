
// 第五周资源菜单 实验课3个实验题View.cpp : C第五周资源菜单实验课3个实验题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周资源菜单 实验课3个实验题.h"
#endif

#include "第五周资源菜单 实验课3个实验题Doc.h"
#include "第五周资源菜单 实验课3个实验题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周资源菜单实验课3个实验题View

IMPLEMENT_DYNCREATE(C第五周资源菜单实验课3个实验题View, CView)

BEGIN_MESSAGE_MAP(C第五周资源菜单实验课3个实验题View, CView)
	ON_COMMAND(ID_32775, &C第五周资源菜单实验课3个实验题View::On32775)
	ON_COMMAND(ID_32771, &C第五周资源菜单实验课3个实验题View::On32771)
	ON_COMMAND(ID_32772, &C第五周资源菜单实验课3个实验题View::On32772)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_32773, &C第五周资源菜单实验课3个实验题View::On32773)
	ON_COMMAND(ID_32774, &C第五周资源菜单实验课3个实验题View::On32774)
END_MESSAGE_MAP()

// C第五周资源菜单实验课3个实验题View 构造/析构

C第五周资源菜单实验课3个实验题View::C第五周资源菜单实验课3个实验题View()
{
	BITMAP BM;
	bm.LoadBitmap(IDB_BITMAP1);
	bm.GetBitmap(&BM);
	bmh = BM.bmHeight;
	bmw = BM.bmWidth;


	// TODO: 在此处添加构造代码

}

C第五周资源菜单实验课3个实验题View::~C第五周资源菜单实验课3个实验题View()
{
}

BOOL C第五周资源菜单实验课3个实验题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周资源菜单实验课3个实验题View 绘制

void C第五周资源菜单实验课3个实验题View::OnDraw(CDC* /*pDC*/)
{
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周资源菜单实验课3个实验题View 诊断

#ifdef _DEBUG
void C第五周资源菜单实验课3个实验题View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周资源菜单实验课3个实验题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周资源菜单实验课3个实验题Doc* C第五周资源菜单实验课3个实验题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周资源菜单实验课3个实验题Doc)));
	return (C第五周资源菜单实验课3个实验题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周资源菜单实验课3个实验题View 消息处理程序


void C第五周资源菜单实验课3个实验题View::On32775()//画圆
{   
	// TODO: 在此添加命令处理程序代码
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	//CClientDC dc(this);
	pDoc->a = 3;
	
}


void C第五周资源菜单实验课3个实验题View::On32771()//显示名字
{
	CClientDC dc(this);
	CString s = _T("莫文凤");
	dc.TextOutW(60, 60, s);
	// TODO: 在此添加命令处理程序代码
}


void C第五周资源菜单实验课3个实验题View::On32772()//显示位图
{
	CClientDC dc(this);
	CDC DC;
	DC.CreateCompatibleDC(NULL);
	DC.SelectObject(bm);
	dc.BitBlt(100, 100, bmw, bmh, &DC, 100,100, SRCCOPY);
	// TODO: 在此添加命令处理程序代码
}


void C第五周资源菜单实验课3个实验题View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	pDoc->cr.left = point.x;
	pDoc->cr.top = point.y; 
	pDoc->pointu.x = point.x;
	pDoc->pointu.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void C第五周资源菜单实验课3个实验题View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->cr.right = point.x;
	pDoc->cr.bottom = point.y;
	pDoc->pointd.x = point.x;
	pDoc->pointd.y = point.y;
	switch (pDoc->a)
	{
	case 1:
	{
		dc.MoveTo(pDoc->pointu.x, pDoc->pointu.y);
		dc.LineTo(pDoc->pointd.x, pDoc->pointd.y);
		break;
	}
	case 2:
	{
		dc.Rectangle(pDoc->cr);
	    break;
	}
	case 3:
	{
		if ((pDoc->cr.right - pDoc->cr.left) > (pDoc->cr.bottom - pDoc->cr.top))
		{
			pDoc->cr.bottom = pDoc->cr.bottom;
			pDoc->cr.top = pDoc->cr.top;
			pDoc->cr.left = (pDoc->cr.right - pDoc->cr.left) / 2 - (pDoc->cr.bottom - pDoc->cr.top) / 2;
			pDoc->cr.right = (pDoc->cr.right - pDoc->cr.left) / 2 + (pDoc->cr.bottom - pDoc->cr.top) / 2;
		}
		else
		{
			pDoc->cr.left = pDoc->cr.left;
			pDoc->cr.right = pDoc->cr.right;
			pDoc->cr.top = (pDoc->cr.bottom - pDoc->cr.top) / 2 - (pDoc->cr.right - pDoc->cr.left) / 2;
			pDoc->cr.bottom = (pDoc->cr.bottom - pDoc->cr.top) / 2 + (pDoc->cr.right - pDoc->cr.left) / 2;
		}
		dc.Ellipse(pDoc->cr);
	}
	}
	//dc.Ellipse(pDoc->cr);
	CView::OnLButtonUp(nFlags, point);
}


void C第五周资源菜单实验课3个实验题View::On32773()//画线
{   
	// TODO: 在此添加命令处理程序代码
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	pDoc->a = 1;
}


void C第五周资源菜单实验课3个实验题View::On32774()//画矩形
{
	C第五周资源菜单实验课3个实验题Doc* pDoc = GetDocument();
	pDoc->a = 2;
	//CClientDC dc(this);
	
	// TODO: 在此添加命令处理程序代码
}
