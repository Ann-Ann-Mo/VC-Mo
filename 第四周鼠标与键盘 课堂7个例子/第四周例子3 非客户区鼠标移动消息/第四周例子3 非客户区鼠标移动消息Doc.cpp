
// ����������3 �ǿͻ�������ƶ���ϢDoc.cpp : C����������3�ǿͻ�������ƶ���ϢDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������3 �ǿͻ�������ƶ���Ϣ.h"
#endif

#include "����������3 �ǿͻ�������ƶ���ϢDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C����������3�ǿͻ�������ƶ���ϢDoc

IMPLEMENT_DYNCREATE(C����������3�ǿͻ�������ƶ���ϢDoc, CDocument)

BEGIN_MESSAGE_MAP(C����������3�ǿͻ�������ƶ���ϢDoc, CDocument)
END_MESSAGE_MAP()


// C����������3�ǿͻ�������ƶ���ϢDoc ����/����

C����������3�ǿͻ�������ƶ���ϢDoc::C����������3�ǿͻ�������ƶ���ϢDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C����������3�ǿͻ�������ƶ���ϢDoc::~C����������3�ǿͻ�������ƶ���ϢDoc()
{
}

BOOL C����������3�ǿͻ�������ƶ���ϢDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C����������3�ǿͻ�������ƶ���ϢDoc ���л�

void C����������3�ǿͻ�������ƶ���ϢDoc::Serialize(CArchive& ar)
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
void C����������3�ǿͻ�������ƶ���ϢDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C����������3�ǿͻ�������ƶ���ϢDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C����������3�ǿͻ�������ƶ���ϢDoc::SetSearchContent(const CString& value)
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

// C����������3�ǿͻ�������ƶ���ϢDoc ���

#ifdef _DEBUG
void C����������3�ǿͻ�������ƶ���ϢDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C����������3�ǿͻ�������ƶ���ϢDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C����������3�ǿͻ�������ƶ���ϢDoc ����
