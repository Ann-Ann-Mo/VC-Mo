
// 第四周例子7 应用程序窗口的焦点View.h : C第四周例子7应用程序窗口的焦点View 类的接口
//

#pragma once


class C第四周例子7应用程序窗口的焦点View : public CView
{
protected: // 仅从序列化创建
	C第四周例子7应用程序窗口的焦点View();
	DECLARE_DYNCREATE(C第四周例子7应用程序窗口的焦点View)

// 特性
public:
	C第四周例子7应用程序窗口的焦点Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周例子7应用程序窗口的焦点View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 第四周例子7 应用程序窗口的焦点View.cpp 中的调试版本
inline C第四周例子7应用程序窗口的焦点Doc* C第四周例子7应用程序窗口的焦点View::GetDocument() const
   { return reinterpret_cast<C第四周例子7应用程序窗口的焦点Doc*>(m_pDocument); }
#endif

