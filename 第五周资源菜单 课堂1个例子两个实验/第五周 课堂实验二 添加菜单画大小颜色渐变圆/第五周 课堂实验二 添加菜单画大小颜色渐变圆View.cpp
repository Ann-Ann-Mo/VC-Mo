
// ������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲView.cpp : C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ����ʵ��� ��Ӳ˵�����С��ɫ����Բ.h"
#endif

#include "������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲDoc.h"
#include "������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView

IMPLEMENT_DYNCREATE(C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView, CView)

BEGIN_MESSAGE_MAP(C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView, CView)
	ON_COMMAND(ID_32771, &C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::On32771)
END_MESSAGE_MAP()

// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ����/����

C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::~C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView()
{
}

BOOL C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ����

void C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::OnDraw(CDC* /*pDC*/)
{
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ���

#ifdef _DEBUG
void C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc* C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc)));
	return (C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ��Ϣ�������


void C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::On32771()
{
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc* pDoc = GetDocument();
	CRect rect;
	CClientDC dc(this);
	GetClientRect(&rect);
	int red = 0, green = 0, blue = 0;
	for (int i = 0; i < pDoc->N; i++)
	{
		//int red = 66, green = 166, blue = 66;
		int color = RGB(red, green, blue);
		CBrush newbrush(color);
		CBrush*oldbrush = dc.SelectObject(&newbrush);
		dc.Ellipse((rect.right - rect.left) / 2 - i, (rect.bottom - rect.top) / 2 - i, (rect.right - rect.left) / 2 + i, (rect.bottom - rect.top) / 2 + i);
		dc.SelectObject(oldbrush);
		red += 32;
		green += 166;
		blue += 8;
	}
	// TODO: �ڴ���������������
}
