
// ʵ��1����������ļ��Ի���ͻ�����ʾView.cpp : Cʵ��1����������ļ��Ի���ͻ�����ʾView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1����������ļ��Ի���ͻ�����ʾ.h"
#endif

#include "ʵ��1����������ļ��Ի���ͻ�����ʾDoc.h"
#include "ʵ��1����������ļ��Ի���ͻ�����ʾView.h"
#include "MyDlg3.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��1����������ļ��Ի���ͻ�����ʾView

IMPLEMENT_DYNCREATE(Cʵ��1����������ļ��Ի���ͻ�����ʾView, CView)

BEGIN_MESSAGE_MAP(Cʵ��1����������ļ��Ի���ͻ�����ʾView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_output, &Cʵ��1����������ļ��Ի���ͻ�����ʾView::Onoutput)
END_MESSAGE_MAP()

// Cʵ��1����������ļ��Ի���ͻ�����ʾView ����/����

Cʵ��1����������ļ��Ի���ͻ�����ʾView::Cʵ��1����������ļ��Ի���ͻ�����ʾView()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��1����������ļ��Ի���ͻ�����ʾView::~Cʵ��1����������ļ��Ի���ͻ�����ʾView()
{
}

BOOL Cʵ��1����������ļ��Ի���ͻ�����ʾView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��1����������ļ��Ի���ͻ�����ʾView ����

void Cʵ��1����������ļ��Ի���ͻ�����ʾView::OnDraw(CDC* /*pDC*/)
{
	Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��1����������ļ��Ի���ͻ�����ʾView ���

#ifdef _DEBUG
void Cʵ��1����������ļ��Ի���ͻ�����ʾView::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��1����������ļ��Ի���ͻ�����ʾView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* Cʵ��1����������ļ��Ի���ͻ�����ʾView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��1����������ļ��Ի���ͻ�����ʾDoc)));
	return (Cʵ��1����������ļ��Ի���ͻ�����ʾDoc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��1����������ļ��Ի���ͻ�����ʾView ��Ϣ�������


void Cʵ��1����������ļ��Ի���ͻ�����ʾView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	//CString filename;
	if (r == IDOK)
	{
		pDoc-> filename = cfd.GetPathName();
		dc.TextOutW(200, 300, pDoc->filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void Cʵ��1����������ļ��Ի���ͻ�����ʾView::Onoutput()
{
	Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* pDoc = GetDocument();
	MyDlg3 *pD=new MyDlg3;
	pD-> b= pDoc->filename;
	pD->Create(IDD_DIALOG1);
	ShowWindow(1);	
	UpdateData(FALSE);
	// TODO: �ڴ���������������
}
