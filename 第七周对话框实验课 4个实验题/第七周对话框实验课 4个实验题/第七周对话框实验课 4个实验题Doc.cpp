
// �����ܶԻ���ʵ��� 4��ʵ����Doc.cpp : C�����ܶԻ���ʵ���4��ʵ����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����ܶԻ���ʵ��� 4��ʵ����.h"
#endif

#include "�����ܶԻ���ʵ��� 4��ʵ����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C�����ܶԻ���ʵ���4��ʵ����Doc

IMPLEMENT_DYNCREATE(C�����ܶԻ���ʵ���4��ʵ����Doc, CDocument)

BEGIN_MESSAGE_MAP(C�����ܶԻ���ʵ���4��ʵ����Doc, CDocument)
END_MESSAGE_MAP()


// C�����ܶԻ���ʵ���4��ʵ����Doc ����/����

C�����ܶԻ���ʵ���4��ʵ����Doc::C�����ܶԻ���ʵ���4��ʵ����Doc()
{
	// TODO: �ڴ����һ���Թ������
	cr.top = 100;
	cr.bottom = 200;
	cr.right = 300;
	cr.left = 200;
}

C�����ܶԻ���ʵ���4��ʵ����Doc::~C�����ܶԻ���ʵ���4��ʵ����Doc()
{
}

BOOL C�����ܶԻ���ʵ���4��ʵ����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// C�����ܶԻ���ʵ���4��ʵ����Doc ���л�

void C�����ܶԻ���ʵ���4��ʵ����Doc::Serialize(CArchive& ar)
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
void C�����ܶԻ���ʵ���4��ʵ����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C�����ܶԻ���ʵ���4��ʵ����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C�����ܶԻ���ʵ���4��ʵ����Doc::SetSearchContent(const CString& value)
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

// C�����ܶԻ���ʵ���4��ʵ����Doc ���

#ifdef _DEBUG
void C�����ܶԻ���ʵ���4��ʵ����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C�����ܶԻ���ʵ���4��ʵ����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C�����ܶԻ���ʵ���4��ʵ����Doc ����
