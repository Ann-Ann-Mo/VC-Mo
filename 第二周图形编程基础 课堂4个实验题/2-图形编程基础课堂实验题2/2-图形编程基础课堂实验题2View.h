
// 2-图形编程基础课堂实验题2View.h : CMy2图形编程基础课堂实验题2View 类的接口
//

#pragma once


class CMy2图形编程基础课堂实验题2View : public CView
{
protected: // 仅从序列化创建
	CMy2图形编程基础课堂实验题2View();
	DECLARE_DYNCREATE(CMy2图形编程基础课堂实验题2View)

// 特性
public:
	CMy2图形编程基础课堂实验题2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy2图形编程基础课堂实验题2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2-图形编程基础课堂实验题2View.cpp 中的调试版本
inline CMy2图形编程基础课堂实验题2Doc* CMy2图形编程基础课堂实验题2View::GetDocument() const
   { return reinterpret_cast<CMy2图形编程基础课堂实验题2Doc*>(m_pDocument); }
#endif

