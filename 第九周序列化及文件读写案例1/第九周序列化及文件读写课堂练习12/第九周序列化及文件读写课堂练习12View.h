
// 第九周序列化及文件读写课堂练习12View.h : C第九周序列化及文件读写课堂练习12View 类的接口
//

#pragma once


class C第九周序列化及文件读写课堂练习12View : public CView
{
protected: // 仅从序列化创建
	C第九周序列化及文件读写课堂练习12View();
	DECLARE_DYNCREATE(C第九周序列化及文件读写课堂练习12View)

// 特性
public:
	C第九周序列化及文件读写课堂练习12Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第九周序列化及文件读写课堂练习12View();
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
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // 第九周序列化及文件读写课堂练习12View.cpp 中的调试版本
inline C第九周序列化及文件读写课堂练习12Doc* C第九周序列化及文件读写课堂练习12View::GetDocument() const
   { return reinterpret_cast<C第九周序列化及文件读写课堂练习12Doc*>(m_pDocument); }
#endif

