
// 03.30View.h : CMy0330View ��Ľӿ�
//

#pragma once


class CMy0330View : public CView
{
protected: // �������л�����
	CMy0330View();
	DECLARE_DYNCREATE(CMy0330View)

// ����
public:
	CMy0330Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0330View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 03.30View.cpp �еĵ��԰汾
inline CMy0330Doc* CMy0330View::GetDocument() const
   { return reinterpret_cast<CMy0330Doc*>(m_pDocument); }
#endif

