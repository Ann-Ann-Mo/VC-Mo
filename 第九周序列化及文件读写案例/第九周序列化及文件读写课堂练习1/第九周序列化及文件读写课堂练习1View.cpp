
// �ھ������л����ļ���д������ϰ1View.cpp : C�ھ������л����ļ���д������ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ������л����ļ���д������ϰ1.h"
#endif

#include "�ھ������л����ļ���д������ϰ1Doc.h"
#include "�ھ������л����ļ���д������ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ������л����ļ���д������ϰ1View

IMPLEMENT_DYNCREATE(C�ھ������л����ļ���д������ϰ1View, CView)

BEGIN_MESSAGE_MAP(C�ھ������л����ļ���д������ϰ1View, CView)
END_MESSAGE_MAP()

// C�ھ������л����ļ���д������ϰ1View ����/����

C�ھ������л����ļ���д������ϰ1View::C�ھ������л����ļ���д������ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ھ������л����ļ���д������ϰ1View::~C�ھ������л����ļ���д������ϰ1View()
{
}

BOOL C�ھ������л����ļ���д������ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ������л����ļ���д������ϰ1View ����

void C�ھ������л����ļ���д������ϰ1View::OnDraw(CDC* /*pDC*/)
{
	C�ھ������л����ļ���д������ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ھ������л����ļ���д������ϰ1View ���

#ifdef _DEBUG
void C�ھ������л����ļ���д������ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ������л����ļ���д������ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ������л����ļ���д������ϰ1Doc* C�ھ������л����ļ���д������ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ������л����ļ���д������ϰ1Doc)));
	return (C�ھ������л����ļ���д������ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ������л����ļ���д������ϰ1View ��Ϣ�������
