; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTCPServerDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TCPServer.h"

ClassCount=3
Class1=CTCPServerApp
Class2=CTCPServerDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_TCPSERVER_DIALOG

[CLS:CTCPServerApp]
Type=0
HeaderFile=TCPServer.h
ImplementationFile=TCPServer.cpp
Filter=N

[CLS:CTCPServerDlg]
Type=0
HeaderFile=TCPServerDlg.h
ImplementationFile=TCPServerDlg.cpp
Filter=D
LastObject=CTCPServerDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=TCPServerDlg.h
ImplementationFile=TCPServerDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TCPSERVER_DIALOG]
Type=1
Class=CTCPServerDlg
ControlCount=7
Control1=IDC_SEND,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_ACCEPT_BTN,button,1342242816
Control4=IDC_STATIC,static,1342308352
Control5=IDC_REC_EDIT,edit,1350631620
Control6=IDC_STATIC,static,1342308352
Control7=IDC_SND_EDIT,edit,1350631620

