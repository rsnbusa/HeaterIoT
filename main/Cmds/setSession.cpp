using namespace std;
#include "setSession.h"

extern void set_commonCmd(arg* pArg);
extern string getParameter(arg* argument,string cual);
extern void sendResponse(void* comm,int msgTipo,string que,int len,int errorcode,bool withHeaders, bool retain,string uid);


void set_session(void * pArg){
	arg *argument=(arg*)pArg;
	string algo;
	printf("Session\n");
	set_commonCmd(argument);

	algo=getParameter(argument,"password");
	if(algo!="zipo")
	{
		algo="Not authorized";
		sendResponse( argument->pComm,argument->typeMsg, algo,algo.length(),ERRORAUTH,false,false,uidStr);            // send to someones browser when asked
		goto exit;
	}
	algo="Session established";
	exit:

		vTaskDelay(1000 /  portTICK_RATE_MS);

	sendResponse( argument->pComm,argument->typeMsg, algo,algo.length(),0,false,false,uidStr);            // send to someones browser when asked
	algo="";
//	free(pArg);
//	vTaskDelete(NULL);
}

