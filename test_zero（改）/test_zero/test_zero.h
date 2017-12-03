// test_zero.h : main header file for the TEST_ZERO application
//

#if !defined(AFX_TEST_ZERO_H__F8F7A336_5F58_4BCA_B508_FE41AE2EB8F6__INCLUDED_)
#define AFX_TEST_ZERO_H__F8F7A336_5F58_4BCA_B508_FE41AE2EB8F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_zeroApp:
// See test_zero.cpp for the implementation of this class
//

class CTest_zeroApp : public CWinApp
{
public:
	CTest_zeroApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_zeroApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_zeroApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_ZERO_H__F8F7A336_5F58_4BCA_B508_FE41AE2EB8F6__INCLUDED_)
