
// ������MFCͨ���� ���õ�2������ �ػ�����ʾView.cpp : C������MFCͨ������õ�2�������ػ�����ʾView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ���õ�2������ �ػ�����ʾ.h"
#endif

#include "������MFCͨ���� ���õ�2������ �ػ�����ʾDoc.h"
#include "������MFCͨ���� ���õ�2������ �ػ�����ʾView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������MFCͨ������õ�2�������ػ�����ʾView

IMPLEMENT_DYNCREATE(C������MFCͨ������õ�2�������ػ�����ʾView, CView)

BEGIN_MESSAGE_MAP(C������MFCͨ������õ�2�������ػ�����ʾView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������MFCͨ������õ�2�������ػ�����ʾView ����/����

C������MFCͨ������õ�2�������ػ�����ʾView::C������MFCͨ������õ�2�������ػ�����ʾView()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

C������MFCͨ������õ�2�������ػ�����ʾView::~C������MFCͨ������õ�2�������ػ�����ʾView()
{
}

BOOL C������MFCͨ������õ�2�������ػ�����ʾView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������MFCͨ������õ�2�������ػ�����ʾView ����

void C������MFCͨ������õ�2�������ػ�����ʾView::OnDraw(CDC* pDC)
{
	C������MFCͨ������õ�2�������ػ�����ʾDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i < ca.GetSize(); i++)
		pDC->Rectangle(ca.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������MFCͨ������õ�2�������ػ�����ʾView ���

#ifdef _DEBUG
void C������MFCͨ������õ�2�������ػ�����ʾView::AssertValid() const
{
	CView::AssertValid();
}

void C������MFCͨ������õ�2�������ػ�����ʾView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������MFCͨ������õ�2�������ػ�����ʾDoc* C������MFCͨ������õ�2�������ػ�����ʾView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������MFCͨ������õ�2�������ػ�����ʾDoc)));
	return (C������MFCͨ������õ�2�������ػ�����ʾDoc*)m_pDocument;
}
#endif //_DEBUG


// C������MFCͨ������õ�2�������ػ�����ʾView ��Ϣ�������


void C������MFCͨ������õ�2�������ػ�����ʾView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r = rand() % 50 + 5;
	CRect cr(point.x - r, point.y + r, point.x + r, point.y - r);
	ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
