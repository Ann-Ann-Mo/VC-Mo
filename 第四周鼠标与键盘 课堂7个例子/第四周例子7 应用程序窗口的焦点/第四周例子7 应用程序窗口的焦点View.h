
// ����������7 Ӧ�ó��򴰿ڵĽ���View.h : C����������7Ӧ�ó��򴰿ڵĽ���View ��Ľӿ�
//

#pragma once


class C����������7Ӧ�ó��򴰿ڵĽ���View : public CView
{
protected: // �������л�����
	C����������7Ӧ�ó��򴰿ڵĽ���View();
	DECLARE_DYNCREATE(C����������7Ӧ�ó��򴰿ڵĽ���View)

// ����
public:
	C����������7Ӧ�ó��򴰿ڵĽ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C����������7Ӧ�ó��򴰿ڵĽ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ����������7 Ӧ�ó��򴰿ڵĽ���View.cpp �еĵ��԰汾
inline C����������7Ӧ�ó��򴰿ڵĽ���Doc* C����������7Ӧ�ó��򴰿ڵĽ���View::GetDocument() const
   { return reinterpret_cast<C����������7Ӧ�ó��򴰿ڵĽ���Doc*>(m_pDocument); }
#endif

