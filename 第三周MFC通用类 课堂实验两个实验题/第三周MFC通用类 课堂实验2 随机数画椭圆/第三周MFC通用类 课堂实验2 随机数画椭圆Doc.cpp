
// ������MFCͨ���� ����ʵ��2 ���������ԲDoc.cpp : C������MFCͨ�������ʵ��2���������ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������MFCͨ���� ����ʵ��2 ���������Բ.h"
#endif

#include "������MFCͨ���� ����ʵ��2 ���������ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C������MFCͨ�������ʵ��2���������ԲDoc

IMPLEMENT_DYNCREATE(C������MFCͨ�������ʵ��2���������ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C������MFCͨ�������ʵ��2���������ԲDoc, CDocument)
END_MESSAGE_MAP()


// C������MFCͨ�������ʵ��2���������ԲDoc ����/����

C������MFCͨ�������ʵ��2���������ԲDoc::C������MFCͨ�������ʵ��2���������ԲDoc()
{
	ca.SetSize(256);
	// TODO: �ڴ����һ���Թ������

}

C������MFCͨ�������ʵ��2���������ԲDoc::~C������MFCͨ�������ʵ��2���������ԲDoc()
{
}

BOOL C������MFCͨ�������ʵ��2���������ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C������MFCͨ�������ʵ��2���������ԲDoc ���л�

void C������MFCͨ�������ʵ��2���������ԲDoc::Serialize(CArchive& ar)
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
void C������MFCͨ�������ʵ��2���������ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C������MFCͨ�������ʵ��2���������ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C������MFCͨ�������ʵ��2���������ԲDoc::SetSearchContent(const CString& value)
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

// C������MFCͨ�������ʵ��2���������ԲDoc ���

#ifdef _DEBUG
void C������MFCͨ�������ʵ��2���������ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C������MFCͨ�������ʵ��2���������ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C������MFCͨ�������ʵ��2���������ԲDoc ����
