
// ������ ����ʵ��һ ��Ӳ˵���ԲView.h : C�����ܿ���ʵ��һ��Ӳ˵���ԲView ��Ľӿ�
//

#pragma once


class C�����ܿ���ʵ��һ��Ӳ˵���ԲView : public CView
{
protected: // �������л�����
	C�����ܿ���ʵ��һ��Ӳ˵���ԲView();
	DECLARE_DYNCREATE(C�����ܿ���ʵ��һ��Ӳ˵���ԲView)

// ����
public:
	C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����ܿ���ʵ��һ��Ӳ˵���ԲView();
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

#ifndef _DEBUG  // ������ ����ʵ��һ ��Ӳ˵���ԲView.cpp �еĵ��԰汾
inline C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc* C�����ܿ���ʵ��һ��Ӳ˵���ԲView::GetDocument() const
   { return reinterpret_cast<C�����ܿ���ʵ��һ��Ӳ˵���ԲDoc*>(m_pDocument); }
#endif

