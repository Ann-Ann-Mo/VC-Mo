
// �ھ������л����ļ���д������ϰ��12View.h : C�ھ������л����ļ���д������ϰ��12View ��Ľӿ�
//

#pragma once


class C�ھ������л����ļ���д������ϰ��12View : public CView
{
protected: // �������л�����
	C�ھ������л����ļ���д������ϰ��12View();
	DECLARE_DYNCREATE(C�ھ������л����ļ���д������ϰ��12View)

// ����
public:
	C�ھ������л����ļ���д������ϰ��12Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ھ������л����ļ���д������ϰ��12View();
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
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // �ھ������л����ļ���д������ϰ��12View.cpp �еĵ��԰汾
inline C�ھ������л����ļ���д������ϰ��12Doc* C�ھ������л����ļ���д������ϰ��12View::GetDocument() const
   { return reinterpret_cast<C�ھ������л����ļ���д������ϰ��12Doc*>(m_pDocument); }
#endif

