
// ������ʵ��4 �ؼ�������Ĺ���View.h : C������ʵ��4�ؼ�������Ĺ���View ��Ľӿ�
//

#pragma once


class C������ʵ��4�ؼ�������Ĺ���View : public CView
{
protected: // �������л�����
	C������ʵ��4�ؼ�������Ĺ���View();
	DECLARE_DYNCREATE(C������ʵ��4�ؼ�������Ĺ���View)

// ����
public:
	C������ʵ��4�ؼ�������Ĺ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʵ��4�ؼ�������Ĺ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onoutput();
};

#ifndef _DEBUG  // ������ʵ��4 �ؼ�������Ĺ���View.cpp �еĵ��԰汾
inline C������ʵ��4�ؼ�������Ĺ���Doc* C������ʵ��4�ؼ�������Ĺ���View::GetDocument() const
   { return reinterpret_cast<C������ʵ��4�ؼ�������Ĺ���Doc*>(m_pDocument); }
#endif

