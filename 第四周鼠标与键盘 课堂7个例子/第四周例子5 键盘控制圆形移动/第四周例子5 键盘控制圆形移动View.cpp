
// ����������5 ���̿���Բ���ƶ�View.cpp : C����������5���̿���Բ���ƶ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������5 ���̿���Բ���ƶ�.h"
#endif

#include "����������5 ���̿���Բ���ƶ�Doc.h"
#include "����������5 ���̿���Բ���ƶ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������5���̿���Բ���ƶ�View

IMPLEMENT_DYNCREATE(C����������5���̿���Բ���ƶ�View, CView)

BEGIN_MESSAGE_MAP(C����������5���̿���Բ���ƶ�View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C����������5���̿���Բ���ƶ�View ����/����

C����������5���̿���Բ���ƶ�View::C����������5���̿���Բ���ƶ�View()
{
	// TODO: �ڴ˴���ӹ������

}

C����������5���̿���Բ���ƶ�View::~C����������5���̿���Բ���ƶ�View()
{
}

BOOL C����������5���̿���Բ���ƶ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������5���̿���Բ���ƶ�View ����

void C����������5���̿���Բ���ƶ�View::OnDraw(CDC* pDC)
{
	C����������5���̿���Բ���ƶ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������5���̿���Բ���ƶ�View ���

#ifdef _DEBUG
void C����������5���̿���Բ���ƶ�View::AssertValid() const
{
	CView::AssertValid();
}

void C����������5���̿���Բ���ƶ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������5���̿���Բ���ƶ�Doc* C����������5���̿���Բ���ƶ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������5���̿���Բ���ƶ�Doc)));
	return (C����������5���̿���Բ���ƶ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C����������5���̿���Բ���ƶ�View ��Ϣ�������


void C����������5���̿���Բ���ƶ�View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	C����������5���̿���Բ���ƶ�Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect clrect;
	GetClientRect(&clrect);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right <= (clrect.right - clrect.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	}
			InvalidateRect(NULL, TRUE);
		
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
