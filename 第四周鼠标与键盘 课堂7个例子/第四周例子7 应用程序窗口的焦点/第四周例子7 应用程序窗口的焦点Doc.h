
// ����������7 Ӧ�ó��򴰿ڵĽ���Doc.h : C����������7Ӧ�ó��򴰿ڵĽ���Doc ��Ľӿ�
//


#pragma once


class C����������7Ӧ�ó��򴰿ڵĽ���Doc : public CDocument
{
protected: // �������л�����
	C����������7Ӧ�ó��򴰿ڵĽ���Doc();
	DECLARE_DYNCREATE(C����������7Ӧ�ó��򴰿ڵĽ���Doc)

// ����
public:
	CString s;
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
	virtual ~C����������7Ӧ�ó��򴰿ڵĽ���Doc();
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
