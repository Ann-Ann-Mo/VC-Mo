
// 0324BView.h : CMy0324BView 类的接口
//

#pragma once


class CMy0324BView : public CView
{
protected: // 仅从序列化创建
	CMy0324BView();
	DECLARE_DYNCREATE(CMy0324BView)

// 特性
public:
	CMy0324BDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0324BView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0324BView.cpp 中的调试版本
inline CMy0324BDoc* CMy0324BView::GetDocument() const
   { return reinterpret_cast<CMy0324BDoc*>(m_pDocument); }
#endif

