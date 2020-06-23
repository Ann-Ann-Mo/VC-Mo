
// 0324View.cpp : CMy0324View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0324.h"
#endif

#include "0324Doc.h"
#include "0324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324View

IMPLEMENT_DYNCREATE(CMy0324View, CView)

BEGIN_MESSAGE_MAP(CMy0324View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CMy0324View::On32771)
END_MESSAGE_MAP()

// CMy0324View 构造/析构

CMy0324View::CMy0324View()
{
	// TODO: 在此处添加构造代码

}

CMy0324View::~CMy0324View()
{
}

BOOL CMy0324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0324View 绘制

void CMy0324View::OnDraw(CDC* /*pDC*/)
{
	CMy0324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0324View 打印

BOOL CMy0324View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0324View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0324View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0324View 诊断

#ifdef _DEBUG
void CMy0324View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324Doc* CMy0324View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324Doc)));
	return (CMy0324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324View 消息处理程序


void CMy0324View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("201812300052莫文凤");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
