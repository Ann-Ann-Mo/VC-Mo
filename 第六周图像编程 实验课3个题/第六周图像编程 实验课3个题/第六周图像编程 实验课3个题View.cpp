
// ������ͼ���� ʵ���3����View.cpp : C������ͼ����ʵ���3����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ͼ���� ʵ���3����.h"
#endif

#include "������ͼ���� ʵ���3����Doc.h"
#include "������ͼ���� ʵ���3����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ͼ����ʵ���3����View

IMPLEMENT_DYNCREATE(C������ͼ����ʵ���3����View, CView)

BEGIN_MESSAGE_MAP(C������ͼ����ʵ���3����View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ͼ����ʵ���3����View ����/����

C������ͼ����ʵ���3����View::C������ͼ����ʵ���3����View()
{
	i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	str[i];
//	}
	// TODO: �ڴ˴���ӹ������

}

C������ͼ����ʵ���3����View::~C������ͼ����ʵ���3����View()
{
}

BOOL C������ͼ����ʵ���3����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ͼ����ʵ���3����View ����

void C������ͼ����ʵ���3����View::OnDraw(CDC* pDC)
{
	C������ͼ����ʵ���3����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
    // TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
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


// C������ͼ����ʵ���3����View ���

#ifdef _DEBUG
void C������ͼ����ʵ���3����View::AssertValid() const
{
	CView::AssertValid();
}

void C������ͼ����ʵ���3����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ͼ����ʵ���3����Doc* C������ͼ����ʵ���3����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ͼ����ʵ���3����Doc)));
	return (C������ͼ����ʵ���3����Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ͼ����ʵ���3����View ��Ϣ�������


void C������ͼ����ʵ���3����View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C������ͼ����ʵ���3����Doc* pDoc = GetDocument();
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


void C������ͼ����ʵ���3����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C������ͼ����ʵ���3����Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->point.x = point.x;
	pDoc->point.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}
