// test_sixView.cpp : implementation of the CTest_sixView class
//

#include "stdafx.h"
#include "test_six.h"

#include "test_sixDoc.h"
#include "test_sixView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_sixView

IMPLEMENT_DYNCREATE(CTest_sixView, CFormView)

BEGIN_MESSAGE_MAP(CTest_sixView, CFormView)
	//{{AFX_MSG_MAP(CTest_sixView)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_sixView construction/destruction

CTest_sixView::CTest_sixView()
	: CFormView(CTest_sixView::IDD)
{
	//{{AFX_DATA_INIT(CTest_sixView)
	m_d1 = _T("");
	m_d2 = _T("");
	m_d3 = _T("");
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CTest_sixView::~CTest_sixView()
{
}

void CTest_sixView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTest_sixView)
	DDX_Text(pDX, IDC_EDIT1, m_d1);
	DDX_Text(pDX, IDC_EDIT2, m_d2);
	DDX_Text(pDX, IDC_EDIT3, m_d3);
	//}}AFX_DATA_MAP
}

BOOL CTest_sixView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CTest_sixView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

    CTest_sixDoc *pdoc=GetDocument();
    m_d1=pdoc->d1;
	m_d2=pdoc->d2;
    m_d2=pdoc->d3;
	UpdateData(false);


}

/////////////////////////////////////////////////////////////////////////////
// CTest_sixView printing

BOOL CTest_sixView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTest_sixView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTest_sixView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CTest_sixView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CTest_sixView diagnostics

#ifdef _DEBUG
void CTest_sixView::AssertValid() const
{
	CFormView::AssertValid();
}

void CTest_sixView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CTest_sixDoc* CTest_sixView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest_sixDoc)));
	return (CTest_sixDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_sixView message handlers

void CTest_sixView::OnButton1() 
{
	// TODO: Add your control notification handler code here
	 CTest_sixDoc *pdoc=GetDocument();
	UpdateData(true);
	pdoc->d1=m_d1;
	pdoc->d2=m_d2;
	pdoc->d3=m_d3;
    UpdateData(false);
}

void CTest_sixView::OnButton2() 
{
	// TODO: Add your control notification handler code here
    CTest_sixDoc *pdoc=GetDocument();

	UpdateData(true);
	m_d3=m_d1+m_d2;
	pdoc->d1=m_d1;
	pdoc->d2=m_d2;
	pdoc->d3=m_d3;
    UpdateData(false);
}

void CTest_sixView::OnButton3() 
{
	// TODO: Add your control notification handler code here
	 ExitProcess(0);
}
