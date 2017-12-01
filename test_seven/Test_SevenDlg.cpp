// Test_SevenDlg.cpp : implementation file
//

#include "stdafx.h"
#include "test_seven.h"
#include "Test_SevenDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_SevenDlg dialog


CTest_SevenDlg::CTest_SevenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTest_SevenDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTest_SevenDlg)
	m_str1 = _T("");
	m_str2 = _T("");
	m_str3 = _T("");
	m_str4 = _T("");
	//}}AFX_DATA_INIT
}


void CTest_SevenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTest_SevenDlg)
	DDX_Text(pDX, IDC_EDIT1, m_str1);
	DDX_Text(pDX, IDC_EDIT2, m_str2);
	DDX_Text(pDX, IDC_EDIT3, m_str3);
	DDX_Text(pDX, IDC_EDIT4, m_str4);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTest_SevenDlg, CDialog)
	//{{AFX_MSG_MAP(CTest_SevenDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_SevenDlg message handlers

void CTest_SevenDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(true);
	CDialog::OnOK();
}
