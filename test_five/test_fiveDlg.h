// test_fiveDlg.h : header file
//

#if !defined(AFX_TEST_FIVEDLG_H__69B9FC4C_EB8A_49F6_A058_02BB99BD8441__INCLUDED_)
#define AFX_TEST_FIVEDLG_H__69B9FC4C_EB8A_49F6_A058_02BB99BD8441__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTest_fiveDlg dialog

class CTest_fiveDlg : public CDialog
{
// Construction
 
public:
	CTest_fiveDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_fiveDlg)
	enum { IDD = IDD_TEST_FIVE_DIALOG };
	CListCtrl	m_list2;
	CListBox	m_list1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_fiveDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTest_fiveDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_FIVEDLG_H__69B9FC4C_EB8A_49F6_A058_02BB99BD8441__INCLUDED_)
