
// 第七周实验4 控件与变量的关联View.cpp : C第七周实验4控件与变量的关联View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第七周实验4 控件与变量的关联.h"
#endif

#include "第七周实验4 控件与变量的关联Doc.h"
#include "第七周实验4 控件与变量的关联View.h"
#include"Dlg3.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第七周实验4控件与变量的关联View

IMPLEMENT_DYNCREATE(C第七周实验4控件与变量的关联View, CView)

BEGIN_MESSAGE_MAP(C第七周实验4控件与变量的关联View, CView)
	ON_COMMAND(ID_output, &C第七周实验4控件与变量的关联View::Onoutput)
END_MESSAGE_MAP()

// C第七周实验4控件与变量的关联View 构造/析构

C第七周实验4控件与变量的关联View::C第七周实验4控件与变量的关联View()
{
	// TODO: 在此处添加构造代码

}

C第七周实验4控件与变量的关联View::~C第七周实验4控件与变量的关联View()
{
}

BOOL C第七周实验4控件与变量的关联View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第七周实验4控件与变量的关联View 绘制

void C第七周实验4控件与变量的关联View::OnDraw(CDC* /*pDC*/)
{
	C第七周实验4控件与变量的关联Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第七周实验4控件与变量的关联View 诊断

#ifdef _DEBUG
void C第七周实验4控件与变量的关联View::AssertValid() const
{
	CView::AssertValid();
}

void C第七周实验4控件与变量的关联View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第七周实验4控件与变量的关联Doc* C第七周实验4控件与变量的关联View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第七周实验4控件与变量的关联Doc)));
	return (C第七周实验4控件与变量的关联Doc*)m_pDocument;
}
#endif //_DEBUG


// C第七周实验4控件与变量的关联View 消息处理程序


void C第七周实验4控件与变量的关联View::Onoutput()
{
	Dlg3 dlg;
	int r = dlg.DoModal();
	// TODO: 在此添加命令处理程序代码
}
