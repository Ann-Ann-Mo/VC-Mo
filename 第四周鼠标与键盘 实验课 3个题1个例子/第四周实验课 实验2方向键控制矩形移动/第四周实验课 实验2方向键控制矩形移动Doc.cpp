
// ������ʵ��� ʵ��2��������ƾ����ƶ�Doc.cpp : C������ʵ���ʵ��2��������ƾ����ƶ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��� ʵ��2��������ƾ����ƶ�.h"
#endif

#include "������ʵ��� ʵ��2��������ƾ����ƶ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C������ʵ���ʵ��2��������ƾ����ƶ�Doc

IMPLEMENT_DYNCREATE(C������ʵ���ʵ��2��������ƾ����ƶ�Doc, CDocument)

BEGIN_MESSAGE_MAP(C������ʵ���ʵ��2��������ƾ����ƶ�Doc, CDocument)
END_MESSAGE_MAP()


// C������ʵ���ʵ��2��������ƾ����ƶ�Doc ����/����

C������ʵ���ʵ��2��������ƾ����ƶ�Doc::C������ʵ���ʵ��2��������ƾ����ƶ�Doc()
{
	// TODO: �ڴ����һ���Թ������
//	ca.SetSize(256);
/*	cr.left = 500;
	cr.top = 500;
	cr.right = 600;
	cr.bottom = 600;*/

}

C������ʵ���ʵ��2��������ƾ����ƶ�Doc::~C������ʵ���ʵ��2��������ƾ����ƶ�Doc()
{
}

BOOL C������ʵ���ʵ��2��������ƾ����ƶ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C������ʵ���ʵ��2��������ƾ����ƶ�Doc ���л�

void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// C������ʵ���ʵ��2��������ƾ����ƶ�Doc ���

#ifdef _DEBUG
void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C������ʵ���ʵ��2��������ƾ����ƶ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C������ʵ���ʵ��2��������ƾ����ƶ�Doc ����
