
// ʵ��һView.h : Cʵ��һView ��Ľӿ�
//

#pragma once


class Cʵ��һView : public CView
{
protected: // �������л�����
	Cʵ��һView();
	DECLARE_DYNCREATE(Cʵ��һView)

// ����
public:
	Cʵ��һDoc* GetDocument() const;

// ����
public:
	typedef struct
	{
		int ymin, ymax, num;
		float xmin, xmax, dx;
	}Edge;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cʵ��һView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771daa();
};

#ifndef _DEBUG  // ʵ��һView.cpp �еĵ��԰汾
inline Cʵ��һDoc* Cʵ��һView::GetDocument() const
   { return reinterpret_cast<Cʵ��һDoc*>(m_pDocument); }
#endif

