
// ������ͼ���� ʵ���3����View.h : C������ͼ����ʵ���3����View ��Ľӿ�
//

#pragma once


class C������ͼ����ʵ���3����View : public CView
{
protected: // �������л�����
	C������ͼ����ʵ���3����View();
	DECLARE_DYNCREATE(C������ͼ����ʵ���3����View)

// ����
public:
	C������ͼ����ʵ���3����Doc* GetDocument() const;
	CString str[15];
	int a[12] = {35,70,105,140,175,210,245,280,315,350,385,420};
	CString s;
	int i ;
	int i1 ;
	bool set = 0;
	bool flag = 0;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ͼ����ʵ���3����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������ͼ���� ʵ���3����View.cpp �еĵ��԰汾
inline C������ͼ����ʵ���3����Doc* C������ͼ����ʵ���3����View::GetDocument() const
   { return reinterpret_cast<C������ͼ����ʵ���3����Doc*>(m_pDocument); }
#endif

