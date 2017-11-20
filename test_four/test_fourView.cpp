// test_fourView.cpp : implementation of the CTest_fourView class
//

#include "stdafx.h"
#include "test_four.h"

#include "test_fourDoc.h"
#include "test_fourView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView

IMPLEMENT_DYNCREATE(CTest_fourView, CView)

BEGIN_MESSAGE_MAP(CTest_fourView, CView)
	//{{AFX_MSG_MAP(CTest_fourView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView construction/destruction

CTest_fourView::CTest_fourView()
{
	// TODO: add construction code here

}

CTest_fourView::~CTest_fourView()
{
}

BOOL CTest_fourView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView drawing

void CTest_fourView::OnDraw(CDC* pDC)
{
	CTest_fourDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
    GetClientRect(rect);
	CPoint pts[4];
	pts[0].x=rect.left+rect.Width()/2;
	pts[0].y=rect.top;
	pts[1].x=rect.right;
	pts[1].y=rect.top+rect.Height()/2;
	pts[2].x=pts[0].x;
    pts[2].y=rect.bottom;
	pts[3].x=rect.left;
	pts[3].y=pts[1].y;
  
	rgn.CreatePolygonRgn(pts,4,ALTERNATE);
	CBrush br;
	br.CreateSolidBrush(RGB(0,0,0));
	pDC->FrameRgn(&rgn,&br,1,1);

}

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView printing

BOOL CTest_fourView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTest_fourView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTest_fourView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView diagnostics

#ifdef _DEBUG
void CTest_fourView::AssertValid() const
{
	CView::AssertValid();
}

void CTest_fourView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest_fourDoc* CTest_fourView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest_fourDoc)));
	return (CTest_fourDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTest_fourView message handlers

void CTest_fourView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
    spot=point;
	if(rgn.PtInRegion(spot))
		AfxMessageBox("‘⁄¿Ô√Ê");


	CView::OnLButtonDown(nFlags, point);
}
