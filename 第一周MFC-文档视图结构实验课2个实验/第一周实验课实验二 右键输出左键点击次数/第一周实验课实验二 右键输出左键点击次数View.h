
// ��һ��ʵ���ʵ��� �Ҽ��������������View.h : C��һ��ʵ���ʵ����Ҽ��������������View ��Ľӿ�
//

#pragma once


class C��һ��ʵ���ʵ����Ҽ��������������View : public CView
{
protected: // �������л�����
	C��һ��ʵ���ʵ����Ҽ��������������View();
	DECLARE_DYNCREATE(C��һ��ʵ���ʵ����Ҽ��������������View)

// ����
public:
	C��һ��ʵ���ʵ����Ҽ��������������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��һ��ʵ���ʵ����Ҽ��������������View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��һ��ʵ���ʵ��� �Ҽ��������������View.cpp �еĵ��԰汾
inline C��һ��ʵ���ʵ����Ҽ��������������Doc* C��һ��ʵ���ʵ����Ҽ��������������View::GetDocument() const
   { return reinterpret_cast<C��һ��ʵ���ʵ����Ҽ��������������Doc*>(m_pDocument); }
#endif

