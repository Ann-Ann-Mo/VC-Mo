
// ����������6 ���̴�д��ĸ����Բ���ƶ�Doc.cpp : C����������6���̴�д��ĸ����Բ���ƶ�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "����������6 ���̴�д��ĸ����Բ���ƶ�.h"
#endif

#include "����������6 ���̴�д��ĸ����Բ���ƶ�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C����������6���̴�д��ĸ����Բ���ƶ�Doc

IMPLEMENT_DYNCREATE(C����������6���̴�д��ĸ����Բ���ƶ�Doc, CDocument)

BEGIN_MESSAGE_MAP(C����������6���̴�д��ĸ����Բ���ƶ�Doc, CDocument)
END_MESSAGE_MAP()


// C����������6���̴�д��ĸ����Բ���ƶ�Doc ����/����

C����������6���̴�д��ĸ����Բ���ƶ�Doc::C����������6���̴�д��ĸ����Բ���ƶ�Doc()
{
	cr.left = 30; cr.top = 30;
	cr.right = 80; cr.bottom = 80;
	// TODO: �ڴ����һ���Թ������

}

C����������6���̴�д��ĸ����Բ���ƶ�Doc::~C����������6���̴�д��ĸ����Բ���ƶ�Doc()
{
}

BOOL C����������6���̴�д��ĸ����Բ���ƶ�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C����������6���̴�д��ĸ����Բ���ƶ�Doc ���л�

void C����������6���̴�д��ĸ����Բ���ƶ�Doc::Serialize(CArchive& ar)
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
void C����������6���̴�д��ĸ����Բ���ƶ�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C����������6���̴�д��ĸ����Բ���ƶ�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C����������6���̴�д��ĸ����Բ���ƶ�Doc::SetSearchContent(const CString& value)
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

// C����������6���̴�д��ĸ����Բ���ƶ�Doc ���

#ifdef _DEBUG
void C����������6���̴�д��ĸ����Բ���ƶ�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C����������6���̴�д��ĸ����Բ���ƶ�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C����������6���̴�д��ĸ����Բ���ƶ�Doc ����
