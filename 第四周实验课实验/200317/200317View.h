
// 200317View.h : CMy200317View ��Ľӿ�
//

#pragma once


class CMy200317View : public CView
{
protected: // �������л�����
	CMy200317View();
	DECLARE_DYNCREATE(CMy200317View)

// ����
public:
	CMy200317Doc* GetDocument() const;

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
	virtual ~CMy200317View();
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
};

#ifndef _DEBUG  // 200317View.cpp �еĵ��԰汾
inline CMy200317Doc* CMy200317View::GetDocument() const
   { return reinterpret_cast<CMy200317Doc*>(m_pDocument); }
#endif

