
// 0414�ڰ��� ���ڶԻ��� ʵ��һDoc.h : CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc ��Ľӿ�
//


#pragma once


class CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc : public CDocument
{
protected: // �������л�����
	CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc();
	DECLARE_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc)

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
	virtual ~CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc();
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
