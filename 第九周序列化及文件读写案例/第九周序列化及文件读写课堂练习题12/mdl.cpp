// mdl.cpp : 实现文件
//

#include "stdafx.h"
#include "第九周序列化及文件读写课堂练习题12.h"
#include "mdl.h"
#include "afxdialogex.h"


// mdl 对话框

IMPLEMENT_DYNAMIC(mdl, CDialogEx)

mdl::mdl(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mdl::~mdl()
{
	
}

void mdl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mdl, CDialogEx)
END_MESSAGE_MAP()


// mdl 消息处理程序
