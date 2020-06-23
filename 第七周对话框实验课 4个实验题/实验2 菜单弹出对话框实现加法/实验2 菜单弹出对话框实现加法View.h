
// 实验2 菜单弹出对话框实现加法View.h : C实验2菜单弹出对话框实现加法View 类的接口
//

#pragma once


class C实验2菜单弹出对话框实现加法View : public CView
{
protected: // 仅从序列化创建
	C实验2菜单弹出对话框实现加法View();
	DECLARE_DYNCREATE(C实验2菜单弹出对话框实现加法View)

// 特性
public:
	C实验2菜单弹出对话框实现加法Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C实验2菜单弹出对话框实现加法View();
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

#ifndef _DEBUG  // 实验2 菜单弹出对话框实现加法View.cpp 中的调试版本
inline C实验2菜单弹出对话框实现加法Doc* C实验2菜单弹出对话框实现加法View::GetDocument() const
   { return reinterpret_cast<C实验2菜单弹出对话框实现加法Doc*>(m_pDocument); }
#endif

