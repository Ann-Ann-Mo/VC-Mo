
// 0414  ʵ��1View.h : CMy0414ʵ��1View ��Ľӿ�
//

#pragma once


class CMy0414ʵ��1View : public CView
{
protected: // �������л�����
	CMy0414ʵ��1View();
	DECLARE_DYNCREATE(CMy0414ʵ��1View)

// ����
public:
	CMy0414ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0414  ʵ��1View.cpp �еĵ��԰汾
inline CMy0414ʵ��1Doc* CMy0414ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy0414ʵ��1Doc*>(m_pDocument); }
#endif

