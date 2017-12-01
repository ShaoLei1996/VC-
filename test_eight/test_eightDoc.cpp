// test_eightDoc.cpp : implementation of the CTest_eightDoc class
//

#include "stdafx.h"
#include "test_eight.h"

#include "test_eightDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_eightDoc

IMPLEMENT_DYNCREATE(CTest_eightDoc, CDocument)

BEGIN_MESSAGE_MAP(CTest_eightDoc, CDocument)
	//{{AFX_MSG_MAP(CTest_eightDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_eightDoc construction/destruction

CTest_eightDoc::CTest_eightDoc()
{
	// TODO: add one-time construction code here

}

CTest_eightDoc::~CTest_eightDoc()
{
}

BOOL CTest_eightDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTest_eightDoc serialization

void CTest_eightDoc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);

	

    
	CString a;
	CEditView *p=(CEditView*)m_viewList.GetHead();
    p->GetWindowText(a);
    if(ar.IsStoring()){
		if(a.Left(1)>='a'&&a.Left(1)<='z'){
		   a.MakeLower();
		}else if(a.Left(1)>='A'&&a.Left(1)<='Z'){
		   a.MakeUpper();
		}
	
        p->SetWindowText(a);
		p->SerializeRaw(ar);
	}
	else{
	    p->SetWindowText(a);
		p->SerializeRaw(ar);
	}


}

/////////////////////////////////////////////////////////////////////////////
// CTest_eightDoc diagnostics

#ifdef _DEBUG
void CTest_eightDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTest_eightDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_eightDoc commands
