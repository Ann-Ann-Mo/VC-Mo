
// �ۺ�ʵ��һView.cpp : C�ۺ�ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��һ.h"
#endif

#include "�ۺ�ʵ��һSet.h"
#include "�ۺ�ʵ��һDoc.h"
#include "�ۺ�ʵ��һView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��һView

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��һView, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��һView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ��һView::OnBnClickedButton1)
END_MESSAGE_MAP()

// C�ۺ�ʵ��һView ����/����

C�ۺ�ʵ��һView::C�ۺ�ʵ��һView()
	: CRecordView(C�ۺ�ʵ��һView::IDD)
	, ID(0)
	, ����(_T(""))
	, ѧ��(_T(""))
	, ����(_T(""))
	, �ֻ�����(_T(""))
	, ���ȫ·��(_T(""))
{
	m_pSet = NULL;
	// TODO:  �ڴ˴���ӹ������

}

C�ۺ�ʵ��һView::~C�ۺ�ʵ��һView()
{
}

void C�ۺ�ʵ��һView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
}

BOOL C�ۺ�ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��һView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��һSet;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��һView ���

#ifdef _DEBUG
void C�ۺ�ʵ��һView::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��һView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��һDoc* C�ۺ�ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��һDoc)));
	return (C�ۺ�ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��һView ���ݿ�֧��
CRecordset* C�ۺ�ʵ��һView::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��һView ��Ϣ�������


void C�ۺ�ʵ��һView::OnBnClickedButton1()
{
	CString filename;
	CString s;
	m_pSet->GetFieldValue(short(6), s);//�Ӽ�¼����ǰ��¼����ȡ�ڶ����ֶ�ֵ������s��
	filename = s;
	//CDC *pDC = GetD;
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
