
// 0324BView.cpp : CMy0324BView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324B.h"
#endif

#include "0324BDoc.h"
#include "0324BView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324BView

IMPLEMENT_DYNCREATE(CMy0324BView, CView)

BEGIN_MESSAGE_MAP(CMy0324BView, CView)
	ON_COMMAND(ID_32771, &CMy0324BView::On32771)
	ON_WM_LBUTTONDOWN()
	ON_WM_MBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy0324BView ����/����

CMy0324BView::CMy0324BView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0324BView::~CMy0324BView()
{
}

BOOL CMy0324BView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324BView ����

void CMy0324BView::OnDraw(CDC* /*pDC*/)
{
	CMy0324BDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0324BView ���

#ifdef _DEBUG
void CMy0324BView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324BView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324BDoc* CMy0324BView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324BDoc)));
	return (CMy0324BDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324BView ��Ϣ�������


void CMy0324BView::On32771()
{
	// TODO: �ڴ���������������
}


void CMy0324BView::OnLButtonDown(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CPoint start;
	start.x = point.x;  //��������������ʱ���꣬Ϊֱ�ߵ��������
	start.y = point.y;
	set = 1;  //�������������±�־��Ϊ1��ʾ����������
	CView::OnLButtonDown(nFlags, point);
}


void CMy0324BView::OnMButtonUp(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = 0;  //��ֵΪ0ʱ����ʾ������UP
	CView::OnMButtonUp(nFlags, point);
}


void CMy0324BView::OnMouseMove(UINT nFlags, CPoint point)
{
	bool set;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CPoint stop;
	stop.x = point.x;  //ÿ������ƶ����ᵼ��ֱ���յ�����ı�
	stop.y = point.y;
	if (set == 1)  //������ƶ�ʱ�����������Ҳ�ǰ��£���ˢ�»���ֱ��
	{
		Invalidate(TRUE);
	}
	
	CView::OnMouseMove(nFlags, point);
}
