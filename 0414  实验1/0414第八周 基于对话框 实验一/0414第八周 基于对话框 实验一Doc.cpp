
// 0414�ڰ��� ���ڶԻ��� ʵ��һDoc.cpp : CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414�ڰ��� ���ڶԻ��� ʵ��һ.h"
#endif

#include "0414�ڰ��� ���ڶԻ��� ʵ��һDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc

IMPLEMENT_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc, CDocument)
END_MESSAGE_MAP()


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ����/����

CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::~CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc()
{
}

BOOL CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ���л�

void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::Serialize(CArchive& ar)
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
void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::SetSearchContent(const CString& value)
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

// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ���

#ifdef _DEBUG
void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ����
