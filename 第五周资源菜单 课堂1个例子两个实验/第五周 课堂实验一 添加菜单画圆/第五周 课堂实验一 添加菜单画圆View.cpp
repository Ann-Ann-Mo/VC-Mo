
// ������ ����ʵ��һ ��Ӳ˵���ԲView.cpp : C�����ܿ���ʵ��һ��Ӳ˵���ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ����ʵ��һ ��Ӳ˵���Բ.h"
#endif

#include "������ ����ʵ��һ ��Ӳ˵���ԲDoc.h"
#include "������ ����ʵ��һ ��Ӳ˵���ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����ܿ���ʵ��һ��Ӳ˵���ԲView

IMPLEMENT_DYNCREATE(C�����ܿ���ʵ��һ��Ӳ˵���ԲView, CView)

BEGIN_MESSAGE_MAP(C�����ܿ���ʵ��һ��Ӳ˵���ԲView, CView)
	ON_COMMAND(ID_32771, &C�����ܿ���ʵ��һ��Ӳ˵���ԲView::On32771)
END_MESSAGE_MAP()

// C�����ܿ���ʵ��һ��Ӳ˵���ԲView ����/����

C�����ܿ���ʵ��һ��Ӳ˵���ԲView::C�����ܿ���ʵ��һ��Ӳ˵���ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

C�����ܿ���ʵ��һ��Ӳ˵���ԲView::~C�����ܿ���ʵ��һ��Ӳ˵���ԲView()
{
}

BOOL C�����ܿ���ʵ��һ��Ӳ˵���ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����ܿ���ʵ��һ��Ӳ˵���ԲView ����

void C�����ܿ���ʵ��һ��Ӳ˵���ԲView::OnDraw(CDC* /*pDC*/)
{
	C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����ܿ���ʵ��һ��Ӳ˵���ԲView ���

#ifdef _DEBUG
void C�����ܿ���ʵ��һ��Ӳ˵���ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C�����ܿ���ʵ��һ��Ӳ˵���ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc* C�����ܿ���ʵ��һ��Ӳ˵���ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc)));
	return (C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C�����ܿ���ʵ��һ��Ӳ˵���ԲView ��Ϣ�������


void C�����ܿ���ʵ��һ��Ӳ˵���ԲView::On32771()
{
	C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc* pDoc = GetDocument();
	CRect rect;
	CClientDC dc(this);
	GetClientRect(&rect);
	for (int i = 0; i < pDoc->N; i++)
	{
		dc.Ellipse((rect.right - rect.left) / 2 - i, (rect.bottom - rect.top) / 2 - i, (rect.right - rect.left) / 2 + i, (rect.bottom - rect.top) / 2 + i);

	}
	// TODO: �ڴ���������������
}
