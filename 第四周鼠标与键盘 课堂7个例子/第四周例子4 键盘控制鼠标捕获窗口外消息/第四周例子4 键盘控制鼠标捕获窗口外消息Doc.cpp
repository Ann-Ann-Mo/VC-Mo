
// ����������4 ���̿�����겶�񴰿�����ϢDoc.cpp : C����������4���̿�����겶�񴰿�����ϢDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������4 ���̿�����겶�񴰿�����Ϣ.h"
#endif

#include "����������4 ���̿�����겶�񴰿�����ϢDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C����������4���̿�����겶�񴰿�����ϢDoc

IMPLEMENT_DYNCREATE(C����������4���̿�����겶�񴰿�����ϢDoc, CDocument)

BEGIN_MESSAGE_MAP(C����������4���̿�����겶�񴰿�����ϢDoc, CDocument)
END_MESSAGE_MAP()


// C����������4���̿�����겶�񴰿�����ϢDoc ����/����

C����������4���̿�����겶�񴰿�����ϢDoc::C����������4���̿�����겶�񴰿�����ϢDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C����������4���̿�����겶�񴰿�����ϢDoc::~C����������4���̿�����겶�񴰿�����ϢDoc()
{
}

BOOL C����������4���̿�����겶�񴰿�����ϢDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C����������4���̿�����겶�񴰿�����ϢDoc ���л�

void C����������4���̿�����겶�񴰿�����ϢDoc::Serialize(CArchive& ar)
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
void C����������4���̿�����겶�񴰿�����ϢDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C����������4���̿�����겶�񴰿�����ϢDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C����������4���̿�����겶�񴰿�����ϢDoc::SetSearchContent(const CString& value)
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

// C����������4���̿�����겶�񴰿�����ϢDoc ���

#ifdef _DEBUG
void C����������4���̿�����겶�񴰿�����ϢDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C����������4���̿�����겶�񴰿�����ϢDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C����������4���̿�����겶�񴰿�����ϢDoc ����
