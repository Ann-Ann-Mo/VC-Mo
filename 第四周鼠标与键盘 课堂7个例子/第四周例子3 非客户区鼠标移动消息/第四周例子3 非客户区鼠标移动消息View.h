
// ����������3 �ǿͻ�������ƶ���ϢView.h : C����������3�ǿͻ�������ƶ���ϢView ��Ľӿ�
//

#pragma once


class C����������3�ǿͻ�������ƶ���ϢView : public CView
{
protected: // �������л�����
	C����������3�ǿͻ�������ƶ���ϢView();
	DECLARE_DYNCREATE(C����������3�ǿͻ�������ƶ���ϢView)

// ����
public:
	C����������3�ǿͻ�������ƶ���ϢDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C����������3�ǿͻ�������ƶ���ϢView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ����������3 �ǿͻ�������ƶ���ϢView.cpp �еĵ��԰汾
inline C����������3�ǿͻ�������ƶ���ϢDoc* C����������3�ǿͻ�������ƶ���ϢView::GetDocument() const
   { return reinterpret_cast<C����������3�ǿͻ�������ƶ���ϢDoc*>(m_pDocument); }
#endif

