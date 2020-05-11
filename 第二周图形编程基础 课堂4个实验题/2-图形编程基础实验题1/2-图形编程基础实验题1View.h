
// 2-图形编程基础实验题1View.h : CMy2图形编程基础实验题1View 类的接口
//

#pragma once


class CMy2图形编程基础实验题1View : public CView
{
protected: // 仅从序列化创建
	CMy2图形编程基础实验题1View();
	DECLARE_DYNCREATE(CMy2图形编程基础实验题1View)

// 特性
public:
	CMy2图形编程基础实验题1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy2图形编程基础实验题1View();
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
};

#ifndef _DEBUG  // 2-图形编程基础实验题1View.cpp 中的调试版本
inline CMy2图形编程基础实验题1Doc* CMy2图形编程基础实验题1View::GetDocument() const
   { return reinterpret_cast<CMy2图形编程基础实验题1Doc*>(m_pDocument); }
#endif

