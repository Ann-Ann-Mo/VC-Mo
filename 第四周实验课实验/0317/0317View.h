
// 0317View.h : CMy0317View ��Ľӿ�
//

#pragma once


class CMy0317View : public CView
{
protected: // �������л�����
	CMy0317View();
	DECLARE_DYNCREATE(CMy0317View)

// ����
public:
	CMy0317Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> cr;
	bool set;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0317View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0317View.cpp �еĵ��԰汾
inline CMy0317Doc* CMy0317View::GetDocument() const
   { return reinterpret_cast<CMy0317Doc*>(m_pDocument); }
#endif

