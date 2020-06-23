// MyD81.cpp : 实现文件
//

#include "stdafx.h"
#include "0414第八周 基于对话框 实验一.h"
#include "MyD81.h"
#include "afxdialogex.h"


// MyD81 对话框

IMPLEMENT_DYNAMIC(MyD81, CDialogEx)

MyD81::MyD81(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyD81::~MyD81()
{
}

void MyD81::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyD81, CDialogEx)
END_MESSAGE_MAP()


// MyD81 消息处理程序
