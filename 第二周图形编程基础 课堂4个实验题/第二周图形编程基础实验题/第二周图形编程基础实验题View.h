
// �ڶ���ͼ�α�̻���ʵ����View.h : C�ڶ���ͼ�α�̻���ʵ����View ��Ľӿ�
//

#pragma once


class C�ڶ���ͼ�α�̻���ʵ����View : public CView
{
protected: // �������л�����
	C�ڶ���ͼ�α�̻���ʵ����View();
	DECLARE_DYNCREATE(C�ڶ���ͼ�α�̻���ʵ����View)

// ����
public:
	C�ڶ���ͼ�α�̻���ʵ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڶ���ͼ�α�̻���ʵ����View();
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

#ifndef _DEBUG  // �ڶ���ͼ�α�̻���ʵ����View.cpp �еĵ��԰汾
inline C�ڶ���ͼ�α�̻���ʵ����Doc* C�ڶ���ͼ�α�̻���ʵ����View::GetDocument() const
   { return reinterpret_cast<C�ڶ���ͼ�α�̻���ʵ����Doc*>(m_pDocument); }
#endif

