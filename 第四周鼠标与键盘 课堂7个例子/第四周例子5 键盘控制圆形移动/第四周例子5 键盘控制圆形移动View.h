
// ����������5 ���̿���Բ���ƶ�View.h : C����������5���̿���Բ���ƶ�View ��Ľӿ�
//

#pragma once


class C����������5���̿���Բ���ƶ�View : public CView
{
protected: // �������л�����
	C����������5���̿���Բ���ƶ�View();
	DECLARE_DYNCREATE(C����������5���̿���Բ���ƶ�View)

// ����
public:
	C����������5���̿���Բ���ƶ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C����������5���̿���Բ���ƶ�View();
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
};

#ifndef _DEBUG  // ����������5 ���̿���Բ���ƶ�View.cpp �еĵ��԰汾
inline C����������5���̿���Բ���ƶ�Doc* C����������5���̿���Բ���ƶ�View::GetDocument() const
   { return reinterpret_cast<C����������5���̿���Բ���ƶ�Doc*>(m_pDocument); }
#endif

