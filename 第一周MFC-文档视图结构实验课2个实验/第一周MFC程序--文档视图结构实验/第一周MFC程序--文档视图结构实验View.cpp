
// ��һ��MFC����--�ĵ���ͼ�ṹʵ��View.cpp : C��һ��MFC�����ĵ���ͼ�ṹʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��MFC����--�ĵ���ͼ�ṹʵ��.h"
#endif

#include "��һ��MFC����--�ĵ���ͼ�ṹʵ��Doc.h"
#include "��һ��MFC����--�ĵ���ͼ�ṹʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��MFC�����ĵ���ͼ�ṹʵ��View

IMPLEMENT_DYNCREATE(C��һ��MFC�����ĵ���ͼ�ṹʵ��View, CView)

BEGIN_MESSAGE_MAP(C��һ��MFC�����ĵ���ͼ�ṹʵ��View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��һ��MFC�����ĵ���ͼ�ṹʵ��View ����/����

C��һ��MFC�����ĵ���ͼ�ṹʵ��View::C��һ��MFC�����ĵ���ͼ�ṹʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��MFC�����ĵ���ͼ�ṹʵ��View::~C��һ��MFC�����ĵ���ͼ�ṹʵ��View()
{
}

BOOL C��һ��MFC�����ĵ���ͼ�ṹʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��MFC�����ĵ���ͼ�ṹʵ��View ����

void C��һ��MFC�����ĵ���ͼ�ṹʵ��View::OnDraw(CDC* pDC)
{
	C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��MFC�����ĵ���ͼ�ṹʵ��View ���

#ifdef _DEBUG
void C��һ��MFC�����ĵ���ͼ�ṹʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��MFC�����ĵ���ͼ�ṹʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc* C��һ��MFC�����ĵ���ͼ�ṹʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc)));
	return (C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��MFC�����ĵ���ͼ�ṹʵ��View ��Ϣ�������


void C��һ��MFC�����ĵ���ͼ�ṹʵ��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc* pDoc = GetDocument();
	CString s;
	CClientDC dc(this);
	s.Format(_T("%s"), pDoc->name);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
