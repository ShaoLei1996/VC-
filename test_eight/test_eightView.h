// test_eightView.h : interface of the CTest_eightView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_EIGHTVIEW_H__5E6396E7_03A8_4995_A295_1A0279993EA7__INCLUDED_)
#define AFX_TEST_EIGHTVIEW_H__5E6396E7_03A8_4995_A295_1A0279993EA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_eightView : public CEditView
{
protected: // create from serialization only
	CTest_eightView();
	DECLARE_DYNCREATE(CTest_eightView)

// Attributes
public:
	CTest_eightDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_eightView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_eightView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_eightView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_eightView.cpp
inline CTest_eightDoc* CTest_eightView::GetDocument()
   { return (CTest_eightDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_EIGHTVIEW_H__5E6396E7_03A8_4995_A295_1A0279993EA7__INCLUDED_)
