
// 0324View.cpp : CMy0324View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0324.h"
#endif

#include "0324Doc.h"
#include "0324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0324View

IMPLEMENT_DYNCREATE(CMy0324View, CView)

BEGIN_MESSAGE_MAP(CMy0324View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CMy0324View::On32771)
END_MESSAGE_MAP()

// CMy0324View ����/����

CMy0324View::CMy0324View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0324View::~CMy0324View()
{
}

BOOL CMy0324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0324View ����

void CMy0324View::OnDraw(CDC* /*pDC*/)
{
	CMy0324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0324View ��ӡ

BOOL CMy0324View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0324View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0324View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0324View ���

#ifdef _DEBUG
void CMy0324View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0324Doc* CMy0324View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0324Doc)));
	return (CMy0324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0324View ��Ϣ�������


void CMy0324View::On32771()
{
	// TODO: �ڴ���������������
	CString s = _T("201812300052Ī�ķ�");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
}
