
// 0414�ڰ��� ���ڶԻ��� ʵ���View.cpp : CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414�ڰ��� ���ڶԻ��� ʵ���.h"
#endif
#include "MyD82.h"
#include "0414�ڰ��� ���ڶԻ��� ʵ���Doc.h"
#include "0414�ڰ��� ���ڶԻ��� ʵ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414�ڰ��ܻ��ڶԻ���ʵ���View

IMPLEMENT_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ���View, CView)

BEGIN_MESSAGE_MAP(CMy0414�ڰ��ܻ��ڶԻ���ʵ���View, CView)
	ON_COMMAND(ID_32771, &CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::On32771)
END_MESSAGE_MAP()

// CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ����/����

CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::CMy0414�ڰ��ܻ��ڶԻ���ʵ���View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::~CMy0414�ڰ��ܻ��ڶԻ���ʵ���View()
{
}

BOOL CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ����

void CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::OnDraw(CDC* /*pDC*/)
{
	CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ���

#ifdef _DEBUG
void CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc* CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc)));
	return (CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ��Ϣ�������


void CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::On32771()
{
	CFileDialog cfd1(true);
	int r = cfd1.DoModal();
	if (r == IDOK)
	{
		CString s1 = cfd1.GetFileName();
		cfd1.E
		//GetDC()->TextOutW(200, 155, s1);
	}
	}

