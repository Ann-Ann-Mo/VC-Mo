
// 0324BView.h : CMy0324BView ��Ľӿ�
//

#pragma once


class CMy0324BView : public CView
{
protected: // �������л�����
	CMy0324BView();
	DECLARE_DYNCREATE(CMy0324BView)

// ����
public:
	CMy0324BDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0324BView();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0324BView.cpp �еĵ��԰汾
inline CMy0324BDoc* CMy0324BView::GetDocument() const
   { return reinterpret_cast<CMy0324BDoc*>(m_pDocument); }
#endif

