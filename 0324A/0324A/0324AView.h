
// 0324AView.h : CMy0324AView ��Ľӿ�
//

#pragma once


class CMy0324AView : public CView
{
protected: // �������л�����
	CMy0324AView();
	DECLARE_DYNCREATE(CMy0324AView)

// ����
public:
	CMy0324ADoc* GetDocument() const;
	CPoint pos;
	CString s;
// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0324AView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // 0324AView.cpp �еĵ��԰汾
inline CMy0324ADoc* CMy0324AView::GetDocument() const
   { return reinterpret_cast<CMy0324ADoc*>(m_pDocument); }
#endif

