
// 03.30BView.cpp : CMy0330BView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "03.30B.h"
#endif

#include "03.30BDoc.h"
#include "03.30BView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330BView

IMPLEMENT_DYNCREATE(CMy0330BView, CView)

BEGIN_MESSAGE_MAP(CMy0330BView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330BView::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330BView 构造/析构

CMy0330BView::CMy0330BView()
{
	// TODO: 在此处添加构造代码

}

CMy0330BView::~CMy0330BView()
{
}

BOOL CMy0330BView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0330BView 绘制

void CMy0330BView::OnDraw(CDC* /*pDC*/)
{
	CMy0330BDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0330BView 诊断

#ifdef _DEBUG
void CMy0330BView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330BView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330BDoc* CMy0330BView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330BDoc)));
	return (CMy0330BDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330BView 消息处理程序


void CMy0330BView::OnFileOpen()
{
	int w1, h1;
	CString str;       // 字串
	int size;           // 字体大小
{
CSize txtpot;
CFont fn;            
txtpot = pdc->GetTextExtent(str);                  
w1 = txtpot.cx;
h1 = txtpot.cy;
pdc->SelectObject(pOldfont);
}
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 200, filename);
	}

	// TODO: 在此添加命令处理程序代码
}
