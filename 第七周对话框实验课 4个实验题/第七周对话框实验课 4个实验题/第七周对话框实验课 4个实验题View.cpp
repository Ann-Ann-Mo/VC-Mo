
// �����ܶԻ���ʵ��� 4��ʵ����View.cpp : C�����ܶԻ���ʵ���4��ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����ܶԻ���ʵ��� 4��ʵ����.h"
#endif

#include "�����ܶԻ���ʵ��� 4��ʵ����Doc.h"
#include "�����ܶԻ���ʵ��� 4��ʵ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����ܶԻ���ʵ���4��ʵ����View

IMPLEMENT_DYNCREATE(C�����ܶԻ���ʵ���4��ʵ����View, CView)

BEGIN_MESSAGE_MAP(C�����ܶԻ���ʵ���4��ʵ����View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C�����ܶԻ���ʵ���4��ʵ����View ����/����

C�����ܶԻ���ʵ���4��ʵ����View::C�����ܶԻ���ʵ���4��ʵ����View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����ܶԻ���ʵ���4��ʵ����View::~C�����ܶԻ���ʵ���4��ʵ����View()
{
}

BOOL C�����ܶԻ���ʵ���4��ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����ܶԻ���ʵ���4��ʵ����View ����

void C�����ܶԻ���ʵ���4��ʵ����View::OnDraw(CDC* pDC)
{
	C�����ܶԻ���ʵ���4��ʵ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	//this->Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����ܶԻ���ʵ���4��ʵ����View ���

#ifdef _DEBUG
void C�����ܶԻ���ʵ���4��ʵ����View::AssertValid() const
{
	CView::AssertValid();
}

void C�����ܶԻ���ʵ���4��ʵ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����ܶԻ���ʵ���4��ʵ����Doc* C�����ܶԻ���ʵ���4��ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����ܶԻ���ʵ���4��ʵ����Doc)));
	return (C�����ܶԻ���ʵ���4��ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����ܶԻ���ʵ���4��ʵ����View ��Ϣ�������


void C�����ܶԻ���ʵ���4��ʵ����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C�����ܶԻ���ʵ���4��ʵ����Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top+100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left+100;
	//DC.Rectangle(pDoc->cr);
//	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}

void C�����ܶԻ���ʵ���4��ʵ����View::OnMouseMove(UINT nFlags, CPoint point)
{C�����ܶԻ���ʵ���4��ʵ����Doc* pDoc = GetDocument();
	if (set == 1) {
    pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top + 100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left + 100;
	//DC.Rectangle(pDoc->cr);
}
	//CClientDC DC(this);
	this->Invalidate();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnMouseMove(nFlags, point);
}

void C�����ܶԻ���ʵ���4��ʵ����View::OnLButtonUp(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C�����ܶԻ���ʵ���4��ʵ����Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = 0;
	pDoc->cr.top = point.y;
	pDoc->cr.bottom = pDoc->cr.top + 100;
	pDoc->cr.left = point.x;
	pDoc->cr.right = pDoc->cr.left + 100;
	//DC.Rectangle(pDoc->cr);
	CView::OnLButtonUp(nFlags, point);
}