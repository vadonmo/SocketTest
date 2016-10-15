// MySocket.cpp: implementation of the CMySocket class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TCPClient.h"
#include "MySocket.h"
#include "TCPClientDlg.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMySocket::CMySocket()
{

}

CMySocket::~CMySocket()
{

}
void CMySocket::SetParent(CDialog *pDlg)
{
	m_pDlg = (CTCPClientDlg *)pDlg;
}
/*
void CMySocket::OnAccept(int nErrorCode)
{
	if (nErrorCode == 0)
	{
		((CTCPClientDlg*)m_pDlg)->OnAccept();
	}
}*/

void CMySocket::OnConnect(int nErrorCode)
{
	if (nErrorCode == 0)
	{
		((CTCPClientDlg*)m_pDlg)->OnConnect();
	}
}

void CMySocket::OnReceive(int nErrorCode)
{
	((CTCPClientDlg*)m_pDlg)->OnReceive();
}

void CMySocket::OnClose(int nErrorCode)
{
	((CTCPClientDlg*)m_pDlg)->OnClose();
}
