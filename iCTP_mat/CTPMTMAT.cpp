#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <io.h>
#include "mex.h"
using namespace std;

#define FUNCTION_ASKCLOSE 						  1
#define FUNCTION_ASKCLOSETODAY 					  2
#define FUNCTION_ASKOPEN 						  3
#define FUNCTION_BIDCLOSE 						  4
#define FUNCTION_BIDCLOSETODAY 					  5
#define FUNCTION_BIDOPEN 						  6
#define FUNCTION_CANCELORDER 					  7
#define FUNCTION_CREATE 						  8
#define FUNCTION_GENERATEREQID 					  9
#define FUNCTION_GETACCOUNTDATA 				  10
#define FUNCTION_GETBROKERID 					  11
#define FUNCTION_GETCOMMISSIONRATE 				  12
#define FUNCTION_GETDEPTHMARKETDATA 			  13
#define FUNCTION_GETINSTRUMENTSDATA 			  14
#define FUNCTION_GETINVESTORID 				      15
#define FUNCTION_GETPOSITIONDATA 				  16
#define FUNCTION_GETMARGINRATE 					  17
#define FUNCTION_GETPOSITIONDETAILDATA 			  18
#define FUNCTION_GETORDERINFO 					  19
#define FUNCTION_GETORDERINFOS 					  20
#define FUNCTION_GETPASSWORD 					  21
#define FUNCTION_GETSESSIONID 					  22
#define FUNCTION_GETTRADERECORD 				  23
#define FUNCTION_GETTRADERECORDS 				  24
#define FUNCTION_GETTRADINGDATE 				  25
#define FUNCTION_GETTRADINGTIME 				  26
#define FUNCTION_ISCLEARANCED 					  27
#define FUNCTION_ISCLEARANCETIME 				  28
#define FUNCTION_ISMDLOGINED 					  29
#define FUNCTION_ISTDLOGINED 					  30
#define FUNCTION_ISTRADINGTIME 					  31
#define FUNCTION_ISTRADINGTIMEEXACT 		  	  32
#define FUNCTION_REQCOMMISSIONRATE 			  	  34
#define FUNCTION_REQQRYSETTLEMENTINFOCONFIRM  	  38
#define FUNCTION_REQMARGINRATE 				  	  39
#define FUNCTION_START 						  	  42
#define FUNCTION_SUBMARKETDATAS 			  	  43
#define FUNCTION_UNSUBMARKETDATAS 			  	  44
#define FUNCTION_ISDATAOK						  45
#define FUNCTION_REQQRYSETTLEMENTINFO			  46		

typedef int(*funcAskClose)(int, int, char*, double, int, char, char*);
typedef int(*funcAskCloseToday)(int, int, char*, double, int, char, char*);
typedef int(*funcAskOpen)(int, int, char*, double, int, char, char*);
typedef int(*funcBidClose)(int, int, char*, double, int, char, char*);
typedef int(*funcBidCloseToday)(int, int, char*, double, int, char, char*);
typedef int(*funcBidOpen)(int, int, char*, double, int, char, char*);
typedef int(*funcCancelOrder)(int, int, char*, char*, char*);
typedef int(*funcCreate)(void);
typedef int(*funcGenerateReqID)(int);
typedef int(*funcGetAccountData)(int, char*);
typedef int(*funcGetBrokerID)(int, char*);
typedef int(*funcGetCommissionRate)(int, char *, char*);
typedef int(*funcGetDepthMarketData)(int, char*);
typedef int(*funcGetInstrumentsData)(int, char*);
typedef int(*funcGetInvestorID)(int, char*);
typedef int(*funcGetMarginRate)(int, char *, char*);
typedef int(*funcGetPositionData)(int, char*);
typedef int(*funcGetPositionDetailData)(int, char*);
typedef int(*funcGetOrderInfo)(int, char*);
typedef int(*funcGetOrderInfos)(int, char*);
typedef int(*funcGetPassword)(int, char*);
typedef int(*funcGetSessionID)(int);
typedef int(*funcGetTradeRecord)(int, char*);
typedef int(*funcGetTradeRecords)(int, char*);
typedef int(*funcGetTradingDate)(int, char*);
typedef int(*funcGetTradingTime)(int , char *);
typedef int(*funcIsClearanced)(int);
typedef int(*funcIsClearanceTime)(int);
typedef int(*funcIsDataOk)(int);
typedef int(*funcIsMdLogined)(int);
typedef int(*funcIsTdLogined)(int);
typedef int(*funcIsTradingTime)(int);
typedef int(*funcIsTradingTimeExact)(int, char*);
typedef int(*funcReqCommissionRate)(int, char*, int);
typedef int(*funcReqQrySettlementInfoConfirm)(int, int);
typedef int(*funcReqQrySettlementInfo)(int, int, char*);
typedef int(*funcReqMarginRate)(int, char*, int);
typedef int(*funcStart)(int, int, char*, char*, char*, char*, char*);
typedef int(*funcSubMarketDatas)(int, int, char*);
typedef int(*funcUnSubMarketDatas)(int, int, char*);

HINSTANCE hdll = 0;
funcAskClose m_funcAskClose;
funcAskCloseToday m_funcAskCloseToday;
funcAskOpen m_funcAskOpen;
funcBidClose m_funcBidClose;
funcBidCloseToday m_funcBidCloseToday;
funcBidOpen m_funcBidOpen;
funcCancelOrder m_funcCancelOrder;
funcCreate m_funcCreate;
funcGenerateReqID m_funcGenerateReqID;
funcGetAccountData m_funcGetAccountData;
funcGetBrokerID m_funcGetBrokerID;
funcGetCommissionRate m_funcGetCommissionRate;
funcGetDepthMarketData m_funcGetDepthMarketData;
funcGetInstrumentsData m_funcGetInstrumentsData;
funcGetInvestorID m_funcGetInvestorID;
funcGetMarginRate m_funcGetMarginRate;
funcGetPositionData m_funcGetPositionData;
funcGetPositionDetailData m_funcGetPositionDetailData;
funcGetOrderInfo m_funcGetOrderInfo;
funcGetOrderInfos m_funcGetOrderInfos;
funcGetPassword m_funcGetPassword;
funcGetSessionID m_funcGetSessionID;
funcGetTradeRecord m_funcGetTradeRecord;
funcGetTradeRecords m_funcGetTradeRecords;
funcGetTradingDate m_funcGetTradingDate;
funcGetTradingTime m_funcGetTradingTime;
funcIsClearanced m_funcIsClearanced;
funcIsClearanceTime m_funcIsClearanceTime;
funcIsDataOk m_funcIsDataOk;
funcIsMdLogined m_funcIsMdLogined;
funcIsTdLogined m_funcIsTdLogined;
funcIsTradingTime m_funcIsTradingTime;
funcIsTradingTimeExact m_funcIsTradingTimeExact;
funcReqCommissionRate m_funcReqCommissionRate;
funcReqQrySettlementInfoConfirm m_funcReqQrySettlementInfoConfirm;
funcReqQrySettlementInfo m_funcReqQrySettlementInfo;
funcReqMarginRate m_funcReqMarginRate;
funcStart m_funcStart;
funcSubMarketDatas m_funcSubMarketDatas;
funcUnSubMarketDatas m_funcUnSubMarketDatas;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void InitFuncPtr()
{
	TCHAR chCurDir[MAX_PATH] = {0};  
	GetCurrentDirectory(MAX_PATH, chCurDir);
	TCHAR* fileDef =_T("\\iCTP.dll");
	int len_a = lstrlen(chCurDir);
	int len_b = lstrlen(fileDef);
	TCHAR* absDllPath = new TCHAR[len_a + len_b + 1];
	absDllPath[0] = _T('\0');
	lstrcat(absDllPath, chCurDir);
	lstrcat(absDllPath, fileDef);
	hdll = ::LoadLibraryEx(absDllPath, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	m_funcAskClose = (funcAskClose)GetProcAddress(hdll, "askClose");
	m_funcAskCloseToday = (funcAskCloseToday)GetProcAddress(hdll, "askCloseToday");
	m_funcAskOpen = (funcAskOpen)GetProcAddress(hdll, "askOpen");
	m_funcBidClose = (funcBidClose)GetProcAddress(hdll, "bidClose");
	m_funcBidCloseToday = (funcBidCloseToday)GetProcAddress(hdll, "bidCloseToday");
	m_funcBidOpen = (funcBidOpen)GetProcAddress(hdll, "bidOpen");
	m_funcCancelOrder = (funcCancelOrder)GetProcAddress(hdll, "cancelOrder");
	m_funcCreate = (funcCreate)GetProcAddress(hdll, "create");
	m_funcGenerateReqID = (funcGenerateReqID)GetProcAddress(hdll, "generateReqID");
	m_funcGetAccountData = (funcGetAccountData)GetProcAddress(hdll, "getAccountData");
	m_funcGetBrokerID = (funcGetBrokerID)GetProcAddress(hdll, "getBrokerID");
	m_funcGetCommissionRate = (funcGetCommissionRate)GetProcAddress(hdll, "getCommissionRate");
	m_funcGetDepthMarketData = (funcGetDepthMarketData)GetProcAddress(hdll, "getDepthMarketData");
	m_funcGetInstrumentsData = (funcGetInstrumentsData)GetProcAddress(hdll, "getInstrumentsData");
	m_funcGetInvestorID = (funcGetInvestorID)GetProcAddress(hdll, "getInvestorID");
	m_funcGetMarginRate = (funcGetMarginRate)GetProcAddress(hdll, "getMarginRate");
	m_funcGetPositionData = (funcGetPositionData)GetProcAddress(hdll, "getPositionData");
	m_funcGetPositionDetailData = (funcGetPositionDetailData)GetProcAddress(hdll, "getPositionDetailData");
	m_funcGetOrderInfo = (funcGetOrderInfo)GetProcAddress(hdll, "getOrderInfo");
	m_funcGetOrderInfos = (funcGetOrderInfos)GetProcAddress(hdll, "getOrderInfos");
	m_funcGetPassword = (funcGetPassword)GetProcAddress(hdll, "getPassword");
	m_funcGetSessionID = (funcGetSessionID)GetProcAddress(hdll, "getSessionID");
	m_funcGetTradeRecord = (funcGetTradeRecord)GetProcAddress(hdll, "getTradeRecord");
	m_funcGetTradeRecords = (funcGetTradeRecords)GetProcAddress(hdll, "getTradeRecords");
	m_funcGetTradingDate = (funcGetTradingDate)GetProcAddress(hdll, "getTradingDate");
	m_funcGetTradingTime = (funcGetTradingTime)GetProcAddress(hdll, "getTradingTime");
	m_funcIsClearanced = (funcIsClearanced)GetProcAddress(hdll, "isClearanced");
	m_funcIsClearanceTime = (funcIsClearanceTime)GetProcAddress(hdll, "isClearanceTime");
	m_funcIsDataOk = (funcIsDataOk)GetProcAddress(hdll, "isDataOk");
	m_funcIsMdLogined = (funcIsMdLogined)GetProcAddress(hdll, "isMdLogined");
	m_funcIsTdLogined = (funcIsTdLogined)GetProcAddress(hdll, "isTdLogined");
	m_funcIsTradingTime = (funcIsTradingTime)GetProcAddress(hdll, "isTradingTime");
	m_funcIsTradingTimeExact = (funcIsTradingTimeExact)GetProcAddress(hdll, "isTradingTimeExact");
	m_funcReqCommissionRate = (funcReqCommissionRate)GetProcAddress(hdll, "reqCommissionRate");
	m_funcReqQrySettlementInfoConfirm = (funcReqQrySettlementInfoConfirm)GetProcAddress(hdll, "reqQrySettlementInfoConfirm");
	m_funcReqQrySettlementInfo = (funcReqQrySettlementInfo)GetProcAddress(hdll, "reqQrySettlementInfo");
	m_funcReqMarginRate = (funcReqMarginRate)GetProcAddress(hdll, "reqMarginRate");
	m_funcStart = (funcStart)GetProcAddress(hdll, "start");
	m_funcSubMarketDatas = (funcSubMarketDatas)GetProcAddress(hdll, "subMarketDatas");
	m_funcUnSubMarketDatas = (funcUnSubMarketDatas)GetProcAddress(hdll, "unSubMarketDatas");
}
//////////////////////////////////////////////////////////////////////////////////
void itostr(char *str, int i)
{
    sprintf(str, "%d", i);
}

void mexFunction (int nlhs, mxArray **plhs, int nrhs, const mxArray **prhs)
{
	if(nrhs <= 0)
	{
		return;
	}
	if(!hdll)
	{
		InitFuncPtr();
	}
	int function = (int)*(double*)mxGetData(prhs[0]);
	switch(function)
	{
		case FUNCTION_ASKCLOSE :
		{
			break;
		}
	    case FUNCTION_ASKCLOSETODAY :
		{
			break;
		}
		case FUNCTION_ASKOPEN :
		{
			break;
		}
        case FUNCTION_BIDCLOSE :
		{
			break;
		}
        case FUNCTION_BIDCLOSETODAY :
		{
			break;
		}
        case FUNCTION_BIDOPEN :
		{
			break;
		}
        case FUNCTION_CANCELORDER :
		{
			break;
		}
        case FUNCTION_CREATE :
		{
            int ret = m_funcCreate();
            char r[5] = {0};
            itostr(r, ret);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_GENERATEREQID :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            int reqid = m_funcGenerateReqID(ctpid);
            char r[5] = {0};
            itostr(r, reqid);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_GETACCOUNTDATA :
		{
			break;
		}
        case FUNCTION_GETBROKERID :
		{
			break;
		}
        case FUNCTION_GETCOMMISSIONRATE :
		{
			break;
		}
        case FUNCTION_GETDEPTHMARKETDATA :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            char data[1024] = {0};
            int ret = m_funcGetDepthMarketData(ctpid, data);
            if(ret > 0)
            {
                plhs[0] = mxCreateString(data);
            }else
            {
                char m[2] = {'E'};
                plhs[0] = mxCreateString(m);
            }
			break;
		}
        case FUNCTION_GETINSTRUMENTSDATA :
		{
			break;
		}
        case FUNCTION_GETINVESTORID :
		{
			break;
		}
        case FUNCTION_GETPOSITIONDATA :
		{
			break;
		}
        case FUNCTION_GETMARGINRATE :
		{
			break;
		}
        case FUNCTION_GETPOSITIONDETAILDATA :
		{
			break;
		}
        case FUNCTION_GETORDERINFO :
		{
			break;
		}
        case FUNCTION_GETORDERINFOS :
		{
			break;
		}
        case FUNCTION_GETPASSWORD :
		{
			break;
		}
        case FUNCTION_GETSESSIONID :
		{
			break;
		}
        case FUNCTION_GETTRADERECORD :
		{
			break;
		}
        case FUNCTION_GETTRADERECORDS :
		{
			break;
		}
        case FUNCTION_GETTRADINGDATE :
		{
			break;
		}
        case FUNCTION_GETTRADINGTIME :
		{
			break;
		}
        case FUNCTION_ISCLEARANCED :
		{
			break;
		}
        case FUNCTION_ISCLEARANCETIME :
		{
			break;
		}
        case FUNCTION_ISMDLOGINED :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            int ret = m_funcIsMdLogined(ctpid);
            char r[5] = {0};
            itostr(r, ret);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_ISTDLOGINED :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            int ret = m_funcIsTdLogined(ctpid);
            char r[5] = {0};
            itostr(r, ret);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_ISTRADINGTIME :
		{
			break;
		}
        case FUNCTION_ISTRADINGTIMEEXACT :
		{
			break;
		}
        case FUNCTION_REQCOMMISSIONRATE :
		{
			break;
		}
        case FUNCTION_REQQRYSETTLEMENTINFOCONFIRM :
		{
			break;
		}
        case FUNCTION_REQMARGINRATE :
		{
			break;
		}
        case FUNCTION_START :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            int reqid = *(int*)mxGetData(prhs[2]);
            char *ipMd = mxArrayToString(prhs[3]);
            char *ipTD = mxArrayToString(prhs[4]);
            char *brokerid = mxArrayToString(prhs[5]);
            char *uname = mxArrayToString(prhs[6]);
            char *passwd = mxArrayToString(prhs[7]);
            int ret = m_funcStart(ctpid, reqid, ipMd, ipTD, brokerid, uname, passwd);
            char r[5] = {0};
            itostr(r, ret);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_SUBMARKETDATAS :
		{
            int ctpid = *(int*)mxGetData(prhs[1]);
            int reqid = *(int*)mxGetData(prhs[2]);
            char *stockCode = mxArrayToString(prhs[3]);
            int ret = m_funcSubMarketDatas(ctpid, reqid, stockCode);
            char r[5] = {0};
            itostr(r, ret);
            plhs[0] = mxCreateString(r);
			break;
		}
        case FUNCTION_UNSUBMARKETDATAS :
		{
			break;
		}
	}
}	