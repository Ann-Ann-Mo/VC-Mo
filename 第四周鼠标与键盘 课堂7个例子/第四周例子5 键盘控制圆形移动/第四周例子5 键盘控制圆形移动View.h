
// 第四周例子5 键盘控制圆形移动View.h : C第四周例子5键盘控制圆形移动View 类的接口
//

#pragma once


class C第四周例子5键盘控制圆形移动View : public CView
{
protected: // 仅从序列化创建
	C第四周例子5键盘控制圆形移动View();
	DECLARE_DYNCREATE(C第四周例子5键盘控制圆形移动View)

// 特性
public:
	C第四周例子5键盘控制圆形移动Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周例子5键盘控制圆形移动View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 第四周例子5 键盘控制圆形移动View.cpp 中的调试版本
inline C第四周例子5键盘控制圆形移动Doc* C第四周例子5键盘控制圆形移动View::GetDocument() const
   { return reinterpret_cast<C第四周例子5键盘控制圆形移动Doc*>(m_pDocument); }
#endif

