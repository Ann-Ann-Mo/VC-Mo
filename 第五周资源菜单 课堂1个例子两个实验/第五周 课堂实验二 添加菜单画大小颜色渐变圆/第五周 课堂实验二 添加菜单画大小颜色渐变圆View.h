
// 第五周 课堂实验二 添加菜单画大小颜色渐变圆View.h : C第五周课堂实验二添加菜单画大小颜色渐变圆View 类的接口
//

#pragma once


class C第五周课堂实验二添加菜单画大小颜色渐变圆View : public CView
{
protected: // 仅从序列化创建
	C第五周课堂实验二添加菜单画大小颜色渐变圆View();
	DECLARE_DYNCREATE(C第五周课堂实验二添加菜单画大小颜色渐变圆View)

// 特性
public:
	C第五周课堂实验二添加菜单画大小颜色渐变圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第五周课堂实验二添加菜单画大小颜色渐变圆View();
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

#ifndef _DEBUG  // 第五周 课堂实验二 添加菜单画大小颜色渐变圆View.cpp 中的调试版本
inline C第五周课堂实验二添加菜单画大小颜色渐变圆Doc* C第五周课堂实验二添加菜单画大小颜色渐变圆View::GetDocument() const
   { return reinterpret_cast<C第五周课堂实验二添加菜单画大小颜色渐变圆Doc*>(m_pDocument); }
#endif

