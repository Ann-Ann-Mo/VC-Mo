
// 0323View.h : CMy0323View ��Ľӿ�
//

#pragma once


class CMy0323View : public CView
{
protected: // �������л�����
	CMy0323View();
	DECLARE_DYNCREATE(CMy0323View)

// ����
public:
	CMy0323Doc* GetDocument() const;

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
	virtual ~CMy0323View();
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

#ifndef _DEBUG  // 0323View.cpp �еĵ��԰汾
inline CMy0323Doc* CMy0323View::GetDocument() const
   { return reinterpret_cast<CMy0323Doc*>(m_pDocument); }
#endif

