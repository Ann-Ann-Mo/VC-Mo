
// �ļ���д����View.h : C�ļ���д����View ��Ľӿ�
//

#pragma once


class C�ļ���д����View : public CView
{
protected: // �������л�����
	C�ļ���д����View();
	DECLARE_DYNCREATE(C�ļ���д����View)

// ����
public:
	C�ļ���д����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ļ���д����View();
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
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // �ļ���д����View.cpp �еĵ��԰汾
inline C�ļ���д����Doc* C�ļ���д����View::GetDocument() const
   { return reinterpret_cast<C�ļ���д����Doc*>(m_pDocument); }
#endif

