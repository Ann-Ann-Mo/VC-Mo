
// ����������5 ���̿���Բ���ƶ�Doc.h : C����������5���̿���Բ���ƶ�Doc ��Ľӿ�
//


#pragma once


class C����������5���̿���Բ���ƶ�Doc : public CDocument
{
protected: // �������л�����
	C����������5���̿���Բ���ƶ�Doc();
	DECLARE_DYNCREATE(C����������5���̿���Բ���ƶ�Doc)

// ����
public:
	CRect cr;
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
	virtual ~C����������5���̿���Բ���ƶ�Doc();
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
