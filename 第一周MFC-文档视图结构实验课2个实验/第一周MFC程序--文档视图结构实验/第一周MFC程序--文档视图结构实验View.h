
// ��һ��MFC����--�ĵ���ͼ�ṹʵ��View.h : C��һ��MFC�����ĵ���ͼ�ṹʵ��View ��Ľӿ�
//

#pragma once


class C��һ��MFC�����ĵ���ͼ�ṹʵ��View : public CView
{
protected: // �������л�����
	C��һ��MFC�����ĵ���ͼ�ṹʵ��View();
	DECLARE_DYNCREATE(C��һ��MFC�����ĵ���ͼ�ṹʵ��View)

// ����
public:
	C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��һ��MFC�����ĵ���ͼ�ṹʵ��View();
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

#ifndef _DEBUG  // ��һ��MFC����--�ĵ���ͼ�ṹʵ��View.cpp �еĵ��԰汾
inline C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc* C��һ��MFC�����ĵ���ͼ�ṹʵ��View::GetDocument() const
   { return reinterpret_cast<C��һ��MFC�����ĵ���ͼ�ṹʵ��Doc*>(m_pDocument); }
#endif

