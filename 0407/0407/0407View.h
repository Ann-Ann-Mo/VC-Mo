
// 0407View.h : CMy0407View 类的接口
//

#pragma once


class CMy0407View : public CView
{
protected: // 仅从序列化创建
	CMy0407View();
	DECLARE_DYNCREATE(CMy0407View)

// 特性
public:
	CMy0407Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0407View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0407View.cpp 中的调试版本
inline CMy0407Doc* CMy0407View::GetDocument() const
   { return reinterpret_cast<CMy0407Doc*>(m_pDocument); }
#endif

