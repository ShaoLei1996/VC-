// test_sixDoc.cpp : implementation of the CTest_sixDoc class
//

#include "stdafx.h"
#include "test_six.h"

#include "test_sixDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_sixDoc

IMPLEMENT_DYNCREATE(CTest_sixDoc, CDocument)

BEGIN_MESSAGE_MAP(CTest_sixDoc, CDocument)
	//{{AFX_MSG_MAP(CTest_sixDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_sixDoc construction/destruction

CTest_sixDoc::CTest_sixDoc()
{
	// TODO: add one-time construction code here

}

CTest_sixDoc::~CTest_sixDoc()
{
}

BOOL CTest_sixDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest_sixDoc serialization

void CTest_sixDoc::Serialize(CArchive& ar)
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
// CTest_sixDoc diagnostics

#ifdef _DEBUG
void CTest_sixDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest_sixDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_sixDoc commands
