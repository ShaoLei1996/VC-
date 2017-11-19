// test_twoDlg.h : header file
//

#if !defined(AFX_TEST_TWODLG_H__D8A1575A_096F_47F7_90ED_C069CC2837C2__INCLUDED_)
#define AFX_TEST_TWODLG_H__D8A1575A_096F_47F7_90ED_C069CC2837C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTest_twoDlg dialog

class CTest_twoDlg : public CDialog
{
// Construction
public:
	CTest_twoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_twoDlg)
	enum { IDD = IDD_TEST_TWO_DIALOG };
	CButton	m_finish;
	CButton	m_start;
	int		m_score;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_twoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTest_twoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_TWODLG_H__D8A1575A_096F_47F7_90ED_C069CC2837C2__INCLUDED_)
