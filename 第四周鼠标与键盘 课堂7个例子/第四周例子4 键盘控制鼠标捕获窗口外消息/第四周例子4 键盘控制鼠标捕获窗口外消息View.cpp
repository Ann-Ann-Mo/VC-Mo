
// ����������4 ���̿�����겶�񴰿�����ϢView.cpp : C����������4���̿�����겶�񴰿�����ϢView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������4 ���̿�����겶�񴰿�����Ϣ.h"
#endif

#include "����������4 ���̿�����겶�񴰿�����ϢDoc.h"
#include "����������4 ���̿�����겶�񴰿�����ϢView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������4���̿�����겶�񴰿�����ϢView

IMPLEMENT_DYNCREATE(C����������4���̿�����겶�񴰿�����ϢView, CView)

BEGIN_MESSAGE_MAP(C����������4���̿�����겶�񴰿�����ϢView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C����������4���̿�����겶�񴰿�����ϢView ����/����

C����������4���̿�����겶�񴰿�����ϢView::C����������4���̿�����겶�񴰿�����ϢView()
{
	// TODO: �ڴ˴���ӹ������

}

C����������4���̿�����겶�񴰿�����ϢView::~C����������4���̿�����겶�񴰿�����ϢView()
{
}

BOOL C����������4���̿�����겶�񴰿�����ϢView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������4���̿�����겶�񴰿�����ϢView ����

void C����������4���̿�����겶�񴰿�����ϢView::OnDraw(CDC* /*pDC*/)
{
	C����������4���̿�����겶�񴰿�����ϢDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������4���̿�����겶�񴰿�����ϢView ���

#ifdef _DEBUG
void C����������4���̿�����겶�񴰿�����ϢView::AssertValid() const
{
	CView::AssertValid();
}

void C����������4���̿�����겶�񴰿�����ϢView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������4���̿�����겶�񴰿�����ϢDoc* C����������4���̿�����겶�񴰿�����ϢView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������4���̿�����겶�񴰿�����ϢDoc)));
	return (C����������4���̿�����겶�񴰿�����ϢDoc*)m_pDocument;
}
#endif //_DEBUG


// C����������4���̿�����겶�񴰿�����ϢView ��Ϣ�������


void C����������4���̿�����겶�񴰿�����ϢView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();//���������Ϣ
	CView::OnLButtonDown(nFlags, point);
}


void C����������4���̿�����겶�񴰿�����ϢView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();//�ͷ���겶��
	CView::OnLButtonUp(nFlags, point);
}


void C����������4���̿�����겶�񴰿�����ϢView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	CClientDC dc(this);
	s.Format(_T("x=%d  y=%d"), point.x, point.y);
	dc.TextOutW(200, 300, s);
	CView::OnMouseMove(nFlags, point);
}
