
// 2-图形编程基础课堂实验题4椭圆填色View.h : CMy2图形编程基础课堂实验题4椭圆填色View 类的接口
//

#pragma once


class CMy2图形编程基础课堂实验题4椭圆填色View : public CView
{
protected: // 仅从序列化创建
	CMy2图形编程基础课堂实验题4椭圆填色View();
	DECLARE_DYNCREATE(CMy2图形编程基础课堂实验题4椭圆填色View)

// 特性
public:
	CMy2图形编程基础课堂实验题4椭圆填色Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy2图形编程基础课堂实验题4椭圆填色View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2-图形编程基础课堂实验题4椭圆填色View.cpp 中的调试版本
inline CMy2图形编程基础课堂实验题4椭圆填色Doc* CMy2图形编程基础课堂实验题4椭圆填色View::GetDocument() const
   { return reinterpret_cast<CMy2图形编程基础课堂实验题4椭圆填色Doc*>(m_pDocument); }
#endif

