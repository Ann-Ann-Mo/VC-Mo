
// ����������4 ���̿�����겶�񴰿�����ϢDoc.h : C����������4���̿�����겶�񴰿�����ϢDoc ��Ľӿ�
//


#pragma once


class C����������4���̿�����겶�񴰿�����ϢDoc : public CDocument
{
protected: // �������л�����
	C����������4���̿�����겶�񴰿�����ϢDoc();
	DECLARE_DYNCREATE(C����������4���̿�����겶�񴰿�����ϢDoc)

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
	virtual ~C����������4���̿�����겶�񴰿�����ϢDoc();
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
