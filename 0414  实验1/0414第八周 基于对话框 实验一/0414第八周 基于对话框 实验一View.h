
// 0414�ڰ��� ���ڶԻ��� ʵ��һView.h : CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView ��Ľӿ�
//

#pragma once


class CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView : public CView
{
protected: // �������л�����
	CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView();
	DECLARE_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView)

// ����
public:
	CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0414�ڰ��� ���ڶԻ��� ʵ��һView.cpp �еĵ��԰汾
inline CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc* CMy0414�ڰ��ܻ��ڶԻ���ʵ��һView::GetDocument() const
   { return reinterpret_cast<CMy0414�ڰ��ܻ��ڶԻ���ʵ��һDoc*>(m_pDocument); }
#endif

