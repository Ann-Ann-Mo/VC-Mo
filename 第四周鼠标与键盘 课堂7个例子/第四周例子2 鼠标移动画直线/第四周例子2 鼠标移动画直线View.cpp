
// ����������2 ����ƶ���ֱ��View.cpp : C����������2����ƶ���ֱ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������2 ����ƶ���ֱ��.h"
#endif

#include "����������2 ����ƶ���ֱ��Doc.h"
#include "����������2 ����ƶ���ֱ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������2����ƶ���ֱ��View

IMPLEMENT_DYNCREATE(C����������2����ƶ���ֱ��View, CView)

BEGIN_MESSAGE_MAP(C����������2����ƶ���ֱ��View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C����������2����ƶ���ֱ��View ����/����

C����������2����ƶ���ֱ��View::C����������2����ƶ���ֱ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C����������2����ƶ���ֱ��View::~C����������2����ƶ���ֱ��View()
{
}

BOOL C����������2����ƶ���ֱ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������2����ƶ���ֱ��View ����

void C����������2����ƶ���ֱ��View::OnDraw(CDC* pDC)
{
	C����������2����ƶ���ֱ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point(0, 0);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->mpoint);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������2����ƶ���ֱ��View ���

#ifdef _DEBUG
void C����������2����ƶ���ֱ��View::AssertValid() const
{
	CView::AssertValid();
}

void C����������2����ƶ���ֱ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������2����ƶ���ֱ��Doc* C����������2����ƶ���ֱ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������2����ƶ���ֱ��Doc)));
	return (C����������2����ƶ���ֱ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C����������2����ƶ���ֱ��View ��Ϣ�������


void C����������2����ƶ���ֱ��View::OnMouseMove(UINT nFlags, CPoint point)
{
	C����������2����ƶ���ֱ��Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->mpoint = point;
	InvalidateRect(NULL,FALSE);
	CView::OnMouseMove(nFlags, point);
}
