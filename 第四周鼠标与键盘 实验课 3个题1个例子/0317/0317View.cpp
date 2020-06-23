
// 0317View.cpp : CMy0317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0317.h"
#endif

#include "0317Doc.h"
#include "0317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0317View

IMPLEMENT_DYNCREATE(CMy0317View, CView)

BEGIN_MESSAGE_MAP(CMy0317View, CView)
	ON_WM_TIMER()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy0317View ����/����

CMy0317View::CMy0317View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy0317View::~CMy0317View()
{
}

BOOL CMy0317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0317View ����

void CMy0317View::OnDraw(CDC* pDC)
{
	CMy0317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		}
		set = FALSE;
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
 for (int i = 0; i < N; i++)
{ 
	pDC->Ellipse(cr[i]);
}
 }
// CMy0317View ���

#ifdef _DEBUG
void CMy0317View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0317Doc* CMy0317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0317Doc)));
	return (CMy0317Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0317View ��Ϣ�������


void CMy0317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CMy0317View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CMy0317Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
/*	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{   case VK_LEFT:
		if (pDoc->tagRec.left > 0)
		{
			pDoc->tagRec.left -= 6;
			pDoc->tagRec.right -= 6;
		}
		break;
	case VK_RIGHT:
			if (pDoc->tagRec.right <= (clientRec.right - clientRec.left))
			{
				pDoc->tagRec.left += 6;
				pDoc->tagRec.right += 6;
			}

	}*/
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
