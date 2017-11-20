// test_fourDoc.cpp : implementation of the CTest_fourDoc class
//

#include "stdafx.h"
#include "test_four.h"

#include "test_fourDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_fourDoc

IMPLEMENT_DYNCREATE(CTest_fourDoc, CDocument)

BEGIN_MESSAGE_MAP(CTest_fourDoc, CDocument)
	//{{AFX_MSG_MAP(CTest_fourDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_fourDoc construction/destruction

CTest_fourDoc::CTest_fourDoc()
{
	// TODO: add one-time construction code here

}

CTest_fourDoc::~CTest_fourDoc()
{
}

BOOL CTest_fourDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest_fourDoc serialization

void CTest_fourDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTest_fourDoc diagnostics

#ifdef _DEBUG
void CTest_fourDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest_fourDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_fourDoc commands
