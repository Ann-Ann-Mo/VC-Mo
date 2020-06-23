
// 第六周图像编程 实验课3个题View.cpp : C第六周图像编程实验课3个题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第六周图像编程 实验课3个题.h"
#endif

#include "第六周图像编程 实验课3个题Doc.h"
#include "第六周图像编程 实验课3个题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第六周图像编程实验课3个题View

IMPLEMENT_DYNCREATE(C第六周图像编程实验课3个题View, CView)

BEGIN_MESSAGE_MAP(C第六周图像编程实验课3个题View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第六周图像编程实验课3个题View 构造/析构

C第六周图像编程实验课3个题View::C第六周图像编程实验课3个题View()
{
	i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	str[i];
//	}
	// TODO: 在此处添加构造代码

}

C第六周图像编程实验课3个题View::~C第六周图像编程实验课3个题View()
{
}

BOOL C第六周图像编程实验课3个题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第六周图像编程实验课3个题View 绘制

void C第六周图像编程实验课3个题View::OnDraw(CDC* pDC)
{
	C第六周图像编程实验课3个题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
    // TODO: 在此处为本机数据添加绘制代码
	CRect cr;
	cr.top = 20; cr.left = 30;
	cr.bottom = 100; cr.right = 440;
	CClientDC dc(this);
	dc.Rectangle(cr);
	for(int i=0;i<15;i++)
	{
		dc.TextOutW(35+35 * i, 50, str[i]);
	}
	// dc.TextOutW(21, 50, pDoc->s);
	 
	
	
	
	//dc.TextOutW(pDoc->point.x,pDoc->point.y , pDoc->s);
}


// C第六周图像编程实验课3个题View 诊断

#ifdef _DEBUG
void C第六周图像编程实验课3个题View::AssertValid() const
{
	CView::AssertValid();
}

void C第六周图像编程实验课3个题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第六周图像编程实验课3个题Doc* C第六周图像编程实验课3个题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第六周图像编程实验课3个题Doc)));
	return (C第六周图像编程实验课3个题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第六周图像编程实验课3个题View 消息处理程序


void C第六周图像编程实验课3个题View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第六周图像编程实验课3个题Doc* pDoc = GetDocument();
	if (i > 8) { flag = 1; }
	if (flag == 0)
	{
		str[i] = (wchar_t)nChar;
		i++;
		Invalidate();	
	}
	else 
		{
			for (i1 = 0; i1 <= 11;i1++)
			{
				if (a[i1] > pDoc->point.x)
				{
					int t = i1;
					for (i1; i1 <=9; i1++) 
					{
						a[i1+1] = a[i1];
					  Invalidate();
					}
					str[t] = (wchar_t)nChar;
					Invalidate();
					break;
				}
				set = false;
			}
		}
	
	CView::OnChar(nChar, nRepCnt, nFlags);
	//ASSERT_VALID(pDoc);
	//CString str;
	//str = _T("pDoc->s+\n");
	//bool Insert(s2);
	// if (sizeof(pDoc->s) <=10)
	//{   pDoc->s+=(wchar_t)nChar;
	//}
	// else
	// {//CString str;
	//str = _T("first line\r\n");
	//str += _T("second line\r\n");
	//SetDlgItemText(IDC_EDIT1, str);
	//pDoc->s =str;

	//s2 = s2+(wchar_t)nChar;
	// }
}


void C第六周图像编程实验课3个题View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第六周图像编程实验课3个题Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->point.x = point.x;
	pDoc->point.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}
