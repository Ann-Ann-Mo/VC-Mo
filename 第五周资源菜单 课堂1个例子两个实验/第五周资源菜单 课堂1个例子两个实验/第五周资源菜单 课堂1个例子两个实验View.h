
// ��������Դ�˵� ����1����������ʵ��View.h : C��������Դ�˵�����1����������ʵ��View ��Ľӿ�
//

#pragma once


class C��������Դ�˵�����1����������ʵ��View : public CView
{
protected: // �������л�����
	C��������Դ�˵�����1����������ʵ��View();
	DECLARE_DYNCREATE(C��������Դ�˵�����1����������ʵ��View)

// ����
public:
	C��������Դ�˵�����1����������ʵ��Doc* GetDocument() const;

// ����
public:
	CBitmap bm;
	int bmw;
	int bmh;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��������Դ�˵�����1����������ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshownumber();
	afx_msg void Onshowpicture();
};

#ifndef _DEBUG  // ��������Դ�˵� ����1����������ʵ��View.cpp �еĵ��԰汾
inline C��������Դ�˵�����1����������ʵ��Doc* C��������Դ�˵�����1����������ʵ��View::GetDocument() const
   { return reinterpret_cast<C��������Դ�˵�����1����������ʵ��Doc*>(m_pDocument); }
#endif

