
// 0323View.cpp : CMy0323View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0323.h"
#endif

#include "0323Doc.h"
#include "0323View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323View

IMPLEMENT_DYNCREATE(CMy0323View, CView)



// CMy0323View ����/����

CMy0323View::CMy0323View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0323View::~CMy0323View()
{
}

BOOL CMy0323View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0323View ����

void CMy0323View::OnDraw(CDC* pDC)
{
	CMy0323Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0323View ��ӡ

BOOL CMy0323View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0323View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0323View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0323View ���

#ifdef _DEBUG
void CMy0323View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323Doc* CMy0323View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323Doc)));
	return (CMy0323Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323View ��Ϣ�������


void CMy0323View::On32771()
{
	// TODO: �ڴ���������������
CString s = _T("201812300052");
CClientDC dc(this);
dc.TextOutW(200, 200, s);
}