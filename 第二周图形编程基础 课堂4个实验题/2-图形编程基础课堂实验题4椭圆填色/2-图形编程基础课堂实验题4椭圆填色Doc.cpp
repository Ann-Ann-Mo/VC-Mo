
// 2-ͼ�α�̻�������ʵ����4��Բ��ɫDoc.cpp : CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2-ͼ�α�̻�������ʵ����4��Բ��ɫ.h"
#endif

#include "2-ͼ�α�̻�������ʵ����4��Բ��ɫDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc

IMPLEMENT_DYNCREATE(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc, CDocument)
END_MESSAGE_MAP()


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ����/����

CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::~CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc()
{
}

BOOL CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ���л�

void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::Serialize(CArchive& ar)
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
void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::SetSearchContent(const CString& value)
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

// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ���

#ifdef _DEBUG
void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ����
