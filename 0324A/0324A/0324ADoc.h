
// 0324ADoc.h : CMy0324ADoc ��Ľӿ�
//


#pragma once


class CMy0324ADoc : public CDocument
{
protected: // �������л�����
	CMy0324ADoc();
	DECLARE_DYNCREATE(CMy0324ADoc)

// ����
public:
	//1.����Ӳ˵���Դ�����������������˵����ڿͻ�����ʾ�������

	//2.���ڿͻ�����ʾλͼ

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
	virtual ~CMy0324ADoc();
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
