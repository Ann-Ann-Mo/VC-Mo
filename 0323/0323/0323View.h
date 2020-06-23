
// 0323View.h : CMy0323View 类的接口
//

#pragma once


class CMy0323View : public CView
{
protected: // 仅从序列化创建
	CMy0323View();
	DECLARE_DYNCREATE(CMy0323View)

// 特性
public:
	CMy0323Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy0323View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // 0323View.cpp 中的调试版本
inline CMy0323Doc* CMy0323View::GetDocument() const
   { return reinterpret_cast<CMy0323Doc*>(m_pDocument); }
#endif

