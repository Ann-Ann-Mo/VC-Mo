
// 实验1左键弹出打开文件对话框客户区显示View.cpp : C实验1左键弹出打开文件对话框客户区显示View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验1左键弹出打开文件对话框客户区显示.h"
#endif

#include "实验1左键弹出打开文件对话框客户区显示Doc.h"
#include "实验1左键弹出打开文件对话框客户区显示View.h"
#include "MyDlg3.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验1左键弹出打开文件对话框客户区显示View

IMPLEMENT_DYNCREATE(C实验1左键弹出打开文件对话框客户区显示View, CView)

BEGIN_MESSAGE_MAP(C实验1左键弹出打开文件对话框客户区显示View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_output, &C实验1左键弹出打开文件对话框客户区显示View::Onoutput)
END_MESSAGE_MAP()

// C实验1左键弹出打开文件对话框客户区显示View 构造/析构

C实验1左键弹出打开文件对话框客户区显示View::C实验1左键弹出打开文件对话框客户区显示View()
{
	// TODO: 在此处添加构造代码

}

C实验1左键弹出打开文件对话框客户区显示View::~C实验1左键弹出打开文件对话框客户区显示View()
{
}

BOOL C实验1左键弹出打开文件对话框客户区显示View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验1左键弹出打开文件对话框客户区显示View 绘制

void C实验1左键弹出打开文件对话框客户区显示View::OnDraw(CDC* /*pDC*/)
{
	C实验1左键弹出打开文件对话框客户区显示Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实验1左键弹出打开文件对话框客户区显示View 诊断

#ifdef _DEBUG
void C实验1左键弹出打开文件对话框客户区显示View::AssertValid() const
{
	CView::AssertValid();
}

void C实验1左键弹出打开文件对话框客户区显示View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验1左键弹出打开文件对话框客户区显示Doc* C实验1左键弹出打开文件对话框客户区显示View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验1左键弹出打开文件对话框客户区显示Doc)));
	return (C实验1左键弹出打开文件对话框客户区显示Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验1左键弹出打开文件对话框客户区显示View 消息处理程序


void C实验1左键弹出打开文件对话框客户区显示View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	C实验1左键弹出打开文件对话框客户区显示Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	//CString filename;
	if (r == IDOK)
	{
		pDoc-> filename = cfd.GetPathName();
		dc.TextOutW(200, 300, pDoc->filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C实验1左键弹出打开文件对话框客户区显示View::Onoutput()
{
	C实验1左键弹出打开文件对话框客户区显示Doc* pDoc = GetDocument();
	MyDlg3 *pD=new MyDlg3;
	pD-> b= pDoc->filename;
	pD->Create(IDD_DIALOG1);
	ShowWindow(1);	
	UpdateData(FALSE);
	// TODO: 在此添加命令处理程序代码
}
