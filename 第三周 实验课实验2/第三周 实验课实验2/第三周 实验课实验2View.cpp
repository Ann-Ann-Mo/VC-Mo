
// ������ ʵ���ʵ��2View.cpp : C������ʵ���ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ʵ���ʵ��2.h"
#endif

#include "������ ʵ���ʵ��2Doc.h"
#include "������ ʵ���ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ���ʵ��2View

IMPLEMENT_DYNCREATE(C������ʵ���ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ��2View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C������ʵ���ʵ��2View ����/����

C������ʵ���ʵ��2View::C������ʵ���ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ���ʵ��2View::~C������ʵ���ʵ��2View()
{
}

BOOL C������ʵ���ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ���ʵ��2View ����

void C������ʵ���ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ���ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ���ʵ��2View ���

#ifdef _DEBUG
void C������ʵ���ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ���ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ���ʵ��2Doc* C������ʵ���ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ���ʵ��2Doc)));
	return (C������ʵ���ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ���ʵ��2View ��Ϣ�������


void C������ʵ���ʵ��2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��
		C������ʵ���ʵ��2Doc* pDoc = GetDocument();
		CString s;
		CClientDC dc(this);
		s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
		dc.TextOutW(200, 300, s);
	CView::OnLButtonUp(nFlags, point);
}
