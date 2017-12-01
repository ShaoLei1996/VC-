// test_eightView.cpp : implementation of the CTest_eightView class
//

#include "stdafx.h"
#include "test_eight.h"

#include "test_eightDoc.h"
#include "test_eightView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView

IMPLEMENT_DYNCREATE(CTest_eightView, CEditView)

BEGIN_MESSAGE_MAP(CTest_eightView, CEditView)
	//{{AFX_MSG_MAP(CTest_eightView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView construction/destruction

CTest_eightView::CTest_eightView()
{
	// TODO: add construction code here

}

CTest_eightView::~CTest_eightView()
{
}

BOOL CTest_eightView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView drawing

void CTest_eightView::OnDraw(CDC* pDC)
{
	CTest_eightDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView printing

BOOL CTest_eightView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CTest_eightView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CTest_eightView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView diagnostics

#ifdef _DEBUG
void CTest_eightView::AssertValid() const
{
	CEditView::AssertValid();
}

void CTest_eightView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CTest_eightDoc* CTest_eightView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest_eightDoc)));
	return (CTest_eightDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_eightView message handlers
