
// 第九周序列化及文件读写课堂练习1View.cpp : C第九周序列化及文件读写课堂练习1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第九周序列化及文件读写课堂练习1.h"
#endif

#include "第九周序列化及文件读写课堂练习1Doc.h"
#include "第九周序列化及文件读写课堂练习1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第九周序列化及文件读写课堂练习1View

IMPLEMENT_DYNCREATE(C第九周序列化及文件读写课堂练习1View, CView)

BEGIN_MESSAGE_MAP(C第九周序列化及文件读写课堂练习1View, CView)
END_MESSAGE_MAP()

// C第九周序列化及文件读写课堂练习1View 构造/析构

C第九周序列化及文件读写课堂练习1View::C第九周序列化及文件读写课堂练习1View()
{
	// TODO: 在此处添加构造代码

}

C第九周序列化及文件读写课堂练习1View::~C第九周序列化及文件读写课堂练习1View()
{
}

BOOL C第九周序列化及文件读写课堂练习1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第九周序列化及文件读写课堂练习1View 绘制

void C第九周序列化及文件读写课堂练习1View::OnDraw(CDC* /*pDC*/)
{
	C第九周序列化及文件读写课堂练习1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第九周序列化及文件读写课堂练习1View 诊断

#ifdef _DEBUG
void C第九周序列化及文件读写课堂练习1View::AssertValid() const
{
	CView::AssertValid();
}

void C第九周序列化及文件读写课堂练习1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第九周序列化及文件读写课堂练习1Doc* C第九周序列化及文件读写课堂练习1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第九周序列化及文件读写课堂练习1Doc)));
	return (C第九周序列化及文件读写课堂练习1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第九周序列化及文件读写课堂练习1View 消息处理程序
