// test_fiveDlg.cpp : implementation file
//

#include "stdafx.h"
#include "test_five.h"
#include "test_fiveDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_fiveDlg dialog

CTest_fiveDlg::CTest_fiveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTest_fiveDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTest_fiveDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTest_fiveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTest_fiveDlg)
	DDX_Control(pDX, IDC_LIST2, m_list2);
	DDX_Control(pDX, IDC_LIST1, m_list1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTest_fiveDlg, CDialog)
	//{{AFX_MSG_MAP(CTest_fiveDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTest_fiveDlg message handlers

BOOL CTest_fiveDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	 
	 m_list1.AddString("青海卫星电视台");
	 m_list1.AddString("内蒙卫星电视台");
     m_list1.AddString("辽宁卫星电视台");
     m_list1.AddString("吉林卫星电视台");
	 m_list1.AddString("云南卫星电视台");
     m_list1.AddString("甘肃卫星电视台");
     m_list1.AddString("新疆卫星电视台");
	 m_list1.AddString("海南卫星电视台");
     m_list1.AddString("北京卫星电视台");
     m_list1.AddString("贵州卫星电视台");
	 m_list1.AddString("西藏卫星电视台");
     m_list1.AddString("江苏卫星电视台");
     m_list1.AddString("山东卫星电视台");
	 m_list1.AddString("四川卫星电视台");
     m_list1.AddString("安徽卫星电视台");
     m_list1.AddString("浙江卫星电视台");
	 m_list1.AddString("上海卫星电视台");

     m_list2.SetTextColor(RGB(0,0,0));
	 m_list2.InsertColumn(0,"序号");
	 m_list2.InsertColumn(1,"名称");
	 
	 RECT rect;
	 
	 m_list2.GetWindowRect(&rect);
	 int wid=rect.right-rect.left;
	 
	 m_list2.SetColumnWidth(0,wid/3);
	 m_list2.SetColumnWidth(1,2*wid/3);
	 
	 m_list2.SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT|LVS_EX_HEADERDRAGDROP);



	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTest_fiveDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTest_fiveDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTest_fiveDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTest_fiveDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
    CString no;
	CString str;
	int num=m_list1.GetCurSel();
    m_list1.GetText(num,str);
	m_list1.DeleteString(num);
	int m=m_list2.GetItemCount();
	no.Format("%d",m+1);
	m_list2.InsertItem(m,"aa");
	m_list2.SetItemText(m,0,no);
	m_list2.SetItemText(m,1,str); 
}
