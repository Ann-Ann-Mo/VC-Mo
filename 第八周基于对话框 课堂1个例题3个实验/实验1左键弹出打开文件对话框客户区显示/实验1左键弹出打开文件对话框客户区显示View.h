
// ʵ��1����������ļ��Ի���ͻ�����ʾView.h : Cʵ��1����������ļ��Ի���ͻ�����ʾView ��Ľӿ�
//

#pragma once


class Cʵ��1����������ļ��Ի���ͻ�����ʾView : public CView
{
protected: // �������л�����
	Cʵ��1����������ļ��Ի���ͻ�����ʾView();
	DECLARE_DYNCREATE(Cʵ��1����������ļ��Ի���ͻ�����ʾView)

// ����
public:
	Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��1����������ļ��Ի���ͻ�����ʾView();
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
	afx_msg void Onoutput();
};

#ifndef _DEBUG  // ʵ��1����������ļ��Ի���ͻ�����ʾView.cpp �еĵ��԰汾
inline Cʵ��1����������ļ��Ի���ͻ�����ʾDoc* Cʵ��1����������ļ��Ի���ͻ�����ʾView::GetDocument() const
   { return reinterpret_cast<Cʵ��1����������ļ��Ի���ͻ�����ʾDoc*>(m_pDocument); }
#endif

