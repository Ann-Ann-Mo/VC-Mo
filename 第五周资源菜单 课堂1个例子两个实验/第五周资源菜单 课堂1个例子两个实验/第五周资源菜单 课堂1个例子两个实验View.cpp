
// ��������Դ�˵� ����1����������ʵ��View.cpp : C��������Դ�˵�����1����������ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��������Դ�˵� ����1����������ʵ��.h"
#endif

#include "��������Դ�˵� ����1����������ʵ��Doc.h"
#include "��������Դ�˵� ����1����������ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��������Դ�˵�����1����������ʵ��View

IMPLEMENT_DYNCREATE(C��������Դ�˵�����1����������ʵ��View, CView)

BEGIN_MESSAGE_MAP(C��������Դ�˵�����1����������ʵ��View, CView)
	ON_COMMAND(ID_shownumber, &C��������Դ�˵�����1����������ʵ��View::Onshownumber)
	ON_COMMAND(ID_showpicture, &C��������Դ�˵�����1����������ʵ��View::Onshowpicture)
END_MESSAGE_MAP()

// C��������Դ�˵�����1����������ʵ��View ����/����

C��������Դ�˵�����1����������ʵ��View::C��������Դ�˵�����1����������ʵ��View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	bm.LoadBitmap(IDB_BITMAP2);
	bm.GetBitmap(&BM);
	bmh = BM.bmHeight;
	bmw = BM.bmWidth;
}

C��������Դ�˵�����1����������ʵ��View::~C��������Դ�˵�����1����������ʵ��View()
{
}

BOOL C��������Դ�˵�����1����������ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��������Դ�˵�����1����������ʵ��View ����

void C��������Դ�˵�����1����������ʵ��View::OnDraw(CDC* pDC)
{
	C��������Դ�˵�����1����������ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��������Դ�˵�����1����������ʵ��View ���

#ifdef _DEBUG
void C��������Դ�˵�����1����������ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void C��������Դ�˵�����1����������ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��������Դ�˵�����1����������ʵ��Doc* C��������Դ�˵�����1����������ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��������Դ�˵�����1����������ʵ��Doc)));
	return (C��������Դ�˵�����1����������ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C��������Դ�˵�����1����������ʵ��View ��Ϣ�������


void C��������Դ�˵�����1����������ʵ��View::Onshownumber()
{
	CClientDC dc(this);
	CString s ;
	s.Format(_T("201812300052"));
	dc.TextOutW(10, 10, s);
	// TODO: �ڴ���������������
}


void C��������Դ�˵�����1����������ʵ��View::Onshowpicture()
{   CClientDC DC(this);
	CDC MDC;
	MDC.CreateCompatibleDC(NULL);
	MDC.SelectObject(bm);
	DC.BitBlt(0, 0, bmh, bmw, &MDC, 0, 0, SRCCOPY);
	// TODO: �ڴ���������������
}
