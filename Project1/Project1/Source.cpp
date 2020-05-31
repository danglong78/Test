#include<afxsock.h>

CWinApp app;
using namespace std;
int main()
{
	int nRetCode = 0;
	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL)), NULL, ::GetCommandLine())
	{
		//TODO: change error code to suit your need
		_tprintf(_T("Fatal Error: MFC initialization failed\n"));
		nRetCode = 1;
	}
	else
	{
		//TODO: code application 's behavior here.
		CSocket server;
		unsigned int port = 1234;
		int i;
		AfxSocketInit(NULL);
		server.Create(port);
		server.Listen(5);
		//Nhap so luong client
		printf("\n Nhap so luong Client: ");
		int num_client;
		scanf("%d", &num_client);
		printf("\n Dang lang nghe ket noi tu Client...\n");
	}
}