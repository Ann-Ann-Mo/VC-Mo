
// 0324View.h : CMy0324View ��Ľӿ�
//

#pragma once


class CMy0324View : public CView
{
protected: // �������л�����
	CMy0324View();
	DECLARE_DYNCREATE(CMy0324View)

// ����
public:
	CMy0324Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy0324View();
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
};

#ifndef _DEBUG  // 0324View.cpp �еĵ��԰汾
inline CMy0324Doc* CMy0324View::GetDocument() const
   { return reinterpret_cast<CMy0324Doc*>(m_pDocument); }
#endif

