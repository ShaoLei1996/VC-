// test_seven.h : main header file for the TEST_SEVEN application
//

#if !defined(AFX_TEST_SEVEN_H__2AAA01CC_AE20_456A_95C2_9F7D446514C3__INCLUDED_)
#define AFX_TEST_SEVEN_H__2AAA01CC_AE20_456A_95C2_9F7D446514C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_sevenApp:
// See test_seven.cpp for the implementation of this class
//

class CTest_sevenApp : public CWinApp
{
public:
	CTest_sevenApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_sevenApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTest_sevenApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_SEVEN_H__2AAA01CC_AE20_456A_95C2_9F7D446514C3__INCLUDED_)
