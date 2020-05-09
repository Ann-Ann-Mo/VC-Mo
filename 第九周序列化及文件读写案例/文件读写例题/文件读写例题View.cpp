
// �ļ���д����View.cpp : C�ļ���д����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ļ���д����.h"
#endif

#include "�ļ���д����Doc.h"
#include "�ļ���д����View.h"

#include <fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ļ���д����View

IMPLEMENT_DYNCREATE(C�ļ���д����View, CView)

BEGIN_MESSAGE_MAP(C�ļ���д����View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C�ļ���д����View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C�ļ���д����View::OnFileSaveAs)
END_MESSAGE_MAP()

// C�ļ���д����View ����/����

C�ļ���д����View::C�ļ���д����View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ļ���д����View::~C�ļ���д����View()
{
}

BOOL C�ļ���д����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ļ���д����View ����

void C�ļ���д����View::OnDraw(CDC* /*pDC*/)
{
	C�ļ���д����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ļ���д����View ���

#ifdef _DEBUG
void C�ļ���д����View::AssertValid() const
{
	CView::AssertValid();
}

void C�ļ���д����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ļ���д����Doc* C�ļ���д����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ļ���д����Doc)));
	return (C�ļ���д����Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ļ���д����View ��Ϣ�������


void C�ļ���д����View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ifstream ifs(filename);
		string s;

		CClientDC dc(this);
		int x = 20, y = 10;
		while(ifs>>s)
		{
			dc.TextOutW(x,y, CString(s.c_str()));
			y += 30;
		}

	}
	// TODO: �ڴ���������������
}


void C�ļ���д����View::OnFileSaveAs()
{
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << "OK" << endl;
		ofs << cfd.GetPathName() << endl;
	}
	// TODO: �ڴ���������������
}
