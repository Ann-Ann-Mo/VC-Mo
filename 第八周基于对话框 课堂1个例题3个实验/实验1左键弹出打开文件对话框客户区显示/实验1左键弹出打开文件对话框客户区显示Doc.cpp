
// ʵ��1����������ļ��Ի���ͻ�����ʾDoc.cpp : Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��1����������ļ��Ի���ͻ�����ʾ.h"
#endif

#include "ʵ��1����������ļ��Ի���ͻ�����ʾDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cʵ��1����������ļ��Ի���ͻ�����ʾDoc

IMPLEMENT_DYNCREATE(Cʵ��1����������ļ��Ի���ͻ�����ʾDoc, CDocument)

BEGIN_MESSAGE_MAP(Cʵ��1����������ļ��Ի���ͻ�����ʾDoc, CDocument)
END_MESSAGE_MAP()


// Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ����/����

Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::Cʵ��1����������ļ��Ի���ͻ�����ʾDoc()
{
	// TODO: �ڴ����һ���Թ������

}

Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::~Cʵ��1����������ļ��Ի���ͻ�����ʾDoc()
{
}

BOOL Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ���л�

void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::Serialize(CArchive& ar)
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
void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::SetSearchContent(const CString& value)
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

// Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ���

#ifdef _DEBUG
void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Cʵ��1����������ļ��Ի���ͻ�����ʾDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ����
