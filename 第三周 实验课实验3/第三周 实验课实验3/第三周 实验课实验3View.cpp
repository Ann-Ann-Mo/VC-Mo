
// ������ ʵ���ʵ��3View.cpp : C������ʵ���ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ʵ���ʵ��3.h"
#endif

#include "������ ʵ���ʵ��3Doc.h"
#include "������ ʵ���ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���ʵ��3View

IMPLEMENT_DYNCREATE(C������ʵ���ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ʵ���ʵ��3View ����/����

C������ʵ���ʵ��3View::C������ʵ���ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ���ʵ��3View::~C������ʵ���ʵ��3View()
{
}

BOOL C������ʵ���ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���ʵ��3View ����

void C������ʵ���ʵ��3View::OnDraw(CDC* pDC)
{
	C������ʵ���ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return; 
	CRect cr1(60, 360,200, 60);
	CRect cr2(260, 360, 400, 60);
	CRect cr3(460, 360, 600, 60);
	pDC->Rectangle(&cr1);
	pDC->Rectangle(&cr2);
	pDC->Rectangle(&cr3);
	pDoc->a = rand() % 50 + 5;
	pDoc->b = rand() % 50 + 5;
	//dc.Ellipse(pDoc->cr1);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ���ʵ��3View ���

#ifdef _DEBUG
void C������ʵ���ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���ʵ��3Doc* C������ʵ���ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���ʵ��3Doc)));
	return (C������ʵ���ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���ʵ��3View ��Ϣ�������


void C������ʵ���ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C������ʵ���ʵ��3Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s1, s2,s3,s4;
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s3.Format(_T("%d"), pDoc->a+pDoc->b);
	if (point.x > 60 && point.x < 200 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s1);
	else if (point.x > 260 && point.x < 400 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s2);
	else if (point.x > 460 && point.x < 600 && point.y>60 && point.y < 360)
		dc.TextOutW(point.x, point.y, s3);
	else
	{
		s4 = "�����Ч";
		dc.TextOutW(point.x, point.y, s4);
	}

	CView::OnLButtonDown(nFlags, point);
}
