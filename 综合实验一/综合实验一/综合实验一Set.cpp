
// �ۺ�ʵ��һSet.cpp : C�ۺ�ʵ��һSet ���ʵ��
//

#include "stdafx.h"
#include "�ۺ�ʵ��һ.h"
#include "�ۺ�ʵ��һSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��һSet ʵ��

// ���������� 2020��5��11��, 16:12

IMPLEMENT_DYNAMIC(C�ۺ�ʵ��һSet, CRecordset)

C�ۺ�ʵ��һSet::C�ۺ�ʵ��һSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error ��ȫ���⣺�����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C�ۺ�ʵ��һSet::GetDefaultConnect()
{
	return _T("DSN=01;DBQ=C:\\USERS\\CETC416\\Documents\\Database6.accdb;DefaultDir=C:\\USERS\\CETC416\\Documents;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C�ۺ�ʵ��һSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��0]");
}

void C�ۺ�ʵ��һSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);

}
/////////////////////////////////////////////////////////////////////////////
// C�ۺ�ʵ��һSet ���

#ifdef _DEBUG
void C�ۺ�ʵ��һSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void C�ۺ�ʵ��һSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

