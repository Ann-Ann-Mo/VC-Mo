
// 2-ͼ�α�̻�������ʵ����4��Բ��ɫView.h : CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView ��Ľӿ�
//

#pragma once


class CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView : public CView
{
protected: // �������л�����
	CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView();
	DECLARE_DYNCREATE(CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView)

// ����
public:
	CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2-ͼ�α�̻�������ʵ����4��Բ��ɫView.cpp �еĵ��԰汾
inline CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc* CMy2ͼ�α�̻�������ʵ����4��Բ��ɫView::GetDocument() const
   { return reinterpret_cast<CMy2ͼ�α�̻�������ʵ����4��Բ��ɫDoc*>(m_pDocument); }
#endif

