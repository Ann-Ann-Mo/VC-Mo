
// 文件读写例题View.h : C文件读写例题View 类的接口
//

#pragma once


class C文件读写例题View : public CView
{
protected: // 仅从序列化创建
	C文件读写例题View();
	DECLARE_DYNCREATE(C文件读写例题View)

// 特性
public:
	C文件读写例题Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C文件读写例题View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // 文件读写例题View.cpp 中的调试版本
inline C文件读写例题Doc* C文件读写例题View::GetDocument() const
   { return reinterpret_cast<C文件读写例题Doc*>(m_pDocument); }
#endif

