
// 03.30BView.cpp : CMy0330BView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "03.30B.h"
#endif

#include "03.30BDoc.h"
#include "03.30BView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330BView

IMPLEMENT_DYNCREATE(CMy0330BView, CView)

BEGIN_MESSAGE_MAP(CMy0330BView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330BView::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330BView ����/����

CMy0330BView::CMy0330BView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0330BView::~CMy0330BView()
{
}

BOOL CMy0330BView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330BView ����

void CMy0330BView::OnDraw(CDC* /*pDC*/)
{
	CMy0330BDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0330BView ���

#ifdef _DEBUG
void CMy0330BView::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330BView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330BDoc* CMy0330BView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330BDoc)));
	return (CMy0330BDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330BView ��Ϣ�������


void CMy0330BView::OnFileOpen()
{
	int w1, h1;
	CString str;       // �ִ�
	int size;           // �����С
{
CSize txtpot;
CFont fn;            
txtpot = pdc->GetTextExtent(str);                  
w1 = txtpot.cx;
h1 = txtpot.cy;
pdc->SelectObject(pOldfont);
}
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 200, filename);
	}

	// TODO: �ڴ���������������
}
