
// 2-ͼ�α�̻�������ʵ����2View.cpp : CMy2ͼ�α�̻�������ʵ����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2-ͼ�α�̻�������ʵ����2.h"
#endif

#include "2-ͼ�α�̻�������ʵ����2Doc.h"
#include "2-ͼ�α�̻�������ʵ����2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy2ͼ�α�̻�������ʵ����2View

IMPLEMENT_DYNCREATE(CMy2ͼ�α�̻�������ʵ����2View, CView)

BEGIN_MESSAGE_MAP(CMy2ͼ�α�̻�������ʵ����2View, CView)
END_MESSAGE_MAP()

// CMy2ͼ�α�̻�������ʵ����2View ����/����

CMy2ͼ�α�̻�������ʵ����2View::CMy2ͼ�α�̻�������ʵ����2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy2ͼ�α�̻�������ʵ����2View::~CMy2ͼ�α�̻�������ʵ����2View()
{
}

BOOL CMy2ͼ�α�̻�������ʵ����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy2ͼ�α�̻�������ʵ����2View ����

void CMy2ͼ�α�̻�������ʵ����2View::OnDraw(CDC* pDC)
{
	CMy2ͼ�α�̻�������ʵ����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	dc.Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy2ͼ�α�̻�������ʵ����2View ���

#ifdef _DEBUG
void CMy2ͼ�α�̻�������ʵ����2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy2ͼ�α�̻�������ʵ����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy2ͼ�α�̻�������ʵ����2Doc* CMy2ͼ�α�̻�������ʵ����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy2ͼ�α�̻�������ʵ����2Doc)));
	return (CMy2ͼ�α�̻�������ʵ����2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy2ͼ�α�̻�������ʵ����2View ��Ϣ�������
