
// ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�View.h : C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View ��Ľӿ�
//

#pragma once


class C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View : public CView
{
protected: // �������л�����
	C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View();
	DECLARE_DYNCREATE(C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View)

// ����
public:
	C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View();
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

#ifndef _DEBUG  // ������ͼ���� ���ô��ļ���ʾ·����ͼ�� ���� ������ �ػ�View.cpp �еĵ��԰汾
inline C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc* C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�View::GetDocument() const
   { return reinterpret_cast<C������ͼ���̿��ô��ļ���ʾ·����ͼ����в������ػ�Doc*>(m_pDocument); }
#endif

