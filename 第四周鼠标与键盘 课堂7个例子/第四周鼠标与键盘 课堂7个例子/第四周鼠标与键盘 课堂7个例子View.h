
// �������������� ����7������View.h : C�������������̿���7������View ��Ľӿ�
//

#pragma once


class C�������������̿���7������View : public CView
{
protected: // �������л�����
	C�������������̿���7������View();
	DECLARE_DYNCREATE(C�������������̿���7������View)

// ����
public:
	C�������������̿���7������Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�������������̿���7������View();
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

#ifndef _DEBUG  // �������������� ����7������View.cpp �еĵ��԰汾
inline C�������������̿���7������Doc* C�������������̿���7������View::GetDocument() const
   { return reinterpret_cast<C�������������̿���7������Doc*>(m_pDocument); }
#endif

