
// ������MFCͨ���� ����3������View.h : C������MFCͨ�������3������View ��Ľӿ�
//

#pragma once


class C������MFCͨ�������3������View : public CView
{
protected: // �������л�����
	C������MFCͨ�������3������View();
	DECLARE_DYNCREATE(C������MFCͨ�������3������View)

// ����
public:
	C������MFCͨ�������3������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������MFCͨ�������3������View();
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

#ifndef _DEBUG  // ������MFCͨ���� ����3������View.cpp �еĵ��԰汾
inline C������MFCͨ�������3������Doc* C������MFCͨ�������3������View::GetDocument() const
   { return reinterpret_cast<C������MFCͨ�������3������Doc*>(m_pDocument); }
#endif

