
// ������ ʵ����3 ��ʱ��С����View.h : C������ʵ����3��ʱ��С����View ��Ľӿ�
//

#pragma once


class C������ʵ����3��ʱ��С����View : public CView
{
protected: // �������л�����
	C������ʵ����3��ʱ��С����View();
	DECLARE_DYNCREATE(C������ʵ����3��ʱ��С����View)

// ����
public:
	C������ʵ����3��ʱ��С����Doc* GetDocument() const;

// ����
public:
	int i;
	int flag =0;
	bool set ;
	CRect cr;
	CRect ccr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ����3��ʱ��С����View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������ ʵ����3 ��ʱ��С����View.cpp �еĵ��԰汾
inline C������ʵ����3��ʱ��С����Doc* C������ʵ����3��ʱ��С����View::GetDocument() const
   { return reinterpret_cast<C������ʵ����3��ʱ��С����Doc*>(m_pDocument); }
#endif

