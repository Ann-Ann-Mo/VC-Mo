
// ʵ��1����������ļ��Ի���ͻ�����ʾDoc.h : Cʵ��1����������ļ��Ի���ͻ�����ʾDoc ��Ľӿ�
//


#pragma once


class Cʵ��1����������ļ��Ի���ͻ�����ʾDoc : public CDocument
{
protected: // �������л�����
	Cʵ��1����������ļ��Ի���ͻ�����ʾDoc();
	DECLARE_DYNCREATE(Cʵ��1����������ļ��Ի���ͻ�����ʾDoc)

// ����
public:
	CString filename;
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
	virtual ~Cʵ��1����������ļ��Ի���ͻ�����ʾDoc();
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
