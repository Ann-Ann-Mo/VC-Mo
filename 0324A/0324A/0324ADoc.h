
// 0324ADoc.h : CMy0324ADoc 类的接口
//


#pragma once


class CMy0324ADoc : public CDocument
{
protected: // 仅从序列化创建
	CMy0324ADoc();
	DECLARE_DYNCREATE(CMy0324ADoc)

// 特性
public:
	//1.　添加菜单资源及其命令处理函数，点击菜单后在客户区显示你的名字

	//2.　在客户区显示位图

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy0324ADoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
