// test_four.h : main header file for the TEST_FOUR application
//

#if !defined(AFX_TEST_FOUR_H__64B0E279_C461_4965_904B_CABBEA8BE32A__INCLUDED_)
#define AFX_TEST_FOUR_H__64B0E279_C461_4965_904B_CABBEA8BE32A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_fourApp:
// See test_four.cpp for the implementation of this class
//

class CTest_fourApp : public CWinApp
{
public:
	CTest_fourApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_fourApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTest_fourApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_FOUR_H__64B0E279_C461_4965_904B_CABBEA8BE32A__INCLUDED_)
