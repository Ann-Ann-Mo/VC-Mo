
// 0414�ڰ��� ���ڶԻ��� ʵ��һView.cpp : CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414�ڰ��� ���ڶԻ��� ʵ��һ.h"
#endif

#include "0414�ڰ��� ���ڶԻ��� ʵ��һDoc.h"
#include "0414�ڰ��� ���ڶԻ��� ʵ��һView.h"
#include "MyD81.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView

IMPLEMENT_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView, CView)

BEGIN_MESSAGE_MAP(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ����/����

CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::~CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView()
{
}

BOOL CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ����

void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::OnDraw(CDC* /*pDC*/)
{
	CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ���

#ifdef _DEBUG
void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc* CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc)));
	return (CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ��Ϣ�������


void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd1(true);
	int r = cfd1.DoModal();
	if (r == IDOK)
	{
		CString s1 = cfd1.GetFileName();
		GetDC()->TextOutW(200, 155, s1);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
