
// ������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲView.h : C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView ��Ľӿ�
//

#pragma once


class C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView : public CView
{
protected: // �������л�����
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView();
	DECLARE_DYNCREATE(C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView)

// ����
public:
	C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // ������ ����ʵ��� ��Ӳ˵�����С��ɫ����ԲView.cpp �еĵ��԰汾
inline C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc* C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲView::GetDocument() const
   { return reinterpret_cast<C�����ܿ���ʵ�����Ӳ˵�����С��ɫ����ԲDoc*>(m_pDocument); }
#endif

