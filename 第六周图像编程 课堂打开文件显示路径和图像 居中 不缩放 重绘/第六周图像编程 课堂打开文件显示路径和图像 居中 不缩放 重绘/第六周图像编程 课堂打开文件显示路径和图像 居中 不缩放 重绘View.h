
// 第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘View.h : C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View 类的接口
//

#pragma once


class C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View : public CView
{
protected: // 仅从序列化创建
	C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View();
	DECLARE_DYNCREATE(C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View)

// 特性
public:
	C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View();
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

#ifndef _DEBUG  // 第六周图像编程 课堂打开文件显示路径和图像 居中 不缩放 重绘View.cpp 中的调试版本
inline C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc* C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘View::GetDocument() const
   { return reinterpret_cast<C第六周图像编程课堂打开文件显示路径和图像居中不缩放重绘Doc*>(m_pDocument); }
#endif

