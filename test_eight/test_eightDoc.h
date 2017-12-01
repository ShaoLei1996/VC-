// test_eightDoc.h : interface of the CTest_eightDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_EIGHTDOC_H__076A53E0_68F2_486B_BE37_CC04CABA4995__INCLUDED_)
#define AFX_TEST_EIGHTDOC_H__076A53E0_68F2_486B_BE37_CC04CABA4995__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_eightDoc : public CDocument
{
protected: // create from serialization only
	CTest_eightDoc();
	DECLARE_DYNCREATE(CTest_eightDoc)

// Attributes
public:

 


// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_eightDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_eightDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_eightDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_EIGHTDOC_H__076A53E0_68F2_486B_BE37_CC04CABA4995__INCLUDED_)
