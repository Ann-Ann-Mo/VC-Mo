
// 0324AView.cpp : CMy0324AView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324A.h"
#endif

#include "0324ADoc.h"
#include "0324AView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324AView

IMPLEMENT_DYNCREATE(CMy0324AView, CView)

BEGIN_MESSAGE_MAP(CMy0324AView, CView)
	ON_COMMAND(ID_32771, &CMy0324AView::On32771)
END_MESSAGE_MAP()

// CMy0324AView 构造/析构

CMy0324AView::CMy0324AView()
{
	// TODO: 在此处添加构造代码
	s = " ";
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

CMy0324AView::~CMy0324AView()
{
}

BOOL CMy0324AView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324AView 绘制

void CMy0324AView::OnDraw(CDC* pDC)
{
	CMy0324ADoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0324AView 诊断

#ifdef _DEBUG
void CMy0324AView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324AView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324ADoc* CMy0324AView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324ADoc)));
	return (CMy0324ADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324AView 消息处理程序


void CMy0324AView::On32771()
{
	CString s = _T("莫文凤");
	CClientDC dc(this);
	dc.TextOutW(708, 312, s);
	// TODO: 在此添加命令处理程序代码
}
