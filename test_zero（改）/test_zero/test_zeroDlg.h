// test_zeroDlg.h : header file
//

#if !defined(AFX_TEST_ZERODLG_H__9CAF609B_FD17_4582_A837_2C38A373C4C2__INCLUDED_)
#define AFX_TEST_ZERODLG_H__9CAF609B_FD17_4582_A837_2C38A373C4C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTest_zeroDlg dialog

class CTest_zeroDlg : public CDialog
{
// Construction
public:
	CTest_zeroDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_zeroDlg)
	enum { IDD = IDD_TEST_ZERO_DIALOG };
	CString	m_str1;
	CString	m_str2;
	CString	m_str3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_zeroDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTest_zeroDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_ZERODLG_H__9CAF609B_FD17_4582_A837_2C38A373C4C2__INCLUDED_)
