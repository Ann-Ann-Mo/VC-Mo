
// 第六周图像编程 实验课3个题View.h : C第六周图像编程实验课3个题View 类的接口
//

#pragma once


class C第六周图像编程实验课3个题View : public CView
{
protected: // 仅从序列化创建
	C第六周图像编程实验课3个题View();
	DECLARE_DYNCREATE(C第六周图像编程实验课3个题View)

// 特性
public:
	C第六周图像编程实验课3个题Doc* GetDocument() const;
	CString str[15];
	int a[12] = {35,70,105,140,175,210,245,280,315,350,385,420};
	CString s;
	int i ;
	int i1 ;
	bool set = 0;
	bool flag = 0;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第六周图像编程实验课3个题View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第六周图像编程 实验课3个题View.cpp 中的调试版本
inline C第六周图像编程实验课3个题Doc* C第六周图像编程实验课3个题View::GetDocument() const
   { return reinterpret_cast<C第六周图像编程实验课3个题Doc*>(m_pDocument); }
#endif

