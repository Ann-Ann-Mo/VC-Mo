
// 0324AView.cpp : CMy0324AView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324A.h"
#endif

#include "0324ADoc.h"
#include "0324AView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324AView

IMPLEMENT_DYNCREATE(CMy0324AView, CView)

BEGIN_MESSAGE_MAP(CMy0324AView, CView)
	ON_COMMAND(ID_32771, &CMy0324AView::On32771)
END_MESSAGE_MAP()

// CMy0324AView ����/����

CMy0324AView::CMy0324AView()
{
	// TODO: �ڴ˴���ӹ������
	s = " ";
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;


}

CMy0324AView::~CMy0324AView()
{
}

BOOL CMy0324AView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324AView ����

void CMy0324AView::OnDraw(CDC* pDC)
{
	CMy0324ADoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0324AView ���

#ifdef _DEBUG
void CMy0324AView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324AView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324ADoc* CMy0324AView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324ADoc)));
	return (CMy0324ADoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324AView ��Ϣ�������


void CMy0324AView::On32771()
{
	CString s = _T("Ī�ķ�");
	CClientDC dc(this);
	dc.TextOutW(708, 312, s);
	// TODO: �ڴ���������������
}
