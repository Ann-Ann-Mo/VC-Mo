
// ͼ��ѧʵ��һDoc.cpp : Cͼ��ѧʵ��һDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ͼ��ѧʵ��һ.h"
#endif

#include "ͼ��ѧʵ��һDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cͼ��ѧʵ��һDoc

IMPLEMENT_DYNCREATE(Cͼ��ѧʵ��һDoc, CDocument)

BEGIN_MESSAGE_MAP(Cͼ��ѧʵ��һDoc, CDocument)
END_MESSAGE_MAP()


// Cͼ��ѧʵ��һDoc ����/����

Cͼ��ѧʵ��һDoc::Cͼ��ѧʵ��һDoc()
{
	// TODO: �ڴ����һ���Թ������

}

Cͼ��ѧʵ��һDoc::~Cͼ��ѧʵ��һDoc()
{
}

BOOL Cͼ��ѧʵ��һDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Cͼ��ѧʵ��һDoc ���л�

void Cͼ��ѧʵ��һDoc::Serialize(CArchive& ar)
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
void Cͼ��ѧʵ��һDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void Cͼ��ѧʵ��һDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void Cͼ��ѧʵ��һDoc::SetSearchContent(const CString& value)
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

// Cͼ��ѧʵ��һDoc ���

#ifdef _DEBUG
void Cͼ��ѧʵ��һDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cͼ��ѧʵ��һDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cͼ��ѧʵ��һDoc ����
