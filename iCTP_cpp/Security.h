/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

#ifndef __SECURITY_H__
#define __SECURITY_H__
#pragma once
#include "stdafx.h"
using namespace std;

//CTP资金账户类定义
class AccountData{
public:
	// 投资者帐号
	String m_accountID;
	// 可用资金
	double m_available;
	// 期货结算准备金
	double m_balance;
	// 经纪公司代码
	String m_brokerID;
	// 资金差额
	double m_cashIn;
	// 平仓盈亏
	double m_closeProfit;
	// 手续费
	double m_commission;
	// 信用额度
	double m_credit;
	// 币种代码
	String m_currencyID;
	// 当前保证金总额
	double m_currMargin;
	// 投资者交割保证金
	double m_deliveryMargin;
	// 入金金额
	double m_deposit;
	// 交易所交割保证金
	double m_exchangeDeliveryMargin;
	// 交易所保证金
	double m_exchangeMargin;
	// 冻结的资金
	double m_frozenCash;
	// 冻结的手续费
	double m_frozenCommission;
	// 冻结的保证金
	double m_frozenMargin;
	// 货币质押余额
	double m_fundMortgageAvailable;
	// 货币质入金额
	double m_fundMortgageIn;
	// 货币质出金额
	double m_fundMortgageOut;
	// 利息收入
	double m_interest;
	// 利息基数
	double m_interestBase;
	// 质押金额
	double m_mortgage;
	// 可质押货币金额
	double m_mortgageableFund;
	// 持仓盈亏
	double m_positionProfit;
	// 上次结算准备金
	double m_preBalance;
	// 上次信用额度
	double m_preCredit;
	// 上次存款额
	double m_preDeposit;
	// 上次货币质入金额
	double m_preFundMortgageIn;
	// 上次货币质出金额
	double m_preFundMortgageOut;
	// 上次占用的保证金
	double m_preMargin;
	// 上次质押金额
	double m_preMortgage;
	// 基本准备金
	double m_reserve;
	// 保底期货结算准备金
	double m_reserveBalance;
	// 结算编号
	int m_settlementID;
	// 特殊产品平仓盈亏
	double m_specProductCloseProfit;
	// 特殊产品手续费
	double m_specProductCommission;
	// 特殊产品交易所保证金
	double m_specProductExchangeMargin;
	// 特殊产品冻结手续费
	double m_specProductFrozenCommission;
	// 特殊产品冻结保证金
	double m_specProductFrozenMargin;
	// 特殊产品占用保证金
	double m_specProductMargin;
	// 特殊产品持仓盈亏
	double m_specProductPositionProfit;
	// 根据持仓盈亏算法计算的特殊产品持仓盈亏
	double m_specProductPositionProfitByAlg;
	// 交易日
	String m_tradingDay;
	// 出金金额
	double m_withdraw;
	// 可取资金
	double m_withdrawQuota;
};

//合约手续费率
class CommissionRate{
public:
	//经纪公司代码
	String m_brokerID;
	//收费方式
	String m_calculateMode;
	//平仓手续费率
	double m_closeRatioByMoney;
	//平仓手续费
	double m_closeRatioByVolume;
	//平今手续费率
	double m_closeTodayRatioByMoney;
	//平今手续费
	double m_closeTodayRatioByVolume;
	//平今费
	double m_closeTodayFee;
	//合约代码
	String m_code;
	//代码
	String m_commodityNo;
	//类型
	String m_commodityType;
	//交易所编号
	String m_exchangeNo;
	//投资者代码
	String m_investorID;
	//投资者范围
	String m_investorRange;
	//来源
	String m_matchSource;
	//开平费
	double m_openCloseFee;
	//开仓手续费率
	double m_openRatioByMoney;
	//开仓手续费
	double m_openRatioByVolume;
};

//合约保证金率
class MarginRate{
public:
	//经纪公司代码
	String m_brokerID;
	//收费方式
	String m_calculateMode;
	//看涨看跌标示
	String m_callOrPutFlag;
	//合约代码
	String m_code;
	//代码
	String m_commodityNo;
	//类型
	String m_commodityType;
	//合约
	String m_contractNo;
	//投机套保标志
	String m_hedgeFlag;
	double m_initialMargin;
	//投资者代码
	String m_investorID;
	//多头保证金率
	double m_longMarginRatioByMoney;
	//多头保证金费
	double m_longMarginRatioByVolume;
	//投资者范围
	String m_investorRange;
	//是否相对交易所收取
	int m_isRelativel;
	double m_lockMargin;
	double m_maintenanceMargin;
	double m_sellInitialMargin;
	double m_sellMaintenanceMargin;
	//空头保证金率
	double m_shortMarginRatioByMoney;
	//空头保证金费
	double m_shortMarginRatioByVolume;
	String m_strikePrice;
};

//合约数据定义
class Security{
public:
	// 组合类型
	String m_combinationType;
	//创建日
	String m_createDate;
	//交割月
	int m_deliveryMonth;
	//交割年份
	int m_deliveryYear;
	//结束交割日
	String m_endDelivDate;
	//交易所代码
	String m_exchangeID;
	//合约在交易所的代码
	String m_exchangeInstID;
	//到期日
	String m_expireDate;
	//保留小数位数
	int m_digit;
	//合约生命周期状态
	String m_instLifePhase;
	//合约代码
	String m_instrumentID;
	//合约名称
	String m_instrumentName;
	//当前是否交易
	String m_isTrading;
	//多头保证金率
	double m_longMarginRatio;
	//限价单最大下单量
	int m_maxLimitOrderVolume;
	//是否使用大额单边保证金算法
	String m_maxMarginSideAlgorithm;
	//市价单最大下单量
	int m_maxMarketOrderVolume;
	//限价单最小下单量
	int m_minLimitOrderVolume;
	//市价单最小下单量
	int m_minMarketOrderVolume;
	//上市日
	String m_openDate;
	//期权类型
	String m_optionsType;
	//持仓日期类型
	String m_positionDateType;
	//持仓类型
	String m_positionType;
	//最小变动价位
	double m_priceTick;
	//产品类型
	String m_productClass;
	//产品代码
	String m_productID;
	//空头保证金率
	double m_shortMarginRatio;
	//开始交割日
	String m_startDelivDate;
	//执行价
	double m_strikePrice;
	//基础商品代码
	String m_underlyingInstrID;
	//基础商品名称
	String m_underlyingInstrName;
	//合约基础商品乘数
	double m_underlyingMultiple;
	//合约数量乘数
	int m_volumeMultiple;

	void getNnderlyingInstrName(){
		int size = m_instrumentName.size();
		m_underlyingInstrName = L"";
		for (int i = 0; i < size ; i++){
			char sz = m_instrumentName[i];
			if (!(sz == '0' || sz == '1' || sz == '2' || sz == '3' || sz == '4' ||
				sz == '5' || sz == '6' || sz == '7' || sz == '8' || sz == '9')){
				m_underlyingInstrName += sz;
			}
		}
	}
};

//投资者持仓定义
class InvestorPosition{
public:
	//放弃执行冻结
	int m_abandonFrozen;
	// 经纪公司代码
	String m_brokerID;
	// 资金差额
	double m_cashIn;
	// 平仓金额
	double m_closeAmount;
	// 平仓盈亏
	double m_closeProfit;
	// 逐日盯市平仓盈亏
	double m_closeProfitByDate;
	// 逐笔对冲平仓盈亏
	double m_closeProfitByTrade;
	// 平仓量
	int m_closeVolume;
	// 合约代码
	String m_code;
	// 组合多头冻结
	int m_combLongFrozen;
	// 组合成交形成的持仓
	int m_combPosition;
	// 组合空头冻结
	int m_combShortFrozen;
	// 手续费
	double m_commission;
	// 交易所保证金
	double m_exchangeMargin;
	// 冻结的资金
	double m_frozenCash;
	// 冻结的手续费
	double m_frozenCommission;
	// 冻结的保证金
	double m_frozenMargin;
	// 投机套保标志
	String m_hedgeFlag;
	// 投资者代码
	String m_investorID;
	// 多头冻结
	int m_longFrozen;
	// 多头冻结金额
	double m_longFrozenAmount;
	// 保证金率
	double m_marginRateByMoney;
	// 保证金率(按手数)
	double m_marginRateByVolume;
	// 开仓金额
	double m_openAmount;
	// 开仓成本
	double m_openCost;
	// 开仓量
	int m_openVolume;
	// 今日持仓
	int m_position;
	// 持仓日期
	String m_positionDate;
	// 持仓多空方向
	String m_posiDirection;
	// 持仓成本
	double m_positionCost;
	// 持仓盈亏
	double m_positionProfit;
	// 上次占用的保证金
	double m_preMargin;	
	// 上次结算价
	double m_preSettlementPrice;
	// 结算编号
	int m_settlementID;
	// 本次结算价
	double m_settlementPrice;
	// 空头冻结
	int m_shortFrozen;
	// 空头冻结金额
	double m_shortFrozenAmount;
	// 执行冻结
	int m_strikeFrozen;
	// 执行冻结金额
	double m_strikeFrozenAmount;
	// 今日持仓
	int m_todayPosition;
	//交易日
	String m_tradingDate;
	//占用的保证金
	double m_useMargin;
	//上日持仓
	int m_ydPosition;

	//获取可用仓位
	int getAvailablePosition(){
		int position = 0;
		position = m_position - getFrozenAmount();
		return position;
	};

	int getFrozenAmount(){
		int position = 0;
		if (m_posiDirection == L"多"){
			position = m_longFrozen;
		}
		else if (m_posiDirection == L"空"){
			position = m_shortFrozen;
		}
		return position;
	};
};

//持仓明细
class InvestorPositionDetail{
public:
	//经纪公司代码
	String m_brokerID;
	//平仓金额
	double m_closeAmount;
	//平仓盈亏
	double m_closeProfit;
	//逐日盯市持仓盈亏
	double m_closeProfitByDate;
	//逐笔对冲持仓盈亏
	double m_closeProfitByTrade;
	//平仓量
	double m_closeVolume;
	//合约代码
	String m_code;
	//组合合约代码
	String m_combInstrumentID;
	//买卖
	String m_direction;
	//交易所代码
	String m_exchangeID;
	//交易所保证金
	double m_exchMargin;
	//浮动盈亏
	double m_floatProfit;
	//投机套保标志
	String m_hedgeFlag;
	//投资者代码
	String m_investorID;
	//昨收盘
	double m_lastPrice;
	//昨结算价
	double m_lastSettlementPrice;
	//投资者保证金
	double m_margin;
	//保证金率
	double m_marginRateByMoney;
	//保证金率(按手数)
	double m_marginRateByVolume;
	//内部编号
	String m_orderRef;
	//开仓日期
	String m_openDate;
	//开仓价
	double m_openPrice;
	//开仓量
	int m_openVolume;
	//本地持仓号，服务器编写
	String m_positionNo;
	//持仓盈亏
	double m_positionProfit;
	//逐日盯市持仓利润
	double m_positionProfitByDate;
	//逐笔对冲持仓利润
	double m_positionProfitByTrade;
	//持仓流号
	int m_positionStreamId;
	//昨结算价
	double m_preSettlementPrice;
	//持仓盈亏基准价
	double m_profitBasePrice;
	//结算编号
	int m_settlementID;
	//结算价
	double m_settlementPrice;
	//成交日期
	String m_tradingDay;
	//成交编号
	String m_tradeID;
	//成交类型
	String m_tradeType;
	//数量
	int m_volume;
};

//报单定义
class OrderInfo{
public:
	//激活时间	
	String m_activeTime;
	//最后修改交易所交易员代码	
	String m_activeTraderID;
	//操作用户代码	
	String m_activeUserID;
	//经纪公司代码	
	String m_brokerID;
	//经纪公司报单编号	
	int m_brokerOrderSeq;
	//业务单元	
	String m_businessUnit;
	//撤销时间	
	String m_cancelTime;
	//结算会员编号	
	String m_clearingPartID;
	//客户代码	
	String m_clientID;
	//合约代码	
	String m_code;
	//组合投机套保标志	
	String m_combHedgeFlag;
	//组合开平标志	
	String m_combOffsetFlag;
	//触发条件	
	String m_contingentCondition;
	//买卖方向	
	String m_direction;
	//交易所代码	
	String m_exchangeID;
	//合约在交易所的代码	
	String m_exchangeInstID;
	//强平原因	
	String m_forceCloseReason;
	//前置编号	
	int m_frontID;
	//GTD日期	
	String m_gTDDate;
	//价格	
	double m_limitPrice;
	//报单日期	
	String m_insertDate;
	//委托时间	
	String m_insertTime;
	//安装编号	
	String m_installID;
	//投资者代码	
	String m_investorID;
	//自动挂起标志	
	int m_isAutoSuspend;
	//互换单标志	
	int m_isSwapOrder;
	//最小成交量	
	int m_minVolume;
	//报单提示序号	
	int m_notifySequence;
	//本地报单编号	
	String m_orderLocalID;
	//报单价格条件	
	String m_orderPriceType;
	//报单引用	
	String m_orderRef;
	//报单状态	
	String m_orderStatus;
	//报单来源	
	String m_orderSource;
	//报单提交状态	
	String m_orderSubmitStatus;
	//报单编号	
	String m_orderSysID;
	//报单类型	
	String m_orderType;
	//会员代码	
	String m_participantID;
	//相关报单	
	String m_relativeOrderSysID;
	//请求编号	
	int m_requestID;
	//序号	
	int m_sequenceNo;
	//会话编号	
	int m_sessionID;
	//结算编号	
	int m_settlementID;
	//状态信息	
	String m_statusMsg;
	//止损价	
	double m_stopPrice;
	//挂起时间	
	String m_suspendTime;
	//有效期类型	
	String m_timeCondition;
	//交易所交易员代码	
	String m_traderID;
	//交易日	
	String m_tradingDay;
	//最后修改时间	
	String m_updateTime;
	//用户强评标志	
	int m_userForceClose;
	//用户代码	
	String m_userID;
	//用户端产品信息	
	String m_userProductInfo;
	//成交量类型	
	String m_volumeCondition;
	//剩余数量	
	int m_volumeTotal;
	//数量	
	int m_volumeTotalOriginal;
	//今成交数量	
	int m_volumeTraded;
	//郑商所成交数量	
	int m_zCETotalTradedVolume;
};

//最新数据
class SecurityLatestData{
public:
	//触发日
	String m_actionDay;
	//卖价
    double m_askPrice1;
	//卖价
    double m_askPrice2;
	//卖价
    double m_askPrice3;
	//卖价
    double m_askPrice4;
	//卖价
    double m_askPrice5;
	//卖量
    int m_askVolume1;
	//卖量
    int m_askVolume2;
	//卖量
    int m_askVolume3;
	//卖量
    int m_askVolume4;
	//卖量
    int m_askVolume5;
	//平均价格
    double m_averagePrice;
	//买价
    double m_bidPrice1;
	//买价
    double m_bidPrice2;
	//买价
    double m_bidPrice3;
	//买价
    double m_bidPrice4;
	//买价
    double m_bidPrice5;
	//买量
    int m_bidVolume1;
	//买量
    int m_bidVolume2;
	//买量
    int m_bidVolume3;
	//买量
    int m_bidVolume4;
	//买量
    int m_bidVolume5;
	//最新价
    double m_close;
	//合约代码
    String m_code;
	//今虚实度
    double m_currDelta;
	//交易所ID
    String m_exchangeID;
	//交易所InstID
    String exchangeInstID;
	//最高价
    double m_high;
	//昨日收盘价
    double m_lastClose;
	//最低价
    double m_low;
	//跌停价
    double m_lowerLimit;
	//开盘价
    double m_open;
	//持仓量
    double m_openInterest;
	//昨收盘
    double m_preClose;
	//昨虚实度
    double m_preDelta;
	//昨持仓量
    double m_preOpenInterest;
	//上次结算价
    double m_preSettlementPrice;
	//本次结算价
    double m_settlementPrice;
	//交易日
    String m_tradingDay;
	//成交金额
    double m_turnover;
	//最后修改毫秒
    int m_updateMillisec;
	//最后修改时间
    String m_updateTime;
	//涨停价
    double m_upperLimit;
	//成交量
    int m_volume;
};

//CTP交易定义
class TradeRecord{
public:
	//经纪公司代码
	String m_brokerID;
	///经纪公司报单编号
	int m_brokerOrderSeq;
	///业务单元
	String m_businessUnit;
	///结算会员编号
	String m_clearingPartID;
	///客户代码
	String m_clientID;
	//合约代码
	String m_code;
	//买卖方向
	String m_direction;
	//市场代码
	String m_exchangeID;
	//合约在交易所的代码
	String m_exchangeInstID;
	//投机套保标志
	String m_hedgeFlag;
	//投资者代码
	String m_investorID;
	//开平标志
	String m_offsetFlag;
	//本地报单编号
	String m_orderLocalID;
	//报单引用
	String m_orderRef;
	//报单编号
	String m_orderSysID;
	//会员代码
	String m_participantID;
	//价格
	double m_price;
	//成交价来源
	String m_priceSource;
	//序号
	int m_sequenceNo;
	//结算编号
	int m_settlementID;
	//成交编号
	String m_tradeID;
	//交易所交易员代码
	String m_traderID;
	//成交时期
	String m_tradeDate;
	//成交来源
	String m_tradeSource;
	//成交时间
	String m_tradeTime;
	//交易日
	String m_tradingDay;
	//成交类型
	String m_tradeType;
	//交易角色
	String m_tradingRole;
	//数量
	int m_volume;
	//用户代码
	String m_userID;
};

class CTPConvert{
public:
	//转换成CTP资金账户
	static AccountData convertToCTPTradingAccount(String result);
	//转换CTP合约信息
	static vector<Security> convertToCTPInstrumentDatas(String str);
	//转换CTP深度市场数据
	static SecurityLatestData convertToCTPDepthMarketData(String result);
	//转换CTP持仓信息
	static vector<InvestorPosition> convertToCTPInvestorPosition(String result);
	//转换CTP持仓明细信息
	static vector<InvestorPositionDetail> convertToCTPInvestorPositionDetail(String result);
	// 转换CTP报单信息
	static vector<OrderInfo> convertToCTPOrderList(String result);
	// 转换CTP报单信息
	static OrderInfo convertToCTPOrder(String result);
	//转换CTP交易信息
	static TradeRecord convertToCTPTrade(String result);
	//转换CTP交易信息列表
	static vector<TradeRecord> convertToCTPTradeRecords(String result);
};

#endif