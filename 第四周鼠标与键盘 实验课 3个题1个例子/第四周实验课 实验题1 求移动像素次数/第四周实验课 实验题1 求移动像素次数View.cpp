
// ������ʵ��� ʵ����1 ���ƶ����ش���View.cpp : C������ʵ���ʵ����1���ƶ����ش���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��� ʵ����1 ���ƶ����ش���.h"
#endif

#include "������ʵ��� ʵ����1 ���ƶ����ش���Doc.h"
#include "������ʵ��� ʵ����1 ���ƶ����ش���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���ʵ����1���ƶ����ش���View

IMPLEMENT_DYNCREATE(C������ʵ���ʵ����1���ƶ����ش���View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ����1���ƶ����ش���View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C������ʵ���ʵ����1���ƶ����ش���View ����/����

C������ʵ���ʵ����1���ƶ����ش���View::C������ʵ���ʵ����1���ƶ����ش���View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ���ʵ����1���ƶ����ش���View::~C������ʵ���ʵ����1���ƶ����ش���View()
{
}

BOOL C������ʵ���ʵ����1���ƶ����ش���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���ʵ����1���ƶ����ش���View ����

void C������ʵ���ʵ����1���ƶ����ش���View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ���ʵ����1���ƶ����ش���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ���ʵ����1���ƶ����ش���View ���

#ifdef _DEBUG
void C������ʵ���ʵ����1���ƶ����ش���View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���ʵ����1���ƶ����ش���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���ʵ����1���ƶ����ش���Doc* C������ʵ���ʵ����1���ƶ����ش���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���ʵ����1���ƶ����ش���Doc)));
	return (C������ʵ���ʵ����1���ƶ����ش���Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���ʵ����1���ƶ����ش���View ��Ϣ�������


void C������ʵ���ʵ����1���ƶ����ش���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C������ʵ���ʵ����1���ƶ����ش���Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->sx = point.x;
	CView::OnLButtonDown(nFlags, point);
}


void C������ʵ���ʵ����1���ƶ����ش���View::OnLButtonUp(UINT nFlags, CPoint point)
{
	C������ʵ���ʵ����1���ƶ����ش���Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC DC(this);
	CString s;
	pDoc->sy = point.x;
	s.Format(_T("%d�����ƶ�һ�Σ����ƶ���%d��"), (pDoc->sy - pDoc->sx)/pDoc->count, pDoc->count);
	DC.TextOutW(200, 300, s);
	pDoc->count = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C������ʵ���ʵ����1���ƶ����ش���View::OnMouseMove(UINT nFlags, CPoint point)
{
	C������ʵ���ʵ����1���ƶ����ش���Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->count++;
	CView::OnMouseMove(nFlags, point);
}
