
// 第五周 课堂实验一 添加菜单画圆View.cpp : C第五周课堂实验一添加菜单画圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周 课堂实验一 添加菜单画圆.h"
#endif

#include "第五周 课堂实验一 添加菜单画圆Doc.h"
#include "第五周 课堂实验一 添加菜单画圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周课堂实验一添加菜单画圆View

IMPLEMENT_DYNCREATE(C第五周课堂实验一添加菜单画圆View, CView)

BEGIN_MESSAGE_MAP(C第五周课堂实验一添加菜单画圆View, CView)
	ON_COMMAND(ID_32771, &C第五周课堂实验一添加菜单画圆View::On32771)
END_MESSAGE_MAP()

// C第五周课堂实验一添加菜单画圆View 构造/析构

C第五周课堂实验一添加菜单画圆View::C第五周课堂实验一添加菜单画圆View()
{
	// TODO: 在此处添加构造代码

}

C第五周课堂实验一添加菜单画圆View::~C第五周课堂实验一添加菜单画圆View()
{
}

BOOL C第五周课堂实验一添加菜单画圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周课堂实验一添加菜单画圆View 绘制

void C第五周课堂实验一添加菜单画圆View::OnDraw(CDC* /*pDC*/)
{
	C第五周课堂实验一添加菜单画圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周课堂实验一添加菜单画圆View 诊断

#ifdef _DEBUG
void C第五周课堂实验一添加菜单画圆View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周课堂实验一添加菜单画圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周课堂实验一添加菜单画圆Doc* C第五周课堂实验一添加菜单画圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周课堂实验一添加菜单画圆Doc)));
	return (C第五周课堂实验一添加菜单画圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周课堂实验一添加菜单画圆View 消息处理程序


void C第五周课堂实验一添加菜单画圆View::On32771()
{
	C第五周课堂实验一添加菜单画圆Doc* pDoc = GetDocument();
	CRect rect;
	CClientDC dc(this);
	GetClientRect(&rect);
	for (int i = 0; i < pDoc->N; i++)
	{
		dc.Ellipse((rect.right - rect.left) / 2 - i, (rect.bottom - rect.top) / 2 - i, (rect.right - rect.left) / 2 + i, (rect.bottom - rect.top) / 2 + i);

	}
	// TODO: 在此添加命令处理程序代码
}
