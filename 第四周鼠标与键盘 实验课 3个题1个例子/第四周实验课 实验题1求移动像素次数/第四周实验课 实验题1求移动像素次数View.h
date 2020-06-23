
// 第四周实验课 实验题1求移动像素次数View.h : C第四周实验课实验题1求移动像素次数View 类的接口
//

#pragma once


class C第四周实验课实验题1求移动像素次数View : public CView
{
protected: // 仅从序列化创建
	C第四周实验课实验题1求移动像素次数View();
	DECLARE_DYNCREATE(C第四周实验课实验题1求移动像素次数View)

// 特性
public:
	C第四周实验课实验题1求移动像素次数Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周实验课实验题1求移动像素次数View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第四周实验课 实验题1求移动像素次数View.cpp 中的调试版本
inline C第四周实验课实验题1求移动像素次数Doc* C第四周实验课实验题1求移动像素次数View::GetDocument() const
   { return reinterpret_cast<C第四周实验课实验题1求移动像素次数Doc*>(m_pDocument); }
#endif

