
// ��������Դ�˵� ʵ���3��ʵ����View.cpp : C��������Դ�˵�ʵ���3��ʵ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��������Դ�˵� ʵ���3��ʵ����.h"
#endif

#include "��������Դ�˵� ʵ���3��ʵ����Doc.h"
#include "��������Դ�˵� ʵ���3��ʵ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��������Դ�˵�ʵ���3��ʵ����View

IMPLEMENT_DYNCREATE(C��������Դ�˵�ʵ���3��ʵ����View, CView)

BEGIN_MESSAGE_MAP(C��������Դ�˵�ʵ���3��ʵ����View, CView)
	ON_COMMAND(ID_32775, &C��������Դ�˵�ʵ���3��ʵ����View::On32775)
	ON_COMMAND(ID_32771, &C��������Դ�˵�ʵ���3��ʵ����View::On32771)
	ON_COMMAND(ID_32772, &C��������Դ�˵�ʵ���3��ʵ����View::On32772)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_32773, &C��������Դ�˵�ʵ���3��ʵ����View::On32773)
	ON_COMMAND(ID_32774, &C��������Դ�˵�ʵ���3��ʵ����View::On32774)
END_MESSAGE_MAP()

// C��������Դ�˵�ʵ���3��ʵ����View ����/����

C��������Դ�˵�ʵ���3��ʵ����View::C��������Դ�˵�ʵ���3��ʵ����View()
{
	BITMAP BM;
	bm.LoadBitmap(IDB_BITMAP1);
	bm.GetBitmap(&BM);
	bmh = BM.bmHeight;
	bmw = BM.bmWidth;


	// TODO: �ڴ˴���ӹ������

}

C��������Դ�˵�ʵ���3��ʵ����View::~C��������Դ�˵�ʵ���3��ʵ����View()
{
}

BOOL C��������Դ�˵�ʵ���3��ʵ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��������Դ�˵�ʵ���3��ʵ����View ����

void C��������Դ�˵�ʵ���3��ʵ����View::OnDraw(CDC* /*pDC*/)
{
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��������Դ�˵�ʵ���3��ʵ����View ���

#ifdef _DEBUG
void C��������Դ�˵�ʵ���3��ʵ����View::AssertValid() const
{
	CView::AssertValid();
}

void C��������Դ�˵�ʵ���3��ʵ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��������Դ�˵�ʵ���3��ʵ����Doc* C��������Դ�˵�ʵ���3��ʵ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��������Դ�˵�ʵ���3��ʵ����Doc)));
	return (C��������Դ�˵�ʵ���3��ʵ����Doc*)m_pDocument;
}
#endif //_DEBUG


// C��������Դ�˵�ʵ���3��ʵ����View ��Ϣ�������


void C��������Դ�˵�ʵ���3��ʵ����View::On32775()//��Բ
{   
	// TODO: �ڴ���������������
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	//CClientDC dc(this);
	pDoc->a = 3;
	
}


void C��������Դ�˵�ʵ���3��ʵ����View::On32771()//��ʾ����
{
	CClientDC dc(this);
	CString s = _T("Ī�ķ�");
	dc.TextOutW(60, 60, s);
	// TODO: �ڴ���������������
}


void C��������Դ�˵�ʵ���3��ʵ����View::On32772()//��ʾλͼ
{
	CClientDC dc(this);
	CDC DC;
	DC.CreateCompatibleDC(NULL);
	DC.SelectObject(bm);
	dc.BitBlt(100, 100, bmw, bmh, &DC, 100,100, SRCCOPY);
	// TODO: �ڴ���������������
}


void C��������Դ�˵�ʵ���3��ʵ����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	pDoc->cr.left = point.x;
	pDoc->cr.top = point.y; 
	pDoc->pointu.x = point.x;
	pDoc->pointu.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void C��������Դ�˵�ʵ���3��ʵ����View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->cr.right = point.x;
	pDoc->cr.bottom = point.y;
	pDoc->pointd.x = point.x;
	pDoc->pointd.y = point.y;
	switch (pDoc->a)
	{
	case 1:
	{
		dc.MoveTo(pDoc->pointu.x, pDoc->pointu.y);
		dc.LineTo(pDoc->pointd.x, pDoc->pointd.y);
		break;
	}
	case 2:
	{
		dc.Rectangle(pDoc->cr);
	    break;
	}
	case 3:
	{
		if ((pDoc->cr.right - pDoc->cr.left) > (pDoc->cr.bottom - pDoc->cr.top))
		{
			pDoc->cr.bottom = pDoc->cr.bottom;
			pDoc->cr.top = pDoc->cr.top;
			pDoc->cr.left = (pDoc->cr.right - pDoc->cr.left) / 2 - (pDoc->cr.bottom - pDoc->cr.top) / 2;
			pDoc->cr.right = (pDoc->cr.right - pDoc->cr.left) / 2 + (pDoc->cr.bottom - pDoc->cr.top) / 2;
		}
		else
		{
			pDoc->cr.left = pDoc->cr.left;
			pDoc->cr.right = pDoc->cr.right;
			pDoc->cr.top = (pDoc->cr.bottom - pDoc->cr.top) / 2 - (pDoc->cr.right - pDoc->cr.left) / 2;
			pDoc->cr.bottom = (pDoc->cr.bottom - pDoc->cr.top) / 2 + (pDoc->cr.right - pDoc->cr.left) / 2;
		}
		dc.Ellipse(pDoc->cr);
	}
	}
	//dc.Ellipse(pDoc->cr);
	CView::OnLButtonUp(nFlags, point);
}


void C��������Դ�˵�ʵ���3��ʵ����View::On32773()//����
{   
	// TODO: �ڴ���������������
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	pDoc->a = 1;
}


void C��������Դ�˵�ʵ���3��ʵ����View::On32774()//������
{
	C��������Դ�˵�ʵ���3��ʵ����Doc* pDoc = GetDocument();
	pDoc->a = 2;
	//CClientDC dc(this);
	
	// TODO: �ڴ���������������
}
