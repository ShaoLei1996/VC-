// test_five.h : main header file for the TEST_FIVE application
//

#if !defined(AFX_TEST_FIVE_H__B4A909F6_48CA_47E3_8F66_4190815153DD__INCLUDED_)
#define AFX_TEST_FIVE_H__B4A909F6_48CA_47E3_8F66_4190815153DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_fiveApp:
// See test_five.cpp for the implementation of this class
//

class CTest_fiveApp : public CWinApp
{
public:
	CTest_fiveApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_fiveApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_fiveApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_FIVE_H__B4A909F6_48CA_47E3_8F66_4190815153DD__INCLUDED_)
