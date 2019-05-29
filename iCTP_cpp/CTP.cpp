#include "stdafx.h"
#include "CTP.h"
#include "CTPDLL.h"

CTP::CTP(){
	m_ctpID = 0;
}

CTP::~CTP(){

}

int CTP::getCtpID(){
	return m_ctpID;
}

void CTP::run(){
    int ctpID = CTPDLL::create();
    int ctpRequestID = CTPDLL::generateReqID(ctpID);
    CTPDLL::start(ctpID, ctpRequestID, "", "", "9999", "021739", "123456");
    while (CTPDLL::isMdLogined(ctpID) <= 0 || CTPDLL::isTdLogined(ctpID) <= 0){
        Sleep(1000);
    }
    ctpRequestID = CTPDLL::generateReqID(ctpID);
    CTPDLL::subMarketDatas(ctpID, ctpRequestID, "cu1712");
    while (true){
		char data[102400] ={0};
        if (CTPDLL::getDepthMarketData(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            SecurityLatestData latestData = CTPConvert::convertToCTPDepthMarketData(str);
            onSecurityLatestDataCallBack(&latestData, ctpID);
        }
        if (CTPDLL::getInstrumentsData(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            vector<Security> instrumentDatas = CTPConvert::convertToCTPInstrumentDatas(str);
            onSecurityCallBack(&instrumentDatas, ctpID);
        }
        if (CTPDLL::getAccountData(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            AccountData accountData = CTPConvert::convertToCTPTradingAccount(str);
            onAccountDataCallBack(&accountData, ctpID);
        }
        if (CTPDLL::getOrderInfo(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            OrderInfo orderInfo = CTPConvert::convertToCTPOrder(str);
            onOrderInfoCallBack(&orderInfo, ctpID);
        }
        if (CTPDLL::getOrderInfos(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            vector<OrderInfo> orderInfos = CTPConvert::convertToCTPOrderList(str);
            onOrderInfosCallBack(&orderInfos, ctpID);
        }
        if (CTPDLL::getTradeRecord(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            TradeRecord tradeRecord = CTPConvert::convertToCTPTrade(str);
            onTradeRecordCallBack(&tradeRecord, ctpID);
        }
        if (CTPDLL::getTradeRecords(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            vector<TradeRecord> tradeRecords = CTPConvert::convertToCTPTradeRecords(str);
            onTradeRecordsCallBack(&tradeRecords, ctpID);
        }
        if (CTPDLL::getPositionData(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            vector<InvestorPosition> investorPositions = CTPConvert::convertToCTPInvestorPosition(str);
            onInvestorPositionCallBack(&investorPositions, ctpID);
        }
        if (CTPDLL::getPositionDetailData(ctpID, data) > 0){
			String str = FCStrEx::stringTowstring(data);
            vector<InvestorPositionDetail> investorPositionDetails = CTPConvert::convertToCTPInvestorPositionDetail(str);
            onInvestorPositionDetailCallBack(&investorPositionDetails, ctpID);
        }
        Sleep(1);
    }
}

void CTP::setCtpID(int ctpID){
	m_ctpID = ctpID;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CTP::onAccountDataCallBack(AccountData *data, int ctpID){

}
void CTP::onInvestorPositionCallBack(vector<InvestorPosition> *data, int ctpID){

}
void CTP::onInvestorPositionDetailCallBack(vector<InvestorPositionDetail> *data, int ctpID){

}
void CTP::onOrderInfoCallBack(OrderInfo *data, int ctpID){

}
void CTP:: onOrderInfosCallBack(vector<OrderInfo> *data, int ctpID){

}
void CTP::onSecurityCallBack(vector<Security> *data, int ctpID){

}
void CTP:: onSecurityLatestDataCallBack(SecurityLatestData *data, int ctpID){

}
void CTP::onTradeRecordCallBack(TradeRecord *data, int ctpID){

}
void CTP::onTradeRecordsCallBack(vector<TradeRecord> *tradeRecords, int ctpID){

}