
// ͼ��ѧʵ��һView.h : Cͼ��ѧʵ��һView ��Ľӿ�
//

#pragma once


class Cͼ��ѧʵ��һView : public CView
{
protected: // �������л�����
	Cͼ��ѧʵ��һView();
	DECLARE_DYNCREATE(Cͼ��ѧʵ��һView)

// ����
public:
	Cͼ��ѧʵ��һDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cͼ��ѧʵ��һView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ͼ��ѧʵ��һView.cpp �еĵ��԰汾
inline Cͼ��ѧʵ��һDoc* Cͼ��ѧʵ��һView::GetDocument() const
   { return reinterpret_cast<Cͼ��ѧʵ��һDoc*>(m_pDocument); }
#endif

