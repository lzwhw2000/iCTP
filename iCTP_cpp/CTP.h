/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

#ifndef __CTP_H__
#define __CTP_H__
#pragma once
#include "stdafx.h"
#include "Security.h"
using namespace std;

class CTP{
private:
	int m_ctpID;
public:
	CTP();
	~CTP();
	int getCtpID();
	void run();
	void setCtpID(int ctpID);
public:
	//资金账户信息回调
	virtual void onAccountDataCallBack(AccountData *data, int ctpID);
	//持仓数据回调
	virtual void onInvestorPositionCallBack(vector<InvestorPosition> *data, int ctpID);
	//持仓数据回调
	virtual void onInvestorPositionDetailCallBack(vector<InvestorPositionDetail> *data, int ctpID);
	//推送的委托回报回调
	virtual void onOrderInfoCallBack(OrderInfo *data, int ctpID);
	//主动查询的委托回报回调
	virtual void onOrderInfosCallBack(vector<OrderInfo> *data, int ctpID);
	//码表回调
	virtual void onSecurityCallBack(vector<Security> *data, int ctpID);
	//最新数据回调
	virtual void onSecurityLatestDataCallBack(SecurityLatestData *data, int ctpID);
	//推送的交易信息回调
	virtual void onTradeRecordCallBack(TradeRecord *data, int ctpID);
	//主动查询的交易信息回调
	virtual void onTradeRecordsCallBack(vector<TradeRecord> *tradeRecords, int ctpID);
};

#endif
