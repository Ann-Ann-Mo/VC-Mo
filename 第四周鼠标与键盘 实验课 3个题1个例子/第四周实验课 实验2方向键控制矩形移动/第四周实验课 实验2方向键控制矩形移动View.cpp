
// ������ʵ��� ʵ��2��������ƾ����ƶ�View.cpp : C������ʵ���ʵ��2��������ƾ����ƶ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��� ʵ��2��������ƾ����ƶ�.h"
#endif

#include "������ʵ��� ʵ��2��������ƾ����ƶ�Doc.h"
#include "������ʵ��� ʵ��2��������ƾ����ƶ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���ʵ��2��������ƾ����ƶ�View

IMPLEMENT_DYNCREATE(C������ʵ���ʵ��2��������ƾ����ƶ�View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ��2��������ƾ����ƶ�View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ʵ���ʵ��2��������ƾ����ƶ�View ����/����

C������ʵ���ʵ��2��������ƾ����ƶ�View::C������ʵ���ʵ��2��������ƾ����ƶ�View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ���ʵ��2��������ƾ����ƶ�View::~C������ʵ���ʵ��2��������ƾ����ƶ�View()
{
}

BOOL C������ʵ���ʵ��2��������ƾ����ƶ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���ʵ��2��������ƾ����ƶ�View ����

void C������ʵ���ʵ��2��������ƾ����ƶ�View::OnDraw(CDC* pDC)
{
	C������ʵ���ʵ��2��������ƾ����ƶ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
//	pDoc->ca.Add(pDoc->cr);
	//for(int i = 0; i <= pDoc->ca.GetSize(); i++ )
	CClientDC dc(this);
		//pDoc->ca.Add(&pDoc->ca);
	if(pDoc->set)
	{
    CRect clrect;
	GetClientRect(&clrect);
	this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 60;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 80;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 60;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 80;
	pDC->Rectangle(pDoc->cr);
	}
	pDoc->set = FALSE;
 pDC->Rectangle(pDoc->cr);
	//InvalidateRect(NULL, TRUE);
//	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ���ʵ��2��������ƾ����ƶ�View ���

#ifdef _DEBUG
void C������ʵ���ʵ��2��������ƾ����ƶ�View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���ʵ��2��������ƾ����ƶ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���ʵ��2��������ƾ����ƶ�Doc* C������ʵ���ʵ��2��������ƾ����ƶ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���ʵ��2��������ƾ����ƶ�Doc)));
	return (C������ʵ���ʵ��2��������ƾ����ƶ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���ʵ��2��������ƾ����ƶ�View ��Ϣ�������


void C������ʵ���ʵ��2��������ƾ����ƶ�View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	C������ʵ���ʵ��2��������ƾ����ƶ�Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clrect;
	CClientDC dc(this);
	/*GetClientRect(&clrect);
	this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 10;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 8;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 10;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 8;
	dc.Rectangle(pDoc->cr);*/
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (clrect.right >=(cr.right - cr.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 3;
			pDoc->cr.bottom -= 3;
		}
		break;
	case VK_DOWN:
		if(clrect.bottom>=(cr.bottom-cr.top))
	{
			pDoc->cr.top += 3;
			pDoc->cr.bottom += 3;
	}
		break;
	case VK_HOME:
		if (pDoc->cr.top > 0 & pDoc->cr.left > 0)
		{
			pDoc->cr.top = pDoc->cr.top / 2;
			pDoc->cr.left = pDoc->cr.left / 2;
		}
		break;
	case VK_END:
		pDoc->cr.bottom = pDoc->cr.bottom * 2;
		pDoc->cr.right = pDoc->cr.right * 2;
	}
	//dc.Rectangle(pDoc->cr);
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void C������ʵ���ʵ��2��������ƾ����ƶ�View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C������ʵ���ʵ��2��������ƾ����ƶ�Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//CClientDC dc(this);
	CRect clrect;
	GetClientRect(&clrect);
this->GetClientRect(&clrect);
	pDoc->cr.top = (clrect.bottom - clrect.top) / 2 - 60;
	pDoc->cr.left = (clrect.right - clrect.left) / 2 - 80;
	pDoc->cr.bottom = (clrect.bottom - clrect.top) / 2 + 60;
	pDoc->cr.right = (clrect.right - clrect.left) / 2 + 80;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
