
// ������MFCͨ���� ���õ�2������ �ػ�����ʾDoc.cpp : C������MFCͨ������õ�2�������ػ�����ʾDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ���õ�2������ �ػ�����ʾ.h"
#endif

#include "������MFCͨ���� ���õ�2������ �ػ�����ʾDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C������MFCͨ������õ�2�������ػ�����ʾDoc

IMPLEMENT_DYNCREATE(C������MFCͨ������õ�2�������ػ�����ʾDoc, CDocument)

BEGIN_MESSAGE_MAP(C������MFCͨ������õ�2�������ػ�����ʾDoc, CDocument)
END_MESSAGE_MAP()


// C������MFCͨ������õ�2�������ػ�����ʾDoc ����/����

C������MFCͨ������õ�2�������ػ�����ʾDoc::C������MFCͨ������õ�2�������ػ�����ʾDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C������MFCͨ������õ�2�������ػ�����ʾDoc::~C������MFCͨ������õ�2�������ػ�����ʾDoc()
{
}

BOOL C������MFCͨ������õ�2�������ػ�����ʾDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C������MFCͨ������õ�2�������ػ�����ʾDoc ���л�

void C������MFCͨ������õ�2�������ػ�����ʾDoc::Serialize(CArchive& ar)
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
void C������MFCͨ������õ�2�������ػ�����ʾDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C������MFCͨ������õ�2�������ػ�����ʾDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C������MFCͨ������õ�2�������ػ�����ʾDoc::SetSearchContent(const CString& value)
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

// C������MFCͨ������õ�2�������ػ�����ʾDoc ���

#ifdef _DEBUG
void C������MFCͨ������õ�2�������ػ�����ʾDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C������MFCͨ������õ�2�������ػ�����ʾDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C������MFCͨ������õ�2�������ػ�����ʾDoc ����
