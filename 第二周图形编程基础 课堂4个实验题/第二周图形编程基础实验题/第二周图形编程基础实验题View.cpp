
// �ڶ���ͼ�α�̻���ʵ����View.cpp : C�ڶ���ͼ�α�̻���ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڶ���ͼ�α�̻���ʵ����.h"
#endif

#include "�ڶ���ͼ�α�̻���ʵ����Doc.h"
#include "�ڶ���ͼ�α�̻���ʵ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڶ���ͼ�α�̻���ʵ����View

IMPLEMENT_DYNCREATE(C�ڶ���ͼ�α�̻���ʵ����View, CView)

BEGIN_MESSAGE_MAP(C�ڶ���ͼ�α�̻���ʵ����View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C�ڶ���ͼ�α�̻���ʵ����View ����/����

C�ڶ���ͼ�α�̻���ʵ����View::C�ڶ���ͼ�α�̻���ʵ����View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڶ���ͼ�α�̻���ʵ����View::~C�ڶ���ͼ�α�̻���ʵ����View()
{
}

BOOL C�ڶ���ͼ�α�̻���ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڶ���ͼ�α�̻���ʵ����View ����

void C�ڶ���ͼ�α�̻���ʵ����View::OnDraw(CDC* pDC)
{
	C�ڶ���ͼ�α�̻���ʵ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڶ���ͼ�α�̻���ʵ����View ���

#ifdef _DEBUG
void C�ڶ���ͼ�α�̻���ʵ����View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڶ���ͼ�α�̻���ʵ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڶ���ͼ�α�̻���ʵ����Doc* C�ڶ���ͼ�α�̻���ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڶ���ͼ�α�̻���ʵ����Doc)));
	return (C�ڶ���ͼ�α�̻���ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڶ���ͼ�α�̻���ʵ����View ��Ϣ�������


void C�ڶ���ͼ�α�̻���ʵ����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	r = rand()%(100-10)+10;
	CClientDC dc(this);
	CRect rect(point.x - r, point.y + r, point.x + r, point.y - r);
	dc.Ellipse(&rect);
	CView::OnLButtonDown(nFlags, point);
}
