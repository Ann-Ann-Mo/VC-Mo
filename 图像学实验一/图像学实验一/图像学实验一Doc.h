
// ͼ��ѧʵ��һDoc.h : Cͼ��ѧʵ��һDoc ��Ľӿ�
//


#pragma once


class Cͼ��ѧʵ��һDoc : public CDocument
{
protected: // �������л�����
	Cͼ��ѧʵ��һDoc();
	DECLARE_DYNCREATE(Cͼ��ѧʵ��һDoc)

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
	virtual ~Cͼ��ѧʵ��һDoc();
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
