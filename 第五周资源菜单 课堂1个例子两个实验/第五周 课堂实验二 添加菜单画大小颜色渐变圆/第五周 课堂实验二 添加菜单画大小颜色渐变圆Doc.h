
// ������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲDoc.h : C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc ��Ľӿ�
//


#pragma once


class C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc : public CDocument
{
protected: // �������л�����
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc();
	DECLARE_DYNCREATE(C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc)

// ����
public:
	int N;

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
	virtual ~C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc();
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
