// test_sixDoc.h : interface of the CTest_sixDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_SIXDOC_H__D1BC789F_BCC5_4A2A_9BF4_BF222C446D26__INCLUDED_)
#define AFX_TEST_SIXDOC_H__D1BC789F_BCC5_4A2A_9BF4_BF222C446D26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_sixDoc : public CDocument
{
protected: // create from serialization only
	CTest_sixDoc();
	DECLARE_DYNCREATE(CTest_sixDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_sixDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_sixDoc();

	CString d1,d2,d3;
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_sixDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_SIXDOC_H__D1BC789F_BCC5_4A2A_9BF4_BF222C446D26__INCLUDED_)
