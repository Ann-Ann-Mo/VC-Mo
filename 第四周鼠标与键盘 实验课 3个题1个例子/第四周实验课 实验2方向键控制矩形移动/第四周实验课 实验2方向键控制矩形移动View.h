
// ������ʵ��� ʵ��2��������ƾ����ƶ�View.h : C������ʵ���ʵ��2��������ƾ����ƶ�View ��Ľӿ�
//

#pragma once


class C������ʵ���ʵ��2��������ƾ����ƶ�View : public CView
{
protected: // �������л�����
	C������ʵ���ʵ��2��������ƾ����ƶ�View();
	DECLARE_DYNCREATE(C������ʵ���ʵ��2��������ƾ����ƶ�View)

// ����
public:
	C������ʵ���ʵ��2��������ƾ����ƶ�Doc* GetDocument() const;

// ����
public:
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ���ʵ��2��������ƾ����ƶ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������ʵ��� ʵ��2��������ƾ����ƶ�View.cpp �еĵ��԰汾
inline C������ʵ���ʵ��2��������ƾ����ƶ�Doc* C������ʵ���ʵ��2��������ƾ����ƶ�View::GetDocument() const
   { return reinterpret_cast<C������ʵ���ʵ��2��������ƾ����ƶ�Doc*>(m_pDocument); }
#endif

