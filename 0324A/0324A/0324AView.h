
// 0324AView.h : CMy0324AView 类的接口
//

#pragma once


class CMy0324AView : public CView
{
protected: // 仅从序列化创建
	CMy0324AView();
	DECLARE_DYNCREATE(CMy0324AView)

// 特性
public:
	CMy0324ADoc* GetDocument() const;
	CPoint pos;
	CString s;
// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0324AView();
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
};

#ifndef _DEBUG  // 0324AView.cpp 中的调试版本
inline CMy0324ADoc* CMy0324AView::GetDocument() const
   { return reinterpret_cast<CMy0324ADoc*>(m_pDocument); }
#endif

