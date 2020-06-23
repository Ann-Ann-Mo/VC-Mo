
// 实验2 菜单弹出对话框实现加法View.cpp : C实验2菜单弹出对话框实现加法View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验2 菜单弹出对话框实现加法.h"
#endif

#include "实验2 菜单弹出对话框实现加法Doc.h"
#include "实验2 菜单弹出对话框实现加法View.h"
#include"Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验2菜单弹出对话框实现加法View

IMPLEMENT_DYNCREATE(C实验2菜单弹出对话框实现加法View, CView)

BEGIN_MESSAGE_MAP(C实验2菜单弹出对话框实现加法View, CView)
	ON_COMMAND(ID_output, &C实验2菜单弹出对话框实现加法View::Onoutput)
END_MESSAGE_MAP()

// C实验2菜单弹出对话框实现加法View 构造/析构

C实验2菜单弹出对话框实现加法View::C实验2菜单弹出对话框实现加法View()
{
	// TODO: 在此处添加构造代码

}

C实验2菜单弹出对话框实现加法View::~C实验2菜单弹出对话框实现加法View()
{
}

BOOL C实验2菜单弹出对话框实现加法View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验2菜单弹出对话框实现加法View 绘制

void C实验2菜单弹出对话框实现加法View::OnDraw(CDC* /*pDC*/)
{
	C实验2菜单弹出对话框实现加法Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实验2菜单弹出对话框实现加法View 诊断

#ifdef _DEBUG
void C实验2菜单弹出对话框实现加法View::AssertValid() const
{
	CView::AssertValid();
}

void C实验2菜单弹出对话框实现加法View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验2菜单弹出对话框实现加法Doc* C实验2菜单弹出对话框实现加法View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验2菜单弹出对话框实现加法Doc)));
	return (C实验2菜单弹出对话框实现加法Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验2菜单弹出对话框实现加法View 消息处理程序


void C实验2菜单弹出对话框实现加法View::Onoutput()
{
	Dlg1 dlg;
	int r=dlg.DoModal();
	// TODO: 在此添加命令处理程序代码
}
