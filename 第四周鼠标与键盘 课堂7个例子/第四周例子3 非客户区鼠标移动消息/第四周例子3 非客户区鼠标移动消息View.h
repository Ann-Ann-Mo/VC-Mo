
// 第四周例子3 非客户区鼠标移动消息View.h : C第四周例子3非客户区鼠标移动消息View 类的接口
//

#pragma once


class C第四周例子3非客户区鼠标移动消息View : public CView
{
protected: // 仅从序列化创建
	C第四周例子3非客户区鼠标移动消息View();
	DECLARE_DYNCREATE(C第四周例子3非客户区鼠标移动消息View)

// 特性
public:
	C第四周例子3非客户区鼠标移动消息Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第四周例子3非客户区鼠标移动消息View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 第四周例子3 非客户区鼠标移动消息View.cpp 中的调试版本
inline C第四周例子3非客户区鼠标移动消息Doc* C第四周例子3非客户区鼠标移动消息View::GetDocument() const
   { return reinterpret_cast<C第四周例子3非客户区鼠标移动消息Doc*>(m_pDocument); }
#endif

