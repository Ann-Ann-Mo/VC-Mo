
// ������ ����ʵ��һ ��Ӳ˵���ԲDoc.cpp : C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ ����ʵ��һ ��Ӳ˵���Բ.h"
#endif

#include "������ ����ʵ��һ ��Ӳ˵���ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc

IMPLEMENT_DYNCREATE(C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc, CDocument)
END_MESSAGE_MAP()


// C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc ����/����

C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc()
{
	// TODO: �ڴ����һ���Թ������
	set = true;
	N = 400;
	/*for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}

	for (int i = 0; i < N; i++)
	{

	}*/
}

C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::~C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc()
{
}

BOOL C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc ���л�

void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::Serialize(CArchive& ar)
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
void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::SetSearchContent(const CString& value)
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

// C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc ���

#ifdef _DEBUG
void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc ����
