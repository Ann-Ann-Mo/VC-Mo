
// ������MFCͨ���� ���õ�3������ �����ݷ����ĵ���View.h : C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View ��Ľӿ�
//

#pragma once


class C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View : public CView
{
protected: // �������л�����
	C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View();
	DECLARE_DYNCREATE(C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View)

// ����
public:
	C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������MFCͨ���� ���õ�3������ �����ݷ����ĵ���View.cpp �еĵ��԰汾
inline C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc* C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���View::GetDocument() const
   { return reinterpret_cast<C������MFCͨ������õ�3�����Ӱ����ݷ����ĵ���Doc*>(m_pDocument); }
#endif

