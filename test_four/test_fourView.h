// test_fourView.h : interface of the CTest_fourView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_FOURVIEW_H__E0BADCC2_37FF_42B9_90BA_513911404048__INCLUDED_)
#define AFX_TEST_FOURVIEW_H__E0BADCC2_37FF_42B9_90BA_513911404048__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_fourView : public CView
{
protected: // create from serialization only
	CTest_fourView();
	DECLARE_DYNCREATE(CTest_fourView)

// Attributes
public:
	CTest_fourDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_fourView)
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
	virtual ~CTest_fourView();

    CPoint spot;
	CRgn rgn;
	CRect rect;

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_fourView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_fourView.cpp
inline CTest_fourDoc* CTest_fourView::GetDocument()
   { return (CTest_fourDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_FOURVIEW_H__E0BADCC2_37FF_42B9_90BA_513911404048__INCLUDED_)
