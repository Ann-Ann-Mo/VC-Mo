
// 200317View.cpp : CMy200317View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "200317.h"
#endif

#include "200317Doc.h"
#include "200317View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy200317View

IMPLEMENT_DYNCREATE(CMy200317View, CView)

BEGIN_MESSAGE_MAP(CMy200317View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy200317View ����/����

CMy200317View::CMy200317View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 160;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

CMy200317View::~CMy200317View()
{
	
	
}

BOOL CMy200317View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy200317View ����

void CMy200317View::OnDraw(CDC* pDC)
{
	CMy200317Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
			set = FALSE;
		}
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy200317View ���

#ifdef _DEBUG
void CMy200317View::AssertValid() const
{
	CView::AssertValid();
}

void CMy200317View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy200317Doc* CMy200317View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy200317Doc)));
	return (CMy200317Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy200317View ��Ϣ�������


void CMy200317View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
