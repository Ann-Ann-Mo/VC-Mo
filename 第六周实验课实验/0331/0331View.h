
// 0331View.h : CMy0331View ��Ľӿ�
//

#pragma once


class CMy0331View : public CView
{
protected: // �������л�����
	CMy0331View();
	DECLARE_DYNCREATE(CMy0331View)

// ����
public:
	CMy0331Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0331View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0331View.cpp �еĵ��԰汾
inline CMy0331Doc* CMy0331View::GetDocument() const
   { return reinterpret_cast<CMy0331Doc*>(m_pDocument); }
#endif

