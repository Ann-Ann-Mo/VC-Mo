
// ��һ��MFC����--�ĵ���ͼ�ṹʵ��Doc.cpp : C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��MFC����--�ĵ���ͼ�ṹʵ��.h"
#endif

#include "��һ��MFC����--�ĵ���ͼ�ṹʵ��Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc

IMPLEMENT_DYNCREATE(C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc, CDocument)

BEGIN_MESSAGE_MAP(C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc, CDocument)
END_MESSAGE_MAP()


// C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc ����/����

C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc()
{
	// TODO: �ڴ����һ���Թ������
	name = "Ī�ķ�";
}

C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::~C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc()
{
}

BOOL C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc ���л�

void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::Serialize(CArchive& ar)
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
void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::SetSearchContent(const CString& value)
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

// C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc ���

#ifdef _DEBUG
void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc ����
