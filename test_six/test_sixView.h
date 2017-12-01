// test_sixView.h : interface of the CTest_sixView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_SIXVIEW_H__B6295B5C_54A7_4D0D_BEC2_A95B56EB7C05__INCLUDED_)
#define AFX_TEST_SIXVIEW_H__B6295B5C_54A7_4D0D_BEC2_A95B56EB7C05__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_sixView : public CFormView
{
protected: // create from serialization only
	CTest_sixView();
	DECLARE_DYNCREATE(CTest_sixView)

public:
	//{{AFX_DATA(CTest_sixView)
	enum { IDD = IDD_TEST_SIX_FORM };
	CString	m_d1;
	CString	m_d2;
	CString	m_d3;
	//}}AFX_DATA

// Attributes
public:
	CTest_sixDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_sixView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_sixView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_sixView)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_sixView.cpp
inline CTest_sixDoc* CTest_sixView::GetDocument()
   { return (CTest_sixDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_SIXVIEW_H__B6295B5C_54A7_4D0D_BEC2_A95B56EB7C05__INCLUDED_)
