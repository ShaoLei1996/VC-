// test_two.h : main header file for the TEST_TWO application
//

#if !defined(AFX_TEST_TWO_H__F8B7B042_6928_4659_938D_F8F01A4AF7D0__INCLUDED_)
#define AFX_TEST_TWO_H__F8B7B042_6928_4659_938D_F8F01A4AF7D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_twoApp:
// See test_two.cpp for the implementation of this class
//

class CTest_twoApp : public CWinApp
{
public:
	CTest_twoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_twoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_twoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_TWO_H__F8B7B042_6928_4659_938D_F8F01A4AF7D0__INCLUDED_)
