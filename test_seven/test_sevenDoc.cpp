// test_sevenDoc.cpp : implementation of the CTest_sevenDoc class
//

#include "stdafx.h"
#include "test_seven.h"

#include "test_sevenDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_sevenDoc

IMPLEMENT_DYNCREATE(CTest_sevenDoc, CDocument)

BEGIN_MESSAGE_MAP(CTest_sevenDoc, CDocument)
	//{{AFX_MSG_MAP(CTest_sevenDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_sevenDoc construction/destruction

CTest_sevenDoc::CTest_sevenDoc()
{
	// TODO: add one-time construction code here

}

CTest_sevenDoc::~CTest_sevenDoc()
{
}

BOOL CTest_sevenDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest_sevenDoc serialization

void CTest_sevenDoc::Serialize(CArchive& ar)
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
// CTest_sevenDoc diagnostics

#ifdef _DEBUG
void CTest_sevenDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest_sevenDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_sevenDoc commands
