
// ����������7 Ӧ�ó��򴰿ڵĽ���View.cpp : C����������7Ӧ�ó��򴰿ڵĽ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������7 Ӧ�ó��򴰿ڵĽ���.h"
#endif

#include "����������7 Ӧ�ó��򴰿ڵĽ���Doc.h"
#include "����������7 Ӧ�ó��򴰿ڵĽ���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������7Ӧ�ó��򴰿ڵĽ���View

IMPLEMENT_DYNCREATE(C����������7Ӧ�ó��򴰿ڵĽ���View, CView)

BEGIN_MESSAGE_MAP(C����������7Ӧ�ó��򴰿ڵĽ���View, CView)
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C����������7Ӧ�ó��򴰿ڵĽ���View ����/����

C����������7Ӧ�ó��򴰿ڵĽ���View::C����������7Ӧ�ó��򴰿ڵĽ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C����������7Ӧ�ó��򴰿ڵĽ���View::~C����������7Ӧ�ó��򴰿ڵĽ���View()
{
}

BOOL C����������7Ӧ�ó��򴰿ڵĽ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������7Ӧ�ó��򴰿ڵĽ���View ����

void C����������7Ӧ�ó��򴰿ڵĽ���View::OnDraw(CDC* pDC)
{
	C����������7Ӧ�ó��򴰿ڵĽ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 300, pDoc->s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������7Ӧ�ó��򴰿ڵĽ���View ���

#ifdef _DEBUG
void C����������7Ӧ�ó��򴰿ڵĽ���View::AssertValid() const
{
	CView::AssertValid();
}

void C����������7Ӧ�ó��򴰿ڵĽ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������7Ӧ�ó��򴰿ڵĽ���Doc* C����������7Ӧ�ó��򴰿ڵĽ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������7Ӧ�ó��򴰿ڵĽ���Doc)));
	return (C����������7Ӧ�ó��򴰿ڵĽ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C����������7Ӧ�ó��򴰿ڵĽ���View ��Ϣ�������


void C����������7Ӧ�ó��򴰿ڵĽ���View::OnSetFocus(CWnd* pOldWnd)
{
	C����������7Ӧ�ó��򴰿ڵĽ���Doc* pDoc = GetDocument();
	CView::OnSetFocus(pOldWnd);
	pDoc->s = "����˽���.";
		InvalidateRect(NULL, TRUE);
	// TODO: �ڴ˴������Ϣ����������
}


void C����������7Ӧ�ó��򴰿ڵĽ���View::OnKillFocus(CWnd* pNewWnd)
{
	CView::OnKillFocus(pNewWnd);
	C����������7Ӧ�ó��򴰿ڵĽ���Doc* pDoc = GetDocument();
	pDoc->s = "ʧȥ �˽���.";
	InvalidateRect(NULL, TRUE);
	// TODO: �ڴ˴������Ϣ����������
}


void C����������7Ӧ�ó��򴰿ڵĽ���View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MessageBeep(1);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
