#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <io.h>
#include <Rcpp.h>

using namespace std;
using namespace Rcpp;

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

string GetProgramDir()
{
  char exeFullPath[MAX_PATH];
  string strPath = "";
  GetModuleFileNameA(GetModuleHandle(TEXT("iCTP.dll")), exeFullPath, MAX_PATH);
  strPath = (string)exeFullPath;
  int pos = (int)strPath.find_last_of('\\', strPath.length());
  strPath = strPath.substr(0, pos);
  return strPath;
}

void Init()
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

// [[Rcpp::export]]
int askClose(int ctpID, int requestID, string code, double price, char  qty, char  timeCondition, string  orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcAskClose(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int askCloseToday(int  ctpID, int  requestID, string code, double  price, char  qty, char  timeCondition, string orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcAskCloseToday(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int  askOpen(int  ctpID, int  requestID, string   code, double  price, char  qty, char  timeCondition, string orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcAskOpen(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int bidClose(int ctpID, int  requestID, string  code, double  price, char  qty, char  timeCondition, string orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcBidClose(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int  bidCloseToday(int  ctpID, int  requestID, string  code, double  price, char  qty, char  timeCondition, string  orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcBidCloseToday(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int bidOpen(int  ctpID, int  requestID,string   code, double  price, char  qty, char  timeCondition,string   orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcBidOpen(ctpID, requestID, (char*)code.c_str(), price, qty, timeCondition, (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int  CancelOrder(int ctpID, int requestID, string  exchangeID, string orderSysID, string orderRef)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcCancelOrder(ctpID, requestID, (char*)exchangeID.c_str(), (char*)orderSysID.c_str(), (char*)orderRef.c_str());
}

// [[Rcpp::export]]
int create()
{
  if(!hdll)
  {
    Init();
  }
  return m_funcCreate();
}

// [[Rcpp::export]]
int generateReqID(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcGenerateReqID(ctpID);
}

// [[Rcpp::export]]
CharacterVector getAccountData(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  int ret = m_funcGetAccountData(ctpID, zdata);
  if(ret)
  {
	string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getBrokerID(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  int ret = m_funcGetBrokerID(ctpID, data);
  if(ret)
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getCommissionRate(int ctpID, string code)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  int ret = m_funcGetCommissionRate(ctpID, (char*)code.c_str(), data);
  if(ret)
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getDepthMarketData(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  int ret = m_funcGetDepthMarketData(ctpID, data);
  if(ret)
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getInstrumentsData(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetInstrumentsData(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getInvestorID(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetInvestorID(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getMarginRate(int ctpID, string code)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetMarginRate(ctpID, (char*)code.c_str(), data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector  getPositionData(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetPositionData(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getPositionDetailData(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetPositionDetailData(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getOrderInfo(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetOrderInfo(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getOrderInfos(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetOrderInfos(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getPassword(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetPassword(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
int getSessionID(int  ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcGetSessionID(ctpID);
}

// [[Rcpp::export]]
CharacterVector getTradeRecord(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetTradeRecord(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getTradeRecords(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetTradeRecords(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getTradingDate(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetTradingDate(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
CharacterVector getTradingTime(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  char data[1024] = {0};
  if(m_funcGetTradingTime(ctpID, data))
  {
    string rStr(data);
    return rStr;
  }
  return "";
}

// [[Rcpp::export]]
int isClearanced(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsClearanced(ctpID);
}

// [[Rcpp::export]]
int  isClearanceTime(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsClearanceTime(ctpID);
}

// [[Rcpp::export]]
int  isDataOk(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsDataOk(ctpID);
}

// [[Rcpp::export]]
int isMdLogined(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsMdLogined(ctpID);
}

// [[Rcpp::export]]
int isTdLogined(int ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsTdLogined(ctpID);
}

// [[Rcpp::export]]
int isTradingTime(int  ctpID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsTradingTime(ctpID);
}

// [[Rcpp::export]]
int isTradingTimeExact(int ctpID, string code)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcIsTradingTimeExact(ctpID, (char*)code.c_str());
}

// [[Rcpp::export]]
int reqCommissionRate(int ctpID, string code, int requestID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcReqCommissionRate(ctpID, (char*)code.c_str(), requestID);
}

// [[Rcpp::export]]
int reqQrySettlementInfoConfirm(int  ctpID, int  requestID)
{
  if(!hdll)
  {
    Init();
  }
  return  m_funcReqQrySettlementInfoConfirm(ctpID, requestID);
}

// [[Rcpp::export]]
int reqQrySettlementInfo(int  ctpID, int  requestID, string tradingDate)
{
  if(!hdll)
  {
    Init();
  }
  return  m_funcReqQrySettlementInfo(ctpID, requestID, tradingDate);
}

// [[Rcpp::export]]
int reqMarginRate(int  ctpID, string  code, int  requestID)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcReqMarginRate(ctpID, (char*)code.c_str(), requestID);
}

// [[Rcpp::export]]
int start(int ctpID, int requestID, string mdServer, string tdServer, string brokerID, string investorID, string password)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcStart(ctpID, requestID, (char*)mdServer.c_str(), (char*)tdServer.c_str(), (char*)brokerID.c_str(), (char*)investorID.c_str(), (char*)password.c_str());
}

// [[Rcpp::export]]
int subMarketDatas(int ctpID, int requestID, string codes)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcSubMarketDatas(ctpID, requestID, (char*)codes.c_str());
}

// [[Rcpp::export]]
int  unSubMarketDatas(int ctpID, int requestID, string codes)
{
  if(!hdll)
  {
    Init();
  }
  return m_funcSubMarketDatas(ctpID, requestID, (char*)codes.c_str());
}
