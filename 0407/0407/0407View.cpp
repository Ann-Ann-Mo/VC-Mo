
// 0407View.cpp : CMy0407View ���ʵ��



// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0407.h"
#endif
#include "stdafx.h"
#include "0407Doc.h"
#include "0407View.h"
#include "MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0407View

IMPLEMENT_DYNCREATE(CMy0407View, CView)

BEGIN_MESSAGE_MAP(CMy0407View, CView)
	ON_COMMAND(ID_32771, &CMy0407View::On32771)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy0407View ����/����

CMy0407View::CMy0407View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0407View::~CMy0407View()
{
}

BOOL CMy0407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0407View ����

void CMy0407View::OnDraw(CDC* /*pDC*/)
{
	CMy0407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0407View ���

#ifdef _DEBUG
void CMy0407View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0407Doc* CMy0407View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0407Doc)));
	return (CMy0407Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0407View ��Ϣ�������


void CMy0407View::On32771()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int R, X, Y;
		R = dlg.r;
		X = dlg.x;
		Y = dlg.r;
		CRect re(X - R, Y-R,X + R, Y + R);
		GetDC()->Ellipse(re);
	}
}


void CMy0407View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg0 *pD=new MyDlg0;
	pD->Create(IDD_DIALOG1);
	pD->ShowWindow(1);

	CView::OnLButtonDblClk(nFlags, point);
}
