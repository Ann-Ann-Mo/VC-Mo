
// 0331View.cpp : CMy0331View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0331.h"
#endif

#include "0331Doc.h"
#include "0331View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0331View

IMPLEMENT_DYNCREATE(CMy0331View, CView)

BEGIN_MESSAGE_MAP(CMy0331View, CView)
END_MESSAGE_MAP()

// CMy0331View ����/����

CMy0331View::CMy0331View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0331View::~CMy0331View()
{
}

BOOL CMy0331View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0331View ����

void CMy0331View::OnDraw(CDC* /*pDC*/)
{
	CMy0331Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0331View ���

#ifdef _DEBUG
void CMy0331View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331Doc* CMy0331View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331Doc)));
	return (CMy0331Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331View ��Ϣ�������
