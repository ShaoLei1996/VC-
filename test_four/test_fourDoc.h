// test_fourDoc.h : interface of the CTest_fourDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEST_FOURDOC_H__D30CA2AC_1C60_4617_894A_A792421BE773__INCLUDED_)
#define AFX_TEST_FOURDOC_H__D30CA2AC_1C60_4617_894A_A792421BE773__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTest_fourDoc : public CDocument
{
protected: // create from serialization only
	CTest_fourDoc();
	DECLARE_DYNCREATE(CTest_fourDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_fourDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTest_fourDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTest_fourDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_FOURDOC_H__D30CA2AC_1C60_4617_894A_A792421BE773__INCLUDED_)
