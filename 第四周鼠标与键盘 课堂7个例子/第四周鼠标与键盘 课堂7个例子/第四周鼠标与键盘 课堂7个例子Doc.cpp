
// 第四周鼠标与键盘 课堂7个例子Doc.cpp : C第四周鼠标与键盘课堂7个例子Doc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第四周鼠标与键盘 课堂7个例子.h"
#endif

#include "第四周鼠标与键盘 课堂7个例子Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C第四周鼠标与键盘课堂7个例子Doc

IMPLEMENT_DYNCREATE(C第四周鼠标与键盘课堂7个例子Doc, CDocument)

BEGIN_MESSAGE_MAP(C第四周鼠标与键盘课堂7个例子Doc, CDocument)
END_MESSAGE_MAP()


// C第四周鼠标与键盘课堂7个例子Doc 构造/析构

C第四周鼠标与键盘课堂7个例子Doc::C第四周鼠标与键盘课堂7个例子Doc()
{
	// TODO: 在此添加一次性构造代码
	cr.left = 30; cr.left = 30;
	cr.right = 360; cr.bottom = 360;
}

C第四周鼠标与键盘课堂7个例子Doc::~C第四周鼠标与键盘课堂7个例子Doc()
{
}

BOOL C第四周鼠标与键盘课堂7个例子Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// C第四周鼠标与键盘课堂7个例子Doc 序列化

void C第四周鼠标与键盘课堂7个例子Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void C第四周鼠标与键盘课堂7个例子Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
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

// 搜索处理程序的支持
void C第四周鼠标与键盘课堂7个例子Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void C第四周鼠标与键盘课堂7个例子Doc::SetSearchContent(const CString& value)
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

// C第四周鼠标与键盘课堂7个例子Doc 诊断

#ifdef _DEBUG
void C第四周鼠标与键盘课堂7个例子Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C第四周鼠标与键盘课堂7个例子Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C第四周鼠标与键盘课堂7个例子Doc 命令
