
// ������ʵ��4 �ؼ�������Ĺ���View.cpp : C������ʵ��4�ؼ�������Ĺ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��4 �ؼ�������Ĺ���.h"
#endif

#include "������ʵ��4 �ؼ�������Ĺ���Doc.h"
#include "������ʵ��4 �ؼ�������Ĺ���View.h"
#include"Dlg3.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ��4�ؼ�������Ĺ���View

IMPLEMENT_DYNCREATE(C������ʵ��4�ؼ�������Ĺ���View, CView)

BEGIN_MESSAGE_MAP(C������ʵ��4�ؼ�������Ĺ���View, CView)
	ON_COMMAND(ID_output, &C������ʵ��4�ؼ�������Ĺ���View::Onoutput)
END_MESSAGE_MAP()

// C������ʵ��4�ؼ�������Ĺ���View ����/����

C������ʵ��4�ؼ�������Ĺ���View::C������ʵ��4�ؼ�������Ĺ���View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ��4�ؼ�������Ĺ���View::~C������ʵ��4�ؼ�������Ĺ���View()
{
}

BOOL C������ʵ��4�ؼ�������Ĺ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ��4�ؼ�������Ĺ���View ����

void C������ʵ��4�ؼ�������Ĺ���View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ��4�ؼ�������Ĺ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ��4�ؼ�������Ĺ���View ���

#ifdef _DEBUG
void C������ʵ��4�ؼ�������Ĺ���View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ��4�ؼ�������Ĺ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ��4�ؼ�������Ĺ���Doc* C������ʵ��4�ؼ�������Ĺ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ��4�ؼ�������Ĺ���Doc)));
	return (C������ʵ��4�ؼ�������Ĺ���Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ��4�ؼ�������Ĺ���View ��Ϣ�������


void C������ʵ��4�ؼ�������Ĺ���View::Onoutput()
{
	Dlg3 dlg;
	int r = dlg.DoModal();
	// TODO: �ڴ���������������
}
