
// ����������3 �ǿͻ�������ƶ���ϢDoc.h : C����������3�ǿͻ�������ƶ���ϢDoc ��Ľӿ�
//


#pragma once


class C����������3�ǿͻ�������ƶ���ϢDoc : public CDocument
{
protected: // �������л�����
	C����������3�ǿͻ�������ƶ���ϢDoc();
	DECLARE_DYNCREATE(C����������3�ǿͻ�������ƶ���ϢDoc)

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
	virtual ~C����������3�ǿͻ�������ƶ���ϢDoc();
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
