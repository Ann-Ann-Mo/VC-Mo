
// ������MFCͨ���� ����ʵ��2 ���������ԲView.h : C������MFCͨ�������ʵ��2���������ԲView ��Ľӿ�
//

#pragma once


class C������MFCͨ�������ʵ��2���������ԲView : public CView
{
protected: // �������л�����
	C������MFCͨ�������ʵ��2���������ԲView();
	DECLARE_DYNCREATE(C������MFCͨ�������ʵ��2���������ԲView)

// ����
public:
	C������MFCͨ�������ʵ��2���������ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������MFCͨ�������ʵ��2���������ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������MFCͨ���� ����ʵ��2 ���������ԲView.cpp �еĵ��԰汾
inline C������MFCͨ�������ʵ��2���������ԲDoc* C������MFCͨ�������ʵ��2���������ԲView::GetDocument() const
   { return reinterpret_cast<C������MFCͨ�������ʵ��2���������ԲDoc*>(m_pDocument); }
#endif

