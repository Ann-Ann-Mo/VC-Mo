
// �ڰ��ܻ��ڶԻ��� ����1������3��ʵ��View.cpp : C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ڰ��ܻ��ڶԻ��� ����1������3��ʵ��.h"
#endif

#include "�ڰ��ܻ��ڶԻ��� ����1������3��ʵ��Doc.h"
#include "�ڰ��ܻ��ڶԻ��� ����1������3��ʵ��View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ڰ��ܻ��ڶԻ������1������3��ʵ��View

IMPLEMENT_DYNCREATE(C�ڰ��ܻ��ڶԻ������1������3��ʵ��View, CView)

BEGIN_MESSAGE_MAP(C�ڰ��ܻ��ڶԻ������1������3��ʵ��View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ����/����

C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::C�ڰ��ܻ��ڶԻ������1������3��ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::~C�ڰ��ܻ��ڶԻ������1������3��ʵ��View()
{
}

BOOL C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ����

void C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::OnDraw(CDC* /*pDC*/)
{
	C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ���

#ifdef _DEBUG
void C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc* C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc)));
	return (C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ��Ϣ�������


void C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg md2;
	int r = md2.DoModal();
	if (r == IDOK)
	{
		CString s1 = md2.s;
		GetDC()->TextOutW(200, 100, s1);
	}
	CView::OnRButtonDblClk(nFlags, point);
}
