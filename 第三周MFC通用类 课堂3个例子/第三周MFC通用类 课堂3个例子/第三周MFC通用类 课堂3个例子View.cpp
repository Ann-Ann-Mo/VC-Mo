
// ������MFCͨ���� ����3������View.cpp : C������MFCͨ�������3������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ����3������.h"
#endif

#include "������MFCͨ���� ����3������Doc.h"
#include "������MFCͨ���� ����3������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������MFCͨ�������3������View

IMPLEMENT_DYNCREATE(C������MFCͨ�������3������View, CView)

BEGIN_MESSAGE_MAP(C������MFCͨ�������3������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������MFCͨ�������3������View ����/����

C������MFCͨ�������3������View::C������MFCͨ�������3������View()
{
	// TODO: �ڴ˴���ӹ������

}

C������MFCͨ�������3������View::~C������MFCͨ�������3������View()
{
}

BOOL C������MFCͨ�������3������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������MFCͨ�������3������View ����

void C������MFCͨ�������3������View::OnDraw(CDC* /*pDC*/)
{
	C������MFCͨ�������3������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������MFCͨ�������3������View ���

#ifdef _DEBUG
void C������MFCͨ�������3������View::AssertValid() const
{
	CView::AssertValid();
}

void C������MFCͨ�������3������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������MFCͨ�������3������Doc* C������MFCͨ�������3������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������MFCͨ�������3������Doc)));
	return (C������MFCͨ�������3������Doc*)m_pDocument;
}
#endif //_DEBUG


// C������MFCͨ�������3������View ��Ϣ�������


void C������MFCͨ�������3������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect cr;
	this->GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
}
