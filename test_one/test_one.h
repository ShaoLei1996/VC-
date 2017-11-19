// test_one.h : main header file for the TEST_ONE application
//

#if !defined(AFX_TEST_ONE_H__1590D985_A741_4C31_95D8_52265BAEF213__INCLUDED_)
#define AFX_TEST_ONE_H__1590D985_A741_4C31_95D8_52265BAEF213__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_oneApp:
// See test_one.cpp for the implementation of this class
//

class CTest_oneApp : public CWinApp
{
public:
	CTest_oneApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_oneApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_oneApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_ONE_H__1590D985_A741_4C31_95D8_52265BAEF213__INCLUDED_)
