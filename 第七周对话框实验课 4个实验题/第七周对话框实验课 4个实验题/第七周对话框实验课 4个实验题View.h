
// 第七周对话框实验课 4个实验题View.h : C第七周对话框实验课4个实验题View 类的接口
//

#pragma once


class C第七周对话框实验课4个实验题View : public CView
{
protected: // 仅从序列化创建
	C第七周对话框实验课4个实验题View();
	DECLARE_DYNCREATE(C第七周对话框实验课4个实验题View)

// 特性
public:
	C第七周对话框实验课4个实验题Doc* GetDocument() const;

// 操作
public:
	int set = 1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第七周对话框实验课4个实验题View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第七周对话框实验课 4个实验题View.cpp 中的调试版本
inline C第七周对话框实验课4个实验题Doc* C第七周对话框实验课4个实验题View::GetDocument() const
   { return reinterpret_cast<C第七周对话框实验课4个实验题Doc*>(m_pDocument); }
#endif

