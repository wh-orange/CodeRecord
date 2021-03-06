// CPAGEProc.cpp: 实现文件
//

#include "stdafx.h"
#include "MFC_05_TabCtrl.h"
#include "CPAGEProc.h"
#include "afxdialogex.h"


// CPAGEProc 对话框

IMPLEMENT_DYNAMIC(CPAGEProc, CDialogEx)

CPAGEProc::CPAGEProc(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PAGE_PROCESS, pParent)
{

}

CPAGEProc::~CPAGEProc()
{
}

void CPAGEProc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_LIST1, m_szProc);
	DDX_Control(pDX, IDC_LIST1, m_szProc);
}


BEGIN_MESSAGE_MAP(CPAGEProc, CDialogEx)
END_MESSAGE_MAP()


// CPAGEProc 消息处理程序


BOOL CPAGEProc::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	// 表头添加
	m_szProc.SetExtendedStyle(LVS_EX_FULLROWSELECT);
	m_szProc.InsertColumn(0, _T("网站来源"), LVCFMT_LEFT, 85);
	m_szProc.InsertColumn(1, _T("产品"), LVCFMT_LEFT, 110);
	m_szProc.InsertColumn(2, _T("价格"), LVCFMT_LEFT, 80);

	// 插入值
	int iLine = m_szProc.GetItemCount();             // 列表的里面的条目数量, 横着的行
	m_szProc.InsertItem(iLine, _T("SOHU"));          // 第一行第一列
	m_szProc.SetItemText(iLine, 1, _T("IPHONE"));   // 第一行第二列
	m_szProc.SetItemText(iLine, 2, _T("5000"));     // 第一行第三列

	// 最末行添加数据
	iLine = m_szProc.GetItemCount();
	m_szProc.InsertItem(iLine, _T("TAOBAO"));        // 第二行第一列
	m_szProc.SetItemText(iLine, 1, _T("奔驰"));     // 第二行第二列    
	m_szProc.SetItemText(iLine, 2, _T("500000"));   // 第二行第三列 

	iLine = m_szProc.GetItemCount();
	m_szProc.InsertItem(iLine, _T("GOOGLE"));        // 第三行第一列
	m_szProc.SetItemText(iLine, 1, _T("宝马"));     // 第三行第二列
	m_szProc.SetItemText(iLine, 2, _T("600000"));   // 第三行第三列

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
