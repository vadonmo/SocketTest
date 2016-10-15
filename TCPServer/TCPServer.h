// TCPServer.h : main header file for the TCPSERVER application
//

#if !defined(AFX_TCPSERVER_H__7569EA8F_C9B7_44A3_B14A_586D11685133__INCLUDED_)
#define AFX_TCPSERVER_H__7569EA8F_C9B7_44A3_B14A_586D11685133__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTCPServerApp:
// See TCPServer.cpp for the implementation of this class
//

class CTCPServerApp : public CWinApp
{
public:
	CTCPServerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTCPServerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTCPServerApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TCPSERVER_H__7569EA8F_C9B7_44A3_B14A_586D11685133__INCLUDED_)
