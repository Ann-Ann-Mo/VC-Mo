
// 第五周资源菜单 课堂1个例子两个实验View.h : C第五周资源菜单课堂1个例子两个实验View 类的接口
//

#pragma once


class C第五周资源菜单课堂1个例子两个实验View : public CView
{
protected: // 仅从序列化创建
	C第五周资源菜单课堂1个例子两个实验View();
	DECLARE_DYNCREATE(C第五周资源菜单课堂1个例子两个实验View)

// 特性
public:
	C第五周资源菜单课堂1个例子两个实验Doc* GetDocument() const;

// 操作
public:
	CBitmap bm;
	int bmw;
	int bmh;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第五周资源菜单课堂1个例子两个实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshownumber();
	afx_msg void Onshowpicture();
};

#ifndef _DEBUG  // 第五周资源菜单 课堂1个例子两个实验View.cpp 中的调试版本
inline C第五周资源菜单课堂1个例子两个实验Doc* C第五周资源菜单课堂1个例子两个实验View::GetDocument() const
   { return reinterpret_cast<C第五周资源菜单课堂1个例子两个实验Doc*>(m_pDocument); }
#endif

