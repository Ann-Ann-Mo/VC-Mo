
// 第五周资源菜单 课堂1个例子两个实验View.cpp : C第五周资源菜单课堂1个例子两个实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第五周资源菜单 课堂1个例子两个实验.h"
#endif

#include "第五周资源菜单 课堂1个例子两个实验Doc.h"
#include "第五周资源菜单 课堂1个例子两个实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第五周资源菜单课堂1个例子两个实验View

IMPLEMENT_DYNCREATE(C第五周资源菜单课堂1个例子两个实验View, CView)

BEGIN_MESSAGE_MAP(C第五周资源菜单课堂1个例子两个实验View, CView)
	ON_COMMAND(ID_shownumber, &C第五周资源菜单课堂1个例子两个实验View::Onshownumber)
	ON_COMMAND(ID_showpicture, &C第五周资源菜单课堂1个例子两个实验View::Onshowpicture)
END_MESSAGE_MAP()

// C第五周资源菜单课堂1个例子两个实验View 构造/析构

C第五周资源菜单课堂1个例子两个实验View::C第五周资源菜单课堂1个例子两个实验View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	bm.LoadBitmap(IDB_BITMAP2);
	bm.GetBitmap(&BM);
	bmh = BM.bmHeight;
	bmw = BM.bmWidth;
}

C第五周资源菜单课堂1个例子两个实验View::~C第五周资源菜单课堂1个例子两个实验View()
{
}

BOOL C第五周资源菜单课堂1个例子两个实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第五周资源菜单课堂1个例子两个实验View 绘制

void C第五周资源菜单课堂1个例子两个实验View::OnDraw(CDC* pDC)
{
	C第五周资源菜单课堂1个例子两个实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: 在此处为本机数据添加绘制代码
}


// C第五周资源菜单课堂1个例子两个实验View 诊断

#ifdef _DEBUG
void C第五周资源菜单课堂1个例子两个实验View::AssertValid() const
{
	CView::AssertValid();
}

void C第五周资源菜单课堂1个例子两个实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第五周资源菜单课堂1个例子两个实验Doc* C第五周资源菜单课堂1个例子两个实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第五周资源菜单课堂1个例子两个实验Doc)));
	return (C第五周资源菜单课堂1个例子两个实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C第五周资源菜单课堂1个例子两个实验View 消息处理程序


void C第五周资源菜单课堂1个例子两个实验View::Onshownumber()
{
	CClientDC dc(this);
	CString s ;
	s.Format(_T("201812300052"));
	dc.TextOutW(10, 10, s);
	// TODO: 在此添加命令处理程序代码
}


void C第五周资源菜单课堂1个例子两个实验View::Onshowpicture()
{   CClientDC DC(this);
	CDC MDC;
	MDC.CreateCompatibleDC(NULL);
	MDC.SelectObject(bm);
	DC.BitBlt(0, 0, bmh, bmw, &MDC, 0, 0, SRCCOPY);
	// TODO: 在此添加命令处理程序代码
}
