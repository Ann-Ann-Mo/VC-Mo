
// 第四周例子2 鼠标移动画直线View.h : C第四周例子2鼠标移动画直线View 类的接口
//

#pragma once


class C第四周例子2鼠标移动画直线View : public CView
{
protected: // 仅从序列化创建
	C第四周例子2鼠标移动画直线View();
	DECLARE_DYNCREATE(C第四周例子2鼠标移动画直线View)

// 特性
public:
	C第四周例子2鼠标移动画直线Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周例子2鼠标移动画直线View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第四周例子2 鼠标移动画直线View.cpp 中的调试版本
inline C第四周例子2鼠标移动画直线Doc* C第四周例子2鼠标移动画直线View::GetDocument() const
   { return reinterpret_cast<C第四周例子2鼠标移动画直线Doc*>(m_pDocument); }
#endif

