
// 0414�ڰ��� ���ڶԻ��� ʵ���View.h : CMy0414�ڰ��ܻ��ڶԻ���ʵ���View ��Ľӿ�
//

#pragma once


class CMy0414�ڰ��ܻ��ڶԻ���ʵ���View : public CView
{
protected: // �������л�����
	CMy0414�ڰ��ܻ��ڶԻ���ʵ���View();
	DECLARE_DYNCREATE(CMy0414�ڰ��ܻ��ڶԻ���ʵ���View)

// ����
public:
	CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414�ڰ��ܻ��ڶԻ���ʵ���View();
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

#ifndef _DEBUG  // 0414�ڰ��� ���ڶԻ��� ʵ���View.cpp �еĵ��԰汾
inline CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc* CMy0414�ڰ��ܻ��ڶԻ���ʵ���View::GetDocument() const
   { return reinterpret_cast<CMy0414�ڰ��ܻ��ڶԻ���ʵ���Doc*>(m_pDocument); }
#endif

