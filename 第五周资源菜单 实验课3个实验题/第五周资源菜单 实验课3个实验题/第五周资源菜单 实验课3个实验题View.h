
// ��������Դ�˵� ʵ���3��ʵ����View.h : C��������Դ�˵�ʵ���3��ʵ����View ��Ľӿ�
//

#pragma once


class C��������Դ�˵�ʵ���3��ʵ����View : public CView
{
protected: // �������л�����
	C��������Դ�˵�ʵ���3��ʵ����View();
	DECLARE_DYNCREATE(C��������Դ�˵�ʵ���3��ʵ����View)

// ����
public:
	C��������Դ�˵�ʵ���3��ʵ����Doc* GetDocument() const;

// ����
public:
	CBitmap bm;
	int bmw;
	int bmh;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��������Դ�˵�ʵ���3��ʵ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32775();
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void On32773();
	afx_msg void On32774();
};

#ifndef _DEBUG  // ��������Դ�˵� ʵ���3��ʵ����View.cpp �еĵ��԰汾
inline C��������Դ�˵�ʵ���3��ʵ����Doc* C��������Դ�˵�ʵ���3��ʵ����View::GetDocument() const
   { return reinterpret_cast<C��������Դ�˵�ʵ���3��ʵ����Doc*>(m_pDocument); }
#endif

