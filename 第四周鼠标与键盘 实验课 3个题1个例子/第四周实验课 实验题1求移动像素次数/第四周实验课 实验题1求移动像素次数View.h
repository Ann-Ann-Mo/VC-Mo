
// ������ʵ��� ʵ����1���ƶ����ش���View.h : C������ʵ���ʵ����1���ƶ����ش���View ��Ľӿ�
//

#pragma once


class C������ʵ���ʵ����1���ƶ����ش���View : public CView
{
protected: // �������л�����
	C������ʵ���ʵ����1���ƶ����ش���View();
	DECLARE_DYNCREATE(C������ʵ���ʵ����1���ƶ����ش���View)

// ����
public:
	C������ʵ���ʵ����1���ƶ����ش���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ���ʵ����1���ƶ����ش���View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������ʵ��� ʵ����1���ƶ����ش���View.cpp �еĵ��԰汾
inline C������ʵ���ʵ����1���ƶ����ش���Doc* C������ʵ���ʵ����1���ƶ����ش���View::GetDocument() const
   { return reinterpret_cast<C������ʵ���ʵ����1���ƶ����ش���Doc*>(m_pDocument); }
#endif

