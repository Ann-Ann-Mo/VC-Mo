
// 03.30BView.h : CMy0330BView 类的接口
//

#pragma once


class CMy0330BView : public CView
{
protected: // 仅从序列化创建
	CMy0330BView();
	DECLARE_DYNCREATE(CMy0330BView)

// 特性
public:
	CMy0330BDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0330BView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 03.30BView.cpp 中的调试版本
inline CMy0330BDoc* CMy0330BView::GetDocument() const
   { return reinterpret_cast<CMy0330BDoc*>(m_pDocument); }
#endif

