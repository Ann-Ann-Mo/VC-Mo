
// ������ ʵ����3 ��ʱ��С����View.cpp : C������ʵ����3��ʱ��С����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ʵ����3 ��ʱ��С����.h"
#endif

#include "������ ʵ����3 ��ʱ��С����Doc.h"
#include "������ ʵ����3 ��ʱ��С����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ����3��ʱ��С����View

IMPLEMENT_DYNCREATE(C������ʵ����3��ʱ��С����View, CView)

BEGIN_MESSAGE_MAP(C������ʵ����3��ʱ��С����View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C������ʵ����3��ʱ��С����View ����/����

C������ʵ����3��ʱ��С����View::C������ʵ����3��ʱ��С����View()
{
	// TODO: �ڴ˴���ӹ������
	//GetClientRect (&ccr);(ccr.bottom - ccr.top) / 2 + 30
	cr.top = 300;
	cr.bottom = 360;
	cr.left = 0;
	cr.right = 60;
	set = false;
}

C������ʵ����3��ʱ��С����View::~C������ʵ����3��ʱ��С����View()
{
}

BOOL C������ʵ����3��ʱ��С����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ����3��ʱ��С����View ����

void C������ʵ����3��ʱ��С����View::OnDraw(CDC* pDC)
{
	C������ʵ����3��ʱ��С����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//if (set)
	//{
    // SetTimer(1, 200, NULL);
	 // set = FALSE;
	//}
	pDC->Ellipse(&cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ����3��ʱ��С����View ���

#ifdef _DEBUG
void C������ʵ����3��ʱ��С����View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ����3��ʱ��С����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ����3��ʱ��С����Doc* C������ʵ����3��ʱ��С����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ����3��ʱ��С����Doc)));
	return (C������ʵ����3��ʱ��С����Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ����3��ʱ��С����View ��Ϣ�������

void C������ʵ����3��ʱ��С����View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	SetTimer(1, 200, NULL);
	dc.Ellipse(cr);
	//set = true;
	//if (set == true)
	//{
		
	//}
	CView::OnLButtonDown(nFlags, point);
}


void C������ʵ����3��ʱ��С����View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}

void C������ʵ����3��ʱ��С����View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//int i= nIDEvent;
	//this->GetClientRect(&rect);
	this->GetClientRect(&ccr);
	//if (flag == 0) {
		if (cr.right < ccr.right )		
		{
			cr.left += 20;
			cr.right+= 20;
			cr.top =  300;
			cr.bottom =  360;
			//Invalidate();
		}
		else
		{
			cr.left -= 20;
			cr.right -= 20;
			cr.top = 300;
			cr.bottom = 360;
			//GetClientRect(&ccr);
			//cr.top = (ccr.bottom - ccr.top) / 2 - 30;
			//cr.bottom = (ccr.bottom - ccr.top) / 2 + 30;
			//Invalidate();
		}
		Invalidate();
	//}
	CView::OnTimer(nIDEvent);
}


