
// 0317View.h : CMy0317View 类的接口
//

#pragma once


class CMy0317View : public CView
{
protected: // 仅从序列化创建
	CMy0317View();
	DECLARE_DYNCREATE(CMy0317View)

// 特性
public:
	CMy0317Doc* GetDocument() const;

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
	virtual ~CMy0317View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0317View.cpp 中的调试版本
inline CMy0317Doc* CMy0317View::GetDocument() const
   { return reinterpret_cast<CMy0317Doc*>(m_pDocument); }
#endif

