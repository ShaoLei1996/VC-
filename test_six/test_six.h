// test_six.h : main header file for the TEST_SIX application
//

#if !defined(AFX_TEST_SIX_H__4DF70908_15A5_4594_B000_FCE7A58F9733__INCLUDED_)
#define AFX_TEST_SIX_H__4DF70908_15A5_4594_B000_FCE7A58F9733__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_sixApp:
// See test_six.cpp for the implementation of this class
//

class CTest_sixApp : public CWinApp
{
public:
	CTest_sixApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_sixApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTest_sixApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_SIX_H__4DF70908_15A5_4594_B000_FCE7A58F9733__INCLUDED_)
