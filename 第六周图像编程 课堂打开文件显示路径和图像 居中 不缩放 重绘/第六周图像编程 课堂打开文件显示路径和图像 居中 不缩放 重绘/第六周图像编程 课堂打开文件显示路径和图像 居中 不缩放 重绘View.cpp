
// ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�View.cpp : C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�.h"
#endif

#include "������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�Doc.h"
#include "������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View

IMPLEMENT_DYNCREATE(C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View, CView)

BEGIN_MESSAGE_MAP(C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::OnFileOpen)
END_MESSAGE_MAP()

// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ����/����

C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::~C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View()
{
}

BOOL C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ����

void C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::OnDraw(CDC* /*pDC*/)
{
	C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	RedrawWindow();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ���

#ifdef _DEBUG
void C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::AssertValid() const
{
	CView::AssertValid();
}

void C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc* C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc)));
	return (C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ��Ϣ�������


void C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CString filename;
	if(r==IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(0, 0, filename);
		CImage img;
		img.Load(filename);
		//img.Destroy();
		int w, h, sx, sy;
			CRect rect;
			GetClientRect(&rect);//ȡ�ͻ�����Ϣ
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio>img_ratio)
			{
				h = rect.Height();
				w = img_ratio*h;
				sx = (rect.Width() - w) / 2;
				sy = 0;
			}
			else 
			{
				w = rect.Width();
				h = w / img_ratio;
				sx = 0;
				sy = (rect.Height() - h) / 2;
			}
			dc.SetStretchBltMode(HALFTONE);
		img.Draw(dc.m_hDC, sx, sy, w, h);
	
		//img.Draw(dc.m_hDC, 100, 100, img.GetWidth(), img.GetHeight());
	}	
}
