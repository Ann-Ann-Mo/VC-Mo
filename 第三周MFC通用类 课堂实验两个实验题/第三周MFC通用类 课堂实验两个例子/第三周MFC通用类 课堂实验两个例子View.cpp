
// ������MFCͨ���� ����ʵ����������View.cpp : C������MFCͨ�������ʵ����������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ����ʵ����������.h"
#endif

#include "������MFCͨ���� ����ʵ����������Doc.h"
#include "������MFCͨ���� ����ʵ����������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������MFCͨ�������ʵ����������View

IMPLEMENT_DYNCREATE(C������MFCͨ�������ʵ����������View, CView)

BEGIN_MESSAGE_MAP(C������MFCͨ�������ʵ����������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������MFCͨ�������ʵ����������View ����/����

C������MFCͨ�������ʵ����������View::C������MFCͨ�������ʵ����������View()
{
	// TODO: �ڴ˴���ӹ������

}

C������MFCͨ�������ʵ����������View::~C������MFCͨ�������ʵ����������View()
{
}

BOOL C������MFCͨ�������ʵ����������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������MFCͨ�������ʵ����������View ����

void C������MFCͨ�������ʵ����������View::OnDraw(CDC* pDC)
{
	C������MFCͨ�������ʵ����������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	for (int i = 0; i<pDoc->ca.GetSize(); i++)
		pDC->Rectangle(pDoc->ca.GetAt(i));

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������MFCͨ�������ʵ����������View ���

#ifdef _DEBUG
void C������MFCͨ�������ʵ����������View::AssertValid() const
{
	CView::AssertValid();
}

void C������MFCͨ�������ʵ����������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������MFCͨ�������ʵ����������Doc* C������MFCͨ�������ʵ����������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������MFCͨ�������ʵ����������Doc)));
	return (C������MFCͨ�������ʵ����������Doc*)m_pDocument;
}
#endif //_DEBUG


// C������MFCͨ�������ʵ����������View ��Ϣ�������


void C������MFCͨ�������ʵ����������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
