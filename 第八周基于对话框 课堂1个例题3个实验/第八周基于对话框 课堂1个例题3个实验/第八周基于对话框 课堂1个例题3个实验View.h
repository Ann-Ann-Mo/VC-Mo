
// �ڰ��ܻ��ڶԻ��� ����1������3��ʵ��View.h : C�ڰ��ܻ��ڶԻ������1������3��ʵ��View ��Ľӿ�
//

#pragma once


class C�ڰ��ܻ��ڶԻ������1������3��ʵ��View : public CView
{
protected: // �������л�����
	C�ڰ��ܻ��ڶԻ������1������3��ʵ��View();
	DECLARE_DYNCREATE(C�ڰ��ܻ��ڶԻ������1������3��ʵ��View)

// ����
public:
	C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ڰ��ܻ��ڶԻ������1������3��ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // �ڰ��ܻ��ڶԻ��� ����1������3��ʵ��View.cpp �еĵ��԰汾
inline C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc* C�ڰ��ܻ��ڶԻ������1������3��ʵ��View::GetDocument() const
   { return reinterpret_cast<C�ڰ��ܻ��ڶԻ������1������3��ʵ��Doc*>(m_pDocument); }
#endif

