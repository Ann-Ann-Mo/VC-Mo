
// Dlg2View.h : CDlg2View ��Ľӿ�
//

#pragma once


class CDlg2View : public CView
{
protected: // �������л�����
	CDlg2View();
	DECLARE_DYNCREATE(CDlg2View)

// ����
public:
	CDlg2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg2View();
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

#ifndef _DEBUG  // Dlg2View.cpp �еĵ��԰汾
inline CDlg2Doc* CDlg2View::GetDocument() const
   { return reinterpret_cast<CDlg2Doc*>(m_pDocument); }
#endif

