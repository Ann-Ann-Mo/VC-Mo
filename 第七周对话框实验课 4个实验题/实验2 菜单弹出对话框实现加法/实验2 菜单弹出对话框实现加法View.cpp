
// ʵ��2 �˵������Ի���ʵ�ּӷ�View.cpp : Cʵ��2�˵������Ի���ʵ�ּӷ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��2 �˵������Ի���ʵ�ּӷ�.h"
#endif

#include "ʵ��2 �˵������Ի���ʵ�ּӷ�Doc.h"
#include "ʵ��2 �˵������Ի���ʵ�ּӷ�View.h"
#include"Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��2�˵������Ի���ʵ�ּӷ�View

IMPLEMENT_DYNCREATE(Cʵ��2�˵������Ի���ʵ�ּӷ�View, CView)

BEGIN_MESSAGE_MAP(Cʵ��2�˵������Ի���ʵ�ּӷ�View, CView)
	ON_COMMAND(ID_output, &Cʵ��2�˵������Ի���ʵ�ּӷ�View::Onoutput)
END_MESSAGE_MAP()

// Cʵ��2�˵������Ի���ʵ�ּӷ�View ����/����

Cʵ��2�˵������Ի���ʵ�ּӷ�View::Cʵ��2�˵������Ի���ʵ�ּӷ�View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��2�˵������Ի���ʵ�ּӷ�View::~Cʵ��2�˵������Ի���ʵ�ּӷ�View()
{
}

BOOL Cʵ��2�˵������Ի���ʵ�ּӷ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��2�˵������Ի���ʵ�ּӷ�View ����

void Cʵ��2�˵������Ի���ʵ�ּӷ�View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��2�˵������Ի���ʵ�ּӷ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��2�˵������Ի���ʵ�ּӷ�View ���

#ifdef _DEBUG
void Cʵ��2�˵������Ի���ʵ�ּӷ�View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��2�˵������Ի���ʵ�ּӷ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��2�˵������Ի���ʵ�ּӷ�Doc* Cʵ��2�˵������Ի���ʵ�ּӷ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��2�˵������Ի���ʵ�ּӷ�Doc)));
	return (Cʵ��2�˵������Ի���ʵ�ּӷ�Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��2�˵������Ի���ʵ�ּӷ�View ��Ϣ�������


void Cʵ��2�˵������Ի���ʵ�ּӷ�View::Onoutput()
{
	Dlg1 dlg;
	int r=dlg.DoModal();
	// TODO: �ڴ���������������
}
