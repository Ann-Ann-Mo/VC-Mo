
// ��һ��ʵ���ʵ��� �Ҽ��������������View.cpp : C��һ��ʵ���ʵ����Ҽ��������������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��ʵ���ʵ��� �Ҽ��������������.h"
#endif

#include "��һ��ʵ���ʵ��� �Ҽ��������������Doc.h"
#include "��һ��ʵ���ʵ��� �Ҽ��������������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��ʵ���ʵ����Ҽ��������������View

IMPLEMENT_DYNCREATE(C��һ��ʵ���ʵ����Ҽ��������������View, CView)

BEGIN_MESSAGE_MAP(C��һ��ʵ���ʵ����Ҽ��������������View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// C��һ��ʵ���ʵ����Ҽ��������������View ����/����

C��һ��ʵ���ʵ����Ҽ��������������View::C��һ��ʵ���ʵ����Ҽ��������������View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��ʵ���ʵ����Ҽ��������������View::~C��һ��ʵ���ʵ����Ҽ��������������View()
{
}

BOOL C��һ��ʵ���ʵ����Ҽ��������������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��ʵ���ʵ����Ҽ��������������View ����

void C��һ��ʵ���ʵ����Ҽ��������������View::OnDraw(CDC* /*pDC*/)
{
	C��һ��ʵ���ʵ����Ҽ��������������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��ʵ���ʵ����Ҽ��������������View ���

#ifdef _DEBUG
void C��һ��ʵ���ʵ����Ҽ��������������View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��ʵ���ʵ����Ҽ��������������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��ʵ���ʵ����Ҽ��������������Doc* C��һ��ʵ���ʵ����Ҽ��������������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��ʵ���ʵ����Ҽ��������������Doc)));
	return (C��һ��ʵ���ʵ����Ҽ��������������Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��ʵ���ʵ����Ҽ��������������View ��Ϣ�������


void C��һ��ʵ���ʵ����Ҽ��������������View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ���ʵ����Ҽ��������������Doc* pDoc = GetDocument();
	pDoc->count = pDoc->count + 1;
	CView::OnLButtonDown(nFlags, point);
}


void C��һ��ʵ���ʵ����Ҽ��������������View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ���ʵ����Ҽ��������������Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(200, 300, s);
	CView::OnRButtonDown(nFlags, point);
}
