
// 2-ͼ�α�̻�������ʵ����4��Բ��ɫDoc.h : CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc ��Ľӿ�
//


#pragma once


class CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc : public CDocument
{
protected: // �������л�����
	CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc();
	DECLARE_DYNCREATE(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc)

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
	virtual ~CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc();
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
