
// ����������2 ����ƶ���ֱ��View.h : C����������2����ƶ���ֱ��View ��Ľӿ�
//

#pragma once


class C����������2����ƶ���ֱ��View : public CView
{
protected: // �������л�����
	C����������2����ƶ���ֱ��View();
	DECLARE_DYNCREATE(C����������2����ƶ���ֱ��View)

// ����
public:
	C����������2����ƶ���ֱ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C����������2����ƶ���ֱ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ����������2 ����ƶ���ֱ��View.cpp �еĵ��԰汾
inline C����������2����ƶ���ֱ��Doc* C����������2����ƶ���ֱ��View::GetDocument() const
   { return reinterpret_cast<C����������2����ƶ���ֱ��Doc*>(m_pDocument); }
#endif

