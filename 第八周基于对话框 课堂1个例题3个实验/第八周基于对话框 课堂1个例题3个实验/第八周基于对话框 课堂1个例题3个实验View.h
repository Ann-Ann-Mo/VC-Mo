
// 第八周基于对话框 课堂1个例题3个实验View.h : C第八周基于对话框课堂1个例题3个实验View 类的接口
//

#pragma once


class C第八周基于对话框课堂1个例题3个实验View : public CView
{
protected: // 仅从序列化创建
	C第八周基于对话框课堂1个例题3个实验View();
	DECLARE_DYNCREATE(C第八周基于对话框课堂1个例题3个实验View)

// 特性
public:
	C第八周基于对话框课堂1个例题3个实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第八周基于对话框课堂1个例题3个实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第八周基于对话框 课堂1个例题3个实验View.cpp 中的调试版本
inline C第八周基于对话框课堂1个例题3个实验Doc* C第八周基于对话框课堂1个例题3个实验View::GetDocument() const
   { return reinterpret_cast<C第八周基于对话框课堂1个例题3个实验Doc*>(m_pDocument); }
#endif

