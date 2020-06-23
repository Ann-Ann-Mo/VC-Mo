
// 实验一View.cpp : C实验一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验一.h"
#endif
#include <math.h>
#include "实验一Doc.h"
#include "实验一View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验一View

IMPLEMENT_DYNCREATE(C实验一View, CView)

BEGIN_MESSAGE_MAP(C实验一View, CView)
	ON_COMMAND(ID_32771DAA, &C实验一View::On32771daa)
END_MESSAGE_MAP()

// C实验一View 构造/析构

C实验一View::C实验一View()
{
	// TODO: 在此处添加构造代码

}

C实验一View::~C实验一View()
{
}

BOOL C实验一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验一View 绘制

void C实验一View::OnDraw(CDC* /*pDC*/)
{
	C实验一Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实验一View 诊断

#ifdef _DEBUG
void C实验一View::AssertValid() const
{
	CView::AssertValid();
}

void C实验一View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验一Doc* C实验一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验一Doc)));
	return (C实验一Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验一View 消息处理程序


void C实验一View::On32771daa()
{
	// TODO: 在此添加命令处理程序代码
	CDC* pDC = GetDC();//获得设备指针
	int xa = 100, ya = 300, xb = 300, yb = 200, c = RGB(255, 0, 0);//定义直线的两端点，直线颜色
	int x, y;
	
	float dx, dy, k;
	dx = (float)(xb - xa), dy = (float)(yb - ya);
	k = dy / dx, y = ya;
	int m = abs(k);
	//float abs();
	if (m<1)
	{
		for (x = xa; x <= xb; x++)
		{
			pDC->SetPixel(x, int(y + 0.5), c);
			y = y + k;
		}
	}
	if (m >= 1)
	{
		for (y = ya; y <= yb; y++)
		{
			pDC->SetPixel(int(x + 0.5), y, c);
			x = x + 1 / k;
		}
	}
	ReleaseDC(pDC);
}
