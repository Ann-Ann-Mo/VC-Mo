
// ������MFCͨ���� ����ʵ��2 ���������ԲView.cpp : C������MFCͨ�������ʵ��2���������ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ����ʵ��2 ���������Բ.h"
#endif

#include "������MFCͨ���� ����ʵ��2 ���������ԲDoc.h"
#include "������MFCͨ���� ����ʵ��2 ���������ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������MFCͨ�������ʵ��2���������ԲView

IMPLEMENT_DYNCREATE(C������MFCͨ�������ʵ��2���������ԲView, CView)

BEGIN_MESSAGE_MAP(C������MFCͨ�������ʵ��2���������ԲView, CView)
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������MFCͨ�������ʵ��2���������ԲView ����/����

C������MFCͨ�������ʵ��2���������ԲView::C������MFCͨ�������ʵ��2���������ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C������MFCͨ�������ʵ��2���������ԲView::~C������MFCͨ�������ʵ��2���������ԲView()
{
}

BOOL C������MFCͨ�������ʵ��2���������ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������MFCͨ�������ʵ��2���������ԲView ����

void C������MFCͨ�������ʵ��2���������ԲView::OnDraw(CDC* pDC)
{
	C������MFCͨ�������ʵ��2���������ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������MFCͨ�������ʵ��2���������ԲView ���

#ifdef _DEBUG
void C������MFCͨ�������ʵ��2���������ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C������MFCͨ�������ʵ��2���������ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������MFCͨ�������ʵ��2���������ԲDoc* C������MFCͨ�������ʵ��2���������ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������MFCͨ�������ʵ��2���������ԲDoc)));
	return (C������MFCͨ�������ʵ��2���������ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C������MFCͨ�������ʵ��2���������ԲView ��Ϣ�������


void C������MFCͨ�������ʵ��2���������ԲView::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	C������MFCͨ�������ʵ��2���������ԲDoc* pDoc = GetDocument();
	
	CClientDC dc(this);
	int r = rand() % 50 + 5;
    CRect cr(point.x-r,point.y+r,point.x+r,point.y-r);
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnMButtonDown(nFlags, point);
}


void C������MFCͨ�������ʵ��2���������ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	C������MFCͨ�������ʵ��2���������ԲDoc* pDoc = GetDocument();
	CClientDC dc(this);
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y + r, point.x + r, point.y - r);
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
