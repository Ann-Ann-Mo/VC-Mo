
// 0407View.h : CMy0407View ��Ľӿ�
//

#pragma once


class CMy0407View : public CView
{
protected: // �������л�����
	CMy0407View();
	DECLARE_DYNCREATE(CMy0407View)

// ����
public:
	CMy0407Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0407View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0407View.cpp �еĵ��԰汾
inline CMy0407Doc* CMy0407View::GetDocument() const
   { return reinterpret_cast<CMy0407Doc*>(m_pDocument); }
#endif

