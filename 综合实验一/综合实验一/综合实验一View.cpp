
// 综合实验一View.cpp : C综合实验一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验一.h"
#endif

#include "综合实验一Set.h"
#include "综合实验一Doc.h"
#include "综合实验一View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验一View

IMPLEMENT_DYNCREATE(C综合实验一View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验一View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &C综合实验一View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C综合实验一View 构造/析构

C综合实验一View::C综合实验一View()
	: CRecordView(C综合实验一View::IDD)
	, ID(0)
	, 姓名(_T(""))
	, 学号(_T(""))
	, 年龄(_T(""))
	, 手机号码(_T(""))
	, 相册全路径(_T(""))
{
	m_pSet = NULL;
	// TODO:  在此处添加构造代码

}

C综合实验一View::~C综合实验一View()
{
}

void C综合实验一View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
}

BOOL C综合实验一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验一View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验一Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验一View 诊断

#ifdef _DEBUG
void C综合实验一View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验一View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验一Doc* C综合实验一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验一Doc)));
	return (C综合实验一Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验一View 数据库支持
CRecordset* C综合实验一View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验一View 消息处理程序


void C综合实验一View::OnBnClickedButton1()
{
	CString filename;
	CString s;
	m_pSet->GetFieldValue(short(6), s);//从记录集当前记录，读取第二个字段值，放入s中
	filename = s;
	//CDC *pDC = GetD;
	// TODO:  在此添加控件通知处理程序代码
}
