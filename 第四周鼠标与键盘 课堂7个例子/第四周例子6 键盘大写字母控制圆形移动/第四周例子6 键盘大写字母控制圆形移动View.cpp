
// ����������6 ���̴�д��ĸ����Բ���ƶ�View.cpp : C����������6���̴�д��ĸ����Բ���ƶ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������6 ���̴�д��ĸ����Բ���ƶ�.h"
#endif

#include "����������6 ���̴�д��ĸ����Բ���ƶ�Doc.h"
#include "����������6 ���̴�д��ĸ����Բ���ƶ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������6���̴�д��ĸ����Բ���ƶ�View

IMPLEMENT_DYNCREATE(C����������6���̴�д��ĸ����Բ���ƶ�View, CView)

BEGIN_MESSAGE_MAP(C����������6���̴�д��ĸ����Բ���ƶ�View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C����������6���̴�д��ĸ����Բ���ƶ�View ����/����

C����������6���̴�д��ĸ����Բ���ƶ�View::C����������6���̴�д��ĸ����Բ���ƶ�View()
{
	
	// TODO: �ڴ˴���ӹ������

}

C����������6���̴�д��ĸ����Բ���ƶ�View::~C����������6���̴�д��ĸ����Բ���ƶ�View()
{
}

BOOL C����������6���̴�д��ĸ����Բ���ƶ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������6���̴�д��ĸ����Բ���ƶ�View ����

void C����������6���̴�д��ĸ����Բ���ƶ�View::OnDraw(CDC* pDC)
{
	C����������6���̴�д��ĸ����Բ���ƶ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������6���̴�д��ĸ����Բ���ƶ�View ���

#ifdef _DEBUG
void C����������6���̴�д��ĸ����Բ���ƶ�View::AssertValid() const
{
	CView::AssertValid();
}

void C����������6���̴�д��ĸ����Բ���ƶ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������6���̴�д��ĸ����Բ���ƶ�Doc* C����������6���̴�д��ĸ����Բ���ƶ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������6���̴�д��ĸ����Բ���ƶ�Doc)));
	return (C����������6���̴�д��ĸ����Բ���ƶ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C����������6���̴�д��ĸ����Բ���ƶ�View ��Ϣ�������


void C����������6���̴�д��ĸ����Բ���ƶ�View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C����������6���̴�д��ĸ����Բ���ƶ�Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect clrect;
	GetClientRect(&clrect);
	switch (nChar)
	{
	case 'L':
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 50;
			pDoc->cr.right -= 50;
		}
		break;
	case 'R':
		if (pDoc->cr.right <= (clrect.right-clrect.left))
		{
			pDoc->cr.left += 50;
			pDoc->cr.right += 50;
		}
		break;}
		InvalidateRect(NULL,TRUE);
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
