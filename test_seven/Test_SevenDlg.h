#if !defined(AFX_TEST_SEVENDLG_H__8BA1BB50_CA68_43D5_B79A_46E6C6011B16__INCLUDED_)
#define AFX_TEST_SEVENDLG_H__8BA1BB50_CA68_43D5_B79A_46E6C6011B16__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Test_SevenDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTest_SevenDlg dialog

class CTest_SevenDlg : public CDialog
{
// Construction
public:
	CTest_SevenDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_SevenDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_str1;
	CString	m_str2;
	CString	m_str3;
	CString	m_str4;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_SevenDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTest_SevenDlg)
	virtual void OnOK();
	afx_msg void OnMenuInput();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_SEVENDLG_H__8BA1BB50_CA68_43D5_B79A_46E6C6011B16__INCLUDED_)
