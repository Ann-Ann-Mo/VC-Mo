
// �ڰ��ܻ��ڶԻ��� ʵ���ʵ��2View.cpp : C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ��ܻ��ڶԻ��� ʵ���ʵ��2.h"
#endif

#include "�ڰ��ܻ��ڶԻ��� ʵ���ʵ��2Doc.h"
#include "�ڰ��ܻ��ڶԻ��� ʵ���ʵ��2View.h"
#include "Dlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View

IMPLEMENT_DYNCREATE(C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View, CView)
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_output, &C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::Onoutput)
END_MESSAGE_MAP()

// C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View ����/����

C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::~C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View()
{
}

BOOL C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View ����

void C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::OnDraw(CDC* pDC)
{
	C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View ���

#ifdef _DEBUG
void C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc* C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc)));
	return (C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View ��Ϣ�������


void C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::OnMouseMove(UINT nFlags, CPoint point)
{
	CClientDC DC(this);
	C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	pDoc->rect.top = point.y;
	pDoc->rect.left = point.x;
	pDoc->rect.bottom = point.y-66;
	pDoc->rect.right = point.x+66;
	DC.Ellipse(pDoc->rect);
	//this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2View::Onoutput()
{
	C�ڰ��ܻ��ڶԻ���ʵ���ʵ��2Doc* pDoc = GetDocument();
	Dlg0 dlg;
	CClientDC DC(this);
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		pDoc->rect.top = dlg.y;
		pDoc->rect.bottom = dlg.x;
		pDoc->rect.bottom = dlg.y - 66;
		pDoc->rect.right = dlg.x + 66;
		DC.Ellipse(pDoc->rect);
	}
	// TODO: �ڴ���������������
}
