
// �����ܶԻ���ʵ��� 4��ʵ����View.h : C�����ܶԻ���ʵ���4��ʵ����View ��Ľӿ�
//

#pragma once


class C�����ܶԻ���ʵ���4��ʵ����View : public CView
{
protected: // �������л�����
	C�����ܶԻ���ʵ���4��ʵ����View();
	DECLARE_DYNCREATE(C�����ܶԻ���ʵ���4��ʵ����View)

// ����
public:
	C�����ܶԻ���ʵ���4��ʵ����Doc* GetDocument() const;

// ����
public:
	int set = 1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����ܶԻ���ʵ���4��ʵ����View();
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

#ifndef _DEBUG  // �����ܶԻ���ʵ��� 4��ʵ����View.cpp �еĵ��԰汾
inline C�����ܶԻ���ʵ���4��ʵ����Doc* C�����ܶԻ���ʵ���4��ʵ����View::GetDocument() const
   { return reinterpret_cast<C�����ܶԻ���ʵ���4��ʵ����Doc*>(m_pDocument); }
#endif

