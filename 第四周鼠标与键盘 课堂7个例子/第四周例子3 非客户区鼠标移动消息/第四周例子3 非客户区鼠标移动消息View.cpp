
// ����������3 �ǿͻ�������ƶ���ϢView.cpp : C����������3�ǿͻ�������ƶ���ϢView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������3 �ǿͻ�������ƶ���Ϣ.h"
#endif

#include "����������3 �ǿͻ�������ƶ���ϢDoc.h"
#include "����������3 �ǿͻ�������ƶ���ϢView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C����������3�ǿͻ�������ƶ���ϢView

IMPLEMENT_DYNCREATE(C����������3�ǿͻ�������ƶ���ϢView, CView)

BEGIN_MESSAGE_MAP(C����������3�ǿͻ�������ƶ���ϢView, CView)
END_MESSAGE_MAP()

// C����������3�ǿͻ�������ƶ���ϢView ����/����

C����������3�ǿͻ�������ƶ���ϢView::C����������3�ǿͻ�������ƶ���ϢView()
{
	// TODO: �ڴ˴���ӹ������

}

C����������3�ǿͻ�������ƶ���ϢView::~C����������3�ǿͻ�������ƶ���ϢView()
{
}

BOOL C����������3�ǿͻ�������ƶ���ϢView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C����������3�ǿͻ�������ƶ���ϢView ����

void C����������3�ǿͻ�������ƶ���ϢView::OnDraw(CDC* /*pDC*/)
{
	C����������3�ǿͻ�������ƶ���ϢDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C����������3�ǿͻ�������ƶ���ϢView ���

#ifdef _DEBUG
void C����������3�ǿͻ�������ƶ���ϢView::AssertValid() const
{
	CView::AssertValid();
}

void C����������3�ǿͻ�������ƶ���ϢView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������3�ǿͻ�������ƶ���ϢDoc* C����������3�ǿͻ�������ƶ���ϢView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������3�ǿͻ�������ƶ���ϢDoc)));
	return (C����������3�ǿͻ�������ƶ���ϢDoc*)m_pDocument;
}
#endif //_DEBUG


// C����������3�ǿͻ�������ƶ���ϢView ��Ϣ�������
