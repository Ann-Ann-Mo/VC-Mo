
// ������MFCͨ���� ����ʵ����������View.h : C������MFCͨ�������ʵ����������View ��Ľӿ�
//

#pragma once


class C������MFCͨ�������ʵ����������View : public CView
{
protected: // �������л�����
	C������MFCͨ�������ʵ����������View();
	DECLARE_DYNCREATE(C������MFCͨ�������ʵ����������View)

// ����
public:
	C������MFCͨ�������ʵ����������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������MFCͨ�������ʵ����������View();
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

#ifndef _DEBUG  // ������MFCͨ���� ����ʵ����������View.cpp �еĵ��԰汾
inline C������MFCͨ�������ʵ����������Doc* C������MFCͨ�������ʵ����������View::GetDocument() const
   { return reinterpret_cast<C������MFCͨ�������ʵ����������Doc*>(m_pDocument); }
#endif

