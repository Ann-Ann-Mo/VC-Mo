
// Dlg2View.cpp : CDlg2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg2.h"
#endif

#include "Dlg2Doc.h"
#include "Dlg2View.h"
#include "MyD2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg2View

IMPLEMENT_DYNCREATE(CDlg2View, CView)

BEGIN_MESSAGE_MAP(CDlg2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// CDlg2View ����/����

CDlg2View::CDlg2View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg2View::~CDlg2View()
{
}

BOOL CDlg2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg2View ����

void CDlg2View::OnDraw(CDC* /*pDC*/)
{
	CDlg2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg2View ���

#ifdef _DEBUG
void CDlg2View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg2Doc* CDlg2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg2Doc)));
	return (CDlg2Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg2View ��Ϣ�������


void CDlg2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyD2 md2;
	int r = md2.DoModal();
	if(r == IDOK)
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 155, s1);
	}

	CView::OnRButtonDblClk(nFlags, point);
}
