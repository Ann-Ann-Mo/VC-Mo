
// ������MFCͨ���� ���õ�2������ �ػ�����ʾView.h : C������MFCͨ������õ�2�������ػ�����ʾView ��Ľӿ�
//

#pragma once


class C������MFCͨ������õ�2�������ػ�����ʾView : public CView
{
protected: // �������л�����
	C������MFCͨ������õ�2�������ػ�����ʾView();
	DECLARE_DYNCREATE(C������MFCͨ������õ�2�������ػ�����ʾView)

// ����
public:
	C������MFCͨ������õ�2�������ػ�����ʾDoc* GetDocument() const;

// ����
public:
	CArray <CRect, CRect&> ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������MFCͨ������õ�2�������ػ�����ʾView();
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
};

#ifndef _DEBUG  // ������MFCͨ���� ���õ�2������ �ػ�����ʾView.cpp �еĵ��԰汾
inline C������MFCͨ������õ�2�������ػ�����ʾDoc* C������MFCͨ������õ�2�������ػ�����ʾView::GetDocument() const
   { return reinterpret_cast<C������MFCͨ������õ�2�������ػ�����ʾDoc*>(m_pDocument); }
#endif

