
// �������������� ����7������View.cpp : C�������������̿���7������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�������������� ����7������.h"
#endif

#include "�������������� ����7������Doc.h"
#include "�������������� ����7������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�������������̿���7������View

IMPLEMENT_DYNCREATE(C�������������̿���7������View, CView)

BEGIN_MESSAGE_MAP(C�������������̿���7������View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�������������̿���7������View ����/����

C�������������̿���7������View::C�������������̿���7������View()
{
	// TODO: �ڴ˴���ӹ������

}

C�������������̿���7������View::~C�������������̿���7������View()
{
}

BOOL C�������������̿���7������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�������������̿���7������View ����

void C�������������̿���7������View::OnDraw(CDC* pDC)
{
	C�������������̿���7������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�������������̿���7������View ���

#ifdef _DEBUG
void C�������������̿���7������View::AssertValid() const
{
	CView::AssertValid();
}

void C�������������̿���7������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�������������̿���7������Doc* C�������������̿���7������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�������������̿���7������Doc)));
	return (C�������������̿���7������Doc*)m_pDocument;
}
#endif //_DEBUG


// C�������������̿���7������View ��Ϣ�������


void C�������������̿���7������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�������������̿���7������Doc* pDoc = GetDocument();
	if (nFlags&MK_SHIFT)
	{
		pDoc->cr.left = 30; pDoc->cr.top = 30;
		pDoc->cr.right = 300; pDoc->cr.bottom = 300;
	}
	else
	{
		pDoc->cr.left = point.x; pDoc->cr.top = point.y;
		pDoc->cr.right = point.x + 270; pDoc->cr.bottom = point.y + 270;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
