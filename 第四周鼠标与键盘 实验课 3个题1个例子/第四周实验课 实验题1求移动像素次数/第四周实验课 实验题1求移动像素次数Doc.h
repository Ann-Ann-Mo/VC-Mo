
// ������ʵ��� ʵ����1���ƶ����ش���Doc.h : C������ʵ���ʵ����1���ƶ����ش���Doc ��Ľӿ�
//


#pragma once


class C������ʵ���ʵ����1���ƶ����ش���Doc : public CDocument
{
protected: // �������л�����
	C������ʵ���ʵ����1���ƶ����ش���Doc();
	DECLARE_DYNCREATE(C������ʵ���ʵ����1���ƶ����ش���Doc)

// ����
public:

// ����
public:
	int count;
	CPoint sx, fs;
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
	virtual ~C������ʵ���ʵ����1���ƶ����ش���Doc();
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
