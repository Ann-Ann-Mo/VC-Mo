
// 第三周MFC通用类 课堂第3个例子 把数据放在文档类View.cpp : C第三周MFC通用类课堂第3个例子把数据放在文档类View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第三周MFC通用类 课堂第3个例子 把数据放在文档类.h"
#endif

#include "第三周MFC通用类 课堂第3个例子 把数据放在文档类Doc.h"
#include "第三周MFC通用类 课堂第3个例子 把数据放在文档类View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第三周MFC通用类课堂第3个例子把数据放在文档类View

IMPLEMENT_DYNCREATE(C第三周MFC通用类课堂第3个例子把数据放在文档类View, CView)

BEGIN_MESSAGE_MAP(C第三周MFC通用类课堂第3个例子把数据放在文档类View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第三周MFC通用类课堂第3个例子把数据放在文档类View 构造/析构

C第三周MFC通用类课堂第3个例子把数据放在文档类View::C第三周MFC通用类课堂第3个例子把数据放在文档类View()
{
	// TODO: 在此处添加构造代码

}

C第三周MFC通用类课堂第3个例子把数据放在文档类View::~C第三周MFC通用类课堂第3个例子把数据放在文档类View()
{
}

BOOL C第三周MFC通用类课堂第3个例子把数据放在文档类View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第三周MFC通用类课堂第3个例子把数据放在文档类View 绘制

void C第三周MFC通用类课堂第3个例子把数据放在文档类View::OnDraw(CDC* pDC)
{
	C第三周MFC通用类课堂第3个例子把数据放在文档类Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for(int i=0;i<pDoc->ca.GetSize();i++)
		pDC->Rectangle(pDoc->ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// C第三周MFC通用类课堂第3个例子把数据放在文档类View 诊断

#ifdef _DEBUG
void C第三周MFC通用类课堂第3个例子把数据放在文档类View::AssertValid() const
{
	CView::AssertValid();
}

void C第三周MFC通用类课堂第3个例子把数据放在文档类View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第三周MFC通用类课堂第3个例子把数据放在文档类Doc* C第三周MFC通用类课堂第3个例子把数据放在文档类View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第三周MFC通用类课堂第3个例子把数据放在文档类Doc)));
	return (C第三周MFC通用类课堂第3个例子把数据放在文档类Doc*)m_pDocument;
}
#endif //_DEBUG


// C第三周MFC通用类课堂第3个例子把数据放在文档类View 消息处理程序


void C第三周MFC通用类课堂第3个例子把数据放在文档类View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第三周MFC通用类课堂第3个例子把数据放在文档类Doc* pDoc = GetDocument();
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y + r, point.x + r, point.y - r);
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
