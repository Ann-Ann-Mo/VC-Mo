
// ������MFCͨ���� ���õ�3������ �����ݷ����ĵ���View.cpp : C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ���õ�3������ �����ݷ����ĵ���.h"
#endif

#include "������MFCͨ���� ���õ�3������ �����ݷ����ĵ���Doc.h"
#include "������MFCͨ���� ���õ�3������ �����ݷ����ĵ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View

IMPLEMENT_DYNCREATE(C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View, CView)

BEGIN_MESSAGE_MAP(C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ����/����

C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::~C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View()
{
}

BOOL C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ����

void C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::OnDraw(CDC* pDC)
{
	C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for(int i=0;i<pDoc->ca.GetSize();i++)
		pDC->Rectangle(pDoc->ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ���

#ifdef _DEBUG
void C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::AssertValid() const
{
	CView::AssertValid();
}

void C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc* C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc)));
	return (C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ��Ϣ�������


void C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc* pDoc = GetDocument();
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y + r, point.x + r, point.y - r);
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
