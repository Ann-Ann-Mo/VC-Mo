
// ������ʵ��� ʵ��3С�����º󷴵�View.h : C������ʵ���ʵ��3С�����º󷴵�View ��Ľӿ�
//

#pragma once


class C������ʵ���ʵ��3С�����º󷴵�View : public CView
{
protected: // �������л�����
	C������ʵ���ʵ��3С�����º󷴵�View();
	DECLARE_DYNCREATE(C������ʵ���ʵ��3С�����º󷴵�View)

// ����
public:
	C������ʵ���ʵ��3С�����º󷴵�Doc* GetDocument() const;

// ����
public:
	int N;
	CArray <CRect,CRect&> cr;
	bool set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ���ʵ��3С�����º󷴵�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ������ʵ��� ʵ��3С�����º󷴵�View.cpp �еĵ��԰汾
inline C������ʵ���ʵ��3С�����º󷴵�Doc* C������ʵ���ʵ��3С�����º󷴵�View::GetDocument() const
   { return reinterpret_cast<C������ʵ���ʵ��3С�����º󷴵�Doc*>(m_pDocument); }
#endif

