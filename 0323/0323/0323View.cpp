
// 0323View.cpp : CMy0323View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0323.h"
#endif

#include "0323Doc.h"
#include "0323View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323View

IMPLEMENT_DYNCREATE(CMy0323View, CView)



// CMy0323View 构造/析构

CMy0323View::CMy0323View()
{
	// TODO: 在此处添加构造代码

}

CMy0323View::~CMy0323View()
{
}

BOOL CMy0323View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0323View 绘制

void CMy0323View::OnDraw(CDC* pDC)
{
	CMy0323Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0323View 打印

BOOL CMy0323View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0323View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0323View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0323View 诊断

#ifdef _DEBUG
void CMy0323View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323Doc* CMy0323View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323Doc)));
	return (CMy0323Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323View 消息处理程序


void CMy0323View::On32771()
{
	// TODO: 在此添加命令处理程序代码
CString s = _T("201812300052");
CClientDC dc(this);
dc.TextOutW(200, 200, s);
}