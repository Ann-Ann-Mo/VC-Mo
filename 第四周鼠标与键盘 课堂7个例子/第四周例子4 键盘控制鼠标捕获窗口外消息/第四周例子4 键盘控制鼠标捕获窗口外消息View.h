
// ����������4 ���̿�����겶�񴰿�����ϢView.h : C����������4���̿�����겶�񴰿�����ϢView ��Ľӿ�
//

#pragma once


class C����������4���̿�����겶�񴰿�����ϢView : public CView
{
protected: // �������л�����
	C����������4���̿�����겶�񴰿�����ϢView();
	DECLARE_DYNCREATE(C����������4���̿�����겶�񴰿�����ϢView)

// ����
public:
	C����������4���̿�����겶�񴰿�����ϢDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C����������4���̿�����겶�񴰿�����ϢView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ����������4 ���̿�����겶�񴰿�����ϢView.cpp �еĵ��԰汾
inline C����������4���̿�����겶�񴰿�����ϢDoc* C����������4���̿�����겶�񴰿�����ϢView::GetDocument() const
   { return reinterpret_cast<C����������4���̿�����겶�񴰿�����ϢDoc*>(m_pDocument); }
#endif

