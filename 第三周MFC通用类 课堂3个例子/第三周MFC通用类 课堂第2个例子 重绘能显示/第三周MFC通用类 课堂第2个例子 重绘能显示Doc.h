
// ������MFCͨ���� ���õ�2������ �ػ�����ʾDoc.h : C������MFCͨ������õ�2�������ػ�����ʾDoc ��Ľӿ�
//


#pragma once


class C������MFCͨ������õ�2�������ػ�����ʾDoc : public CDocument
{
protected: // �������л�����
	C������MFCͨ������õ�2�������ػ�����ʾDoc();
	DECLARE_DYNCREATE(C������MFCͨ������õ�2�������ػ�����ʾDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C������MFCͨ������õ�2�������ػ�����ʾDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
