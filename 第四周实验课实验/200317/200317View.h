
// 200317View.h : CMy200317View 类的接口
//

#pragma once


class CMy200317View : public CView
{
protected: // 仅从序列化创建
	CMy200317View();
	DECLARE_DYNCREATE(CMy200317View)

// 特性
public:
	CMy200317Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect> cr;
	bool set;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy200317View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 200317View.cpp 中的调试版本
inline CMy200317Doc* CMy200317View::GetDocument() const
   { return reinterpret_cast<CMy200317Doc*>(m_pDocument); }
#endif

