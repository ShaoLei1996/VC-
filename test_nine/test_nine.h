// test_nine.h : main header file for the TEST_NINE application
//

#if !defined(AFX_TEST_NINE_H__F31A0FAE_426C_4190_9144_EABCB5CA8DF5__INCLUDED_)
#define AFX_TEST_NINE_H__F31A0FAE_426C_4190_9144_EABCB5CA8DF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_nineApp:
// See test_nine.cpp for the implementation of this class
//

class CTest_nineApp : public CWinApp
{
public:
	CTest_nineApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_nineApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_nineApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_NINE_H__F31A0FAE_426C_4190_9144_EABCB5CA8DF5__INCLUDED_)
