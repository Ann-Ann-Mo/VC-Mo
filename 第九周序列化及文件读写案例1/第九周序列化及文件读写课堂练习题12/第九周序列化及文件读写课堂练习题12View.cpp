
// �ھ������л����ļ���д������ϰ��12View.cpp : C�ھ������л����ļ���д������ϰ��12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ھ������л����ļ���д������ϰ��12.h"
#endif
#include <fstream>
#include<string>
#include<iostream>
using namespace std;
#include "�ھ������л����ļ���д������ϰ��12Doc.h"
#include "�ھ������л����ļ���д������ϰ��12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ھ������л����ļ���д������ϰ��12View

IMPLEMENT_DYNCREATE(C�ھ������л����ļ���д������ϰ��12View, CView)

BEGIN_MESSAGE_MAP(C�ھ������л����ļ���д������ϰ��12View, CView)
	ON_COMMAND(ID_32771, &C�ھ������л����ļ���д������ϰ��12View::On32771)
	ON_COMMAND(ID_FILE_OPEN, &C�ھ������л����ļ���д������ϰ��12View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &C�ھ������л����ļ���д������ϰ��12View::OnFileSaveAs)
END_MESSAGE_MAP()

// C�ھ������л����ļ���д������ϰ��12View ����/����

C�ھ������л����ļ���д������ϰ��12View::C�ھ������л����ļ���д������ϰ��12View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ھ������л����ļ���д������ϰ��12View::~C�ھ������л����ļ���д������ϰ��12View()
{
}

BOOL C�ھ������л����ļ���д������ϰ��12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ھ������л����ļ���д������ϰ��12View ����

void C�ھ������л����ļ���д������ϰ��12View::OnDraw(CDC* /*pDC*/)
{
	C�ھ������л����ļ���д������ϰ��12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ھ������л����ļ���д������ϰ��12View ���

#ifdef _DEBUG
void C�ھ������л����ļ���д������ϰ��12View::AssertValid() const
{
	CView::AssertValid();
}

void C�ھ������л����ļ���д������ϰ��12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ھ������л����ļ���д������ϰ��12Doc* C�ھ������л����ļ���д������ϰ��12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ھ������л����ļ���д������ϰ��12Doc)));
	return (C�ھ������л����ļ���д������ϰ��12Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ھ������л����ļ���д������ϰ��12View ��Ϣ�������


void C�ھ������л����ļ���д������ϰ��12View::On32771()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(cfd.GetPathName());
		//CString s = cfd.GetPathName();
		ofs << CT2A(filename.GetString()) << endl;
	}
	// TODO: �ڴ���������������
}


void C�ھ������л����ļ���д������ϰ��12View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
		CClientDC dc(this);
		if (r == IDOK)
		{
			CString filename = cfd.GetPathName();
			ifstream ifs(filename);
			string s;
			int x = 20, y = 10;
			dc.TextOutW(x, y, CString(s.c_str()));
			CImage img;
			img.Destroy();
			img.Load(filename);
			{   int w, h, sx, sy;
			CRect rect;
			GetClientRect(&rect);//ȡ�ͻ�����Ϣ
			float rect_ratio = 1.0*rect.Width() / rect.Height();
			float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
			if (rect_ratio > img_ratio)
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
			img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		
		}
	// TODO: �ڴ���������������
}


void C�ھ������л����ļ���д������ϰ��12View::OnFileSaveAs()
{
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << "OK" << endl;
		CString s = cfd.GetPathName();
		ofs << CT2A(s.GetString()) << endl;
	}
	// TODO: �ڴ���������������
}
