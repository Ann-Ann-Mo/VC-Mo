
// 2-ͼ�α�̻�������ʵ����4��Բ��ɫView.cpp : CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2-ͼ�α�̻�������ʵ����4��Բ��ɫ.h"
#endif

#include "2-ͼ�α�̻�������ʵ����4��Բ��ɫDoc.h"
#include "2-ͼ�α�̻�������ʵ����4��Բ��ɫView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView

IMPLEMENT_DYNCREATE(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView, CView)

BEGIN_MESSAGE_MAP(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView, CView)
END_MESSAGE_MAP()

// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ����/����

CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::~CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView()
{
}

BOOL CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ����

void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::OnDraw(CDC* pDC)
{
	CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CRect rect;
	GetClientRect (&rect);
	int red = 66, green = 166, blue = 66;
		int color = RGB(red, green, blue);
		CBrush newbrush(color);
		CBrush*oldbrush = pDC->SelectObject(&newbrush);
		pDC->Ellipse(rect);
		pDC->SelectObject(oldbrush);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ���

#ifdef _DEBUG
void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc* CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc)));
	return (CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ��Ϣ�������
