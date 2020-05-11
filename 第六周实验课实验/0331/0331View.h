
// 0331View.h : CMy0331View 类的接口
//

#pragma once


class CMy0331View : public CView
{
protected: // 仅从序列化创建
	CMy0331View();
	DECLARE_DYNCREATE(CMy0331View)

// 特性
public:
	CMy0331Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0331View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0331View.cpp 中的调试版本
inline CMy0331Doc* CMy0331View::GetDocument() const
   { return reinterpret_cast<CMy0331Doc*>(m_pDocument); }
#endif

