
// ͼ��ѧʵ��һView.cpp : Cͼ��ѧʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ͼ��ѧʵ��һ.h"
#endif

#include "ͼ��ѧʵ��һDoc.h"
#include "ͼ��ѧʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cͼ��ѧʵ��һView

IMPLEMENT_DYNCREATE(Cͼ��ѧʵ��һView, CView)

BEGIN_MESSAGE_MAP(Cͼ��ѧʵ��һView, CView)
END_MESSAGE_MAP()

// Cͼ��ѧʵ��һView ����/����

Cͼ��ѧʵ��һView::Cͼ��ѧʵ��һView()
{
	// TODO: �ڴ˴���ӹ������

}

Cͼ��ѧʵ��һView::~Cͼ��ѧʵ��һView()
{
}

BOOL Cͼ��ѧʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cͼ��ѧʵ��һView ����

void Cͼ��ѧʵ��һView::OnDraw(CDC* /*pDC*/)
{
	Cͼ��ѧʵ��һDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cͼ��ѧʵ��һView ���

#ifdef _DEBUG
void Cͼ��ѧʵ��һView::AssertValid() const
{
	CView::AssertValid();
}

void Cͼ��ѧʵ��һView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cͼ��ѧʵ��һDoc* Cͼ��ѧʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cͼ��ѧʵ��һDoc)));
	return (Cͼ��ѧʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// Cͼ��ѧʵ��һView ��Ϣ�������

void CMyView::OnDdaline() //DDA�㷨����ֱ��
{
	CDC* pDC = GetDC();//����豸ָ��
	int xa = 100, ya = 300, xb = 300, yb = 200, c = RGB(255, 0, 0);//����ֱ�ߵ����˵㣬ֱ����ɫ
	int x, y;
	float dx, dy, k;
	dx = (float)(xb - xa), dy = (float)(yb - ya);
	k = dy / dx, y = ya;
	if (abs(k)<1)
	{
		for (x = xa; x <= xb; x++)
		{
			pDC->SetPixel(x, int(y + 0.5), c);
			y = y + k;
		}
	}
	if (abs(k) >= 1)
	{
		for (y = ya; y <= yb; y++)
		{
			pDC->SetPixel(int(x + 0.5), y, c);
			x = x + 1 / k;
		}
	}
	ReleaseDC(pDC);
}
