
// 第七周实验4 控件与变量的关联View.h : C第七周实验4控件与变量的关联View 类的接口
//

#pragma once


class C第七周实验4控件与变量的关联View : public CView
{
protected: // 仅从序列化创建
	C第七周实验4控件与变量的关联View();
	DECLARE_DYNCREATE(C第七周实验4控件与变量的关联View)

// 特性
public:
	C第七周实验4控件与变量的关联Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第七周实验4控件与变量的关联View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onoutput();
};

#ifndef _DEBUG  // 第七周实验4 控件与变量的关联View.cpp 中的调试版本
inline C第七周实验4控件与变量的关联Doc* C第七周实验4控件与变量的关联View::GetDocument() const
   { return reinterpret_cast<C第七周实验4控件与变量的关联Doc*>(m_pDocument); }
#endif

