
// 03.30View.cpp : CMy0330View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "03.30.h"
#endif

#include "03.30Doc.h"
#include "03.30View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330View

IMPLEMENT_DYNCREATE(CMy0330View, CView)

BEGIN_MESSAGE_MAP(CMy0330View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330View ����/����

CMy0330View::CMy0330View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0330View::~CMy0330View()
{
}

BOOL CMy0330View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330View ����

void CMy0330View::OnDraw(CDC* /*pDC*/)
{
	CMy0330Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0330View ���

#ifdef _DEBUG
void CMy0330View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330Doc* CMy0330View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330Doc)));
	return (CMy0330Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330View ��Ϣ�������


void CMy0330View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Destroy();
		int w, h, sx, sy;
		img.Load(filename);
		{   
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
		else {
			w = rect.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (rect.Height() - h) / 2;
		}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
		dc.TextOutW(0, 200, filename);
	}

		
	

	// TODO: �ڴ���������������
}
