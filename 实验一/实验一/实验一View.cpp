
// ʵ��һView.cpp : Cʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��һ.h"
#endif
#include <math.h>
#include "ʵ��һDoc.h"
#include "ʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��һView

IMPLEMENT_DYNCREATE(Cʵ��һView, CView)

BEGIN_MESSAGE_MAP(Cʵ��һView, CView)
	ON_COMMAND(ID_32771DAA, &Cʵ��һView::On32771daa)
END_MESSAGE_MAP()

// Cʵ��һView ����/����

Cʵ��һView::Cʵ��һView()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��һView::~Cʵ��һView()
{
}

BOOL Cʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��һView ����

void Cʵ��һView::OnDraw(CDC* /*pDC*/)
{
	Cʵ��һDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��һView ���

#ifdef _DEBUG
void Cʵ��һView::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��һView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��һDoc* Cʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��һDoc)));
	return (Cʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��һView ��Ϣ�������


void Cʵ��һView::On32771daa()
{
	// TODO: �ڴ���������������
	CDC* pDC = GetDC();//����豸ָ��
	int xa = 100, ya = 300, xb = 300, yb = 200, c = RGB(255, 0, 0);//����ֱ�ߵ����˵㣬ֱ����ɫ
	int x, y;
	
	float dx, dy, k;
	dx = (float)(xb - xa), dy = (float)(yb - ya);
	k = dy / dx, y = ya;
	int m = abs(k);
	//float abs();
	if (m<1)
	{
		for (x = xa; x <= xb; x++)
		{
			pDC->SetPixel(x, int(y + 0.5), c);
			y = y + k;
		}
	}
	if (m >= 1)
	{
		for (y = ya; y <= yb; y++)
		{
			pDC->SetPixel(int(x + 0.5), y, c);
			x = x + 1 / k;
		}
	}
	ReleaseDC(pDC);
}
