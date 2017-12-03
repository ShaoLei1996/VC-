// test_nineDlg.h : header file
//

#if !defined(AFX_TEST_NINEDLG_H__210D0225_B217_42B4_B527_346981D1B908__INCLUDED_)
#define AFX_TEST_NINEDLG_H__210D0225_B217_42B4_B527_346981D1B908__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTest_nineDlg dialog

class CTest_nineDlg : public CDialog
{
// Construction
public:
	CTest_nineDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_nineDlg)
	enum { IDD = IDD_TEST_NINE_DIALOG };
	CTreeCtrl	m_tree;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_nineDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTest_nineDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_NINEDLG_H__210D0225_B217_42B4_B527_346981D1B908__INCLUDED_)
