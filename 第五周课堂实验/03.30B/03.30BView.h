
// 03.30BView.h : CMy0330BView ��Ľӿ�
//

#pragma once


class CMy0330BView : public CView
{
protected: // �������л�����
	CMy0330BView();
	DECLARE_DYNCREATE(CMy0330BView)

// ����
public:
	CMy0330BDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0330BView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 03.30BView.cpp �еĵ��԰汾
inline CMy0330BDoc* CMy0330BView::GetDocument() const
   { return reinterpret_cast<CMy0330BDoc*>(m_pDocument); }
#endif

