
// ������ʵ��� ʵ��3С�����º󷴵�View.cpp : C������ʵ���ʵ��3С�����º󷴵�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��� ʵ��3С�����º󷴵�.h"
#endif

#include "������ʵ��� ʵ��3С�����º󷴵�Doc.h"
#include "������ʵ��� ʵ��3С�����º󷴵�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���ʵ��3С�����º󷴵�View

IMPLEMENT_DYNCREATE(C������ʵ���ʵ��3С�����º󷴵�View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ��3С�����º󷴵�View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C������ʵ���ʵ��3С�����º󷴵�View ����/����

C������ʵ���ʵ��3С�����º󷴵�View::C������ʵ���ʵ��3С�����º󷴵�View()
{
	// TODO: �ڴ˴���ӹ������
	N = 5;
	set=TRUE;
	for (int i=0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, -20, t + 20, 0);
		cr.Add(rect);

	}
}

C������ʵ���ʵ��3С�����º󷴵�View::~C������ʵ���ʵ��3С�����º󷴵�View()
{
}

BOOL C������ʵ���ʵ��3С�����º󷴵�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���ʵ��3С�����º󷴵�View ����

void C������ʵ���ʵ��3С�����º󷴵�View::OnDraw(CDC* pDC)
{
	C������ʵ���ʵ��3С�����º󷴵�Doc* pDoc = GetDocument();
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
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ���ʵ��3С�����º󷴵�View ���

#ifdef _DEBUG
void C������ʵ���ʵ��3С�����º󷴵�View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���ʵ��3С�����º󷴵�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���ʵ��3С�����º󷴵�Doc* C������ʵ���ʵ��3С�����º󷴵�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���ʵ��3С�����º󷴵�Doc)));
	return (C������ʵ���ʵ��3С�����º󷴵�Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���ʵ��3С�����º󷴵�View ��Ϣ�������


void C������ʵ���ʵ��3С�����º󷴵�View::OnTimer(UINT_PTR nIDEvent)
{CRect rect;
	C������ʵ���ʵ��3С�����º󷴵�Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	this->GetClientRect(&rect);
		if (rect.bottom - cr[i].bottom <= 0)
			pDoc->s[i] = 1;
		if (pDoc->s[i] != 1)
		{
			cr[i].top += 20;
			cr[i].bottom += 20;
		}
		else if (pDoc->s[i] == 1)
		{
			cr[i].top -= 20;
			cr[i].bottom -= 20;
		}
	Invalidate();
	CView::OnTimer(nIDEvent);
}

