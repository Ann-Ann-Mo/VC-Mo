
// ʵ��2 �˵������Ի���ʵ�ּӷ�View.h : Cʵ��2�˵������Ի���ʵ�ּӷ�View ��Ľӿ�
//

#pragma once


class Cʵ��2�˵������Ի���ʵ�ּӷ�View : public CView
{
protected: // �������л�����
	Cʵ��2�˵������Ի���ʵ�ּӷ�View();
	DECLARE_DYNCREATE(Cʵ��2�˵������Ի���ʵ�ּӷ�View)

// ����
public:
	Cʵ��2�˵������Ի���ʵ�ּӷ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��2�˵������Ի���ʵ�ּӷ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onoutput();
};

#ifndef _DEBUG  // ʵ��2 �˵������Ի���ʵ�ּӷ�View.cpp �еĵ��԰汾
inline Cʵ��2�˵������Ի���ʵ�ּӷ�Doc* Cʵ��2�˵������Ի���ʵ�ּӷ�View::GetDocument() const
   { return reinterpret_cast<Cʵ��2�˵������Ի���ʵ�ּӷ�Doc*>(m_pDocument); }
#endif

