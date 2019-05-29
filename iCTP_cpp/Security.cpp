#include "stdafx.h"
#include "Security.h"

AccountData CTPConvert::convertToCTPTradingAccount(String result){
	AccountData cTPTradingAccount;
	//资金账号信息返回
	vector<String> results = FCStrEx::split(result,L",");
	if (results.size() == 46){
		int i = 0;
		//经纪公司代码
		cTPTradingAccount.m_brokerID = results[i++];
		///投资者帐号
		cTPTradingAccount.m_accountID = results[i++];
		///上次质押金额
		cTPTradingAccount.m_preMortgage = FCStrEx::convertStrToDouble(results[i++].c_str());
		///上次信用额度
		cTPTradingAccount.m_preCredit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///上次存款额
		cTPTradingAccount.m_preDeposit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///上次结算准备金
		cTPTradingAccount.m_preBalance = FCStrEx::convertStrToDouble(results[i++].c_str());
		///上次占用的保证金
		cTPTradingAccount.m_preMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///利息基数
		cTPTradingAccount.m_interestBase = FCStrEx::convertStrToDouble(results[i++].c_str());
		///利息收入
		cTPTradingAccount.m_interest = FCStrEx::convertStrToDouble(results[i++].c_str());
		///入金金额
		cTPTradingAccount.m_deposit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///出金金额
		cTPTradingAccount.m_withdraw = FCStrEx::convertStrToDouble(results[i++].c_str());
		///冻结的保证金
		cTPTradingAccount.m_frozenMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///冻结的资金
		cTPTradingAccount.m_frozenCash = FCStrEx::convertStrToDouble(results[i++].c_str());
		///冻结的手续费
		cTPTradingAccount.m_frozenCommission = FCStrEx::convertStrToDouble(results[i++].c_str());
		///当前保证金总额
		cTPTradingAccount.m_currMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///资金差额
		cTPTradingAccount.m_cashIn = FCStrEx::convertStrToDouble(results[i++].c_str());
		///手续费
		cTPTradingAccount.m_commission = FCStrEx::convertStrToDouble(results[i++].c_str());
		///平仓盈亏
		cTPTradingAccount.m_closeProfit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///持仓盈亏
		cTPTradingAccount.m_positionProfit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///期货结算准备金
		cTPTradingAccount.m_balance = FCStrEx::convertStrToDouble(results[i++].c_str());
		///可用资金
		cTPTradingAccount.m_available = FCStrEx::convertStrToDouble(results[i++].c_str());
		///可取资金
		cTPTradingAccount.m_withdrawQuota = FCStrEx::convertStrToDouble(results[i++].c_str());
		///基本准备金
		cTPTradingAccount.m_reserve = FCStrEx::convertStrToDouble(results[i++].c_str());
		///交易日
		cTPTradingAccount.m_tradingDay = results[i++];
		///结算编号
		cTPTradingAccount.m_settlementID = FCStrEx::convertStrToInt(results[i++].c_str());
		///信用额度
		cTPTradingAccount.m_credit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///质押金额
		cTPTradingAccount.m_mortgage = FCStrEx::convertStrToDouble(results[i++].c_str());
		///交易所保证金
		cTPTradingAccount.m_exchangeMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///投资者交割保证金
		cTPTradingAccount.m_deliveryMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///交易所交割保证金
		cTPTradingAccount.m_exchangeDeliveryMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///保底期货结算准备金
		cTPTradingAccount.m_reserveBalance = FCStrEx::convertStrToDouble(results[i++].c_str());
		///币种代码
		cTPTradingAccount.m_currencyID = results[i++];
		///上次货币质入金额
		cTPTradingAccount.m_preFundMortgageIn = FCStrEx::convertStrToDouble(results[i++].c_str());
		///上次货币质出金额
		cTPTradingAccount.m_preFundMortgageOut = FCStrEx::convertStrToDouble(results[i++].c_str());
		///货币质入金额
		cTPTradingAccount.m_fundMortgageIn = FCStrEx::convertStrToDouble(results[i++].c_str());
		///货币质出金额
		cTPTradingAccount.m_fundMortgageOut = FCStrEx::convertStrToDouble(results[i++].c_str());
		///货币质押余额
		cTPTradingAccount.m_fundMortgageAvailable = FCStrEx::convertStrToDouble(results[i++].c_str());
		///可质押货币金额
		cTPTradingAccount.m_mortgageableFund = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品占用保证金
		cTPTradingAccount.m_specProductMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品冻结保证金
		cTPTradingAccount.m_specProductFrozenMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品手续费
		cTPTradingAccount.m_specProductCommission = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品冻结手续费
		cTPTradingAccount.m_specProductFrozenCommission = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品持仓盈亏
		cTPTradingAccount.m_specProductPositionProfit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品平仓盈亏
		cTPTradingAccount.m_specProductCloseProfit = FCStrEx::convertStrToDouble(results[i++].c_str());
		///根据持仓盈亏算法计算的特殊产品持仓盈亏
		cTPTradingAccount.m_specProductPositionProfitByAlg = FCStrEx::convertStrToDouble(results[i++].c_str());
		///特殊产品交易所保证金
		cTPTradingAccount.m_specProductExchangeMargin = FCStrEx::convertStrToDouble(results[i++].c_str());
	}
	return cTPTradingAccount;
}

vector<Security> CTPConvert::convertToCTPInstrumentDatas(String str){
	vector<Security> securitis;
	vector<String> results = FCStrEx::split(str, L":");
	int size = (int)results.size();
	for(int i = 0;i < size; i++){
		vector<String> result = FCStrEx::split(results[i], L",");
		if(result.size() == 31){
			Security security;
			int j = 0;
			//合约代码
			security.m_instrumentID = result[j++];
			///交易所代码
			security.m_exchangeID = result[j++];
			///合约名称
			security.m_instrumentName = result[j++];
			///合约在交易所的代码
			security.m_exchangeInstID = result[j++];
			///产品代码
			security.m_productID = result[j++];
			///产品类型
			security.m_productClass = result[j++];
			///交割年份
			security.m_deliveryYear = FCStrEx::convertStrToInt(result[j++].c_str());
			///交割月
			security.m_deliveryMonth = FCStrEx::convertStrToInt(result[j++].c_str());
			///市价单最大下单量
			security.m_maxMarketOrderVolume = FCStrEx::convertStrToInt(result[j++].c_str());
			///市价单最小下单量
			security.m_minMarketOrderVolume = FCStrEx::convertStrToInt(result[j++].c_str());
			///限价单最大下单量
			security.m_maxLimitOrderVolume = FCStrEx::convertStrToInt(result[j++].c_str());
			///限价单最小下单量
			security.m_minLimitOrderVolume = FCStrEx::convertStrToInt(result[j++].c_str());
			///合约数量乘数
			security.m_volumeMultiple = FCStrEx::convertStrToInt(result[j++].c_str());
			///最小变动价位
			security.m_priceTick = FCStrEx::convertStrToDouble(result[j++].c_str());
			///创建日
			security.m_createDate = result[j++];
			///上市日
			security.m_openDate = result[j++];
			///到期日
			security.m_expireDate = result[j++];
			///开始交割日
			security.m_startDelivDate = result[j++];
			///结束交割日
			security.m_endDelivDate = result[j++];
			///合约生命周期状态
			security.m_instLifePhase = result[j++];
			///当前是否交易
			security.m_isTrading = result[j++];
			///持仓类型
			security.m_positionType = result[j++];
			///持仓日期类型
			security.m_positionDateType = result[j++];
			///多头保证金率  
			security.m_longMarginRatio = FCStrEx::convertStrToDouble(result[j++].c_str());
			///空头保证金率
			security.m_shortMarginRatio = FCStrEx::convertStrToDouble(result[j++].c_str());
			///是否使用大额单边保证金算法
			security.m_maxMarginSideAlgorithm = result[j++];
			///基础商品代码
			security.m_underlyingInstrID = result[j++];
			///执行价
			security.m_strikePrice = FCStrEx::convertStrToDouble(result[j++].c_str());
			///期权类型
			security.m_optionsType = result[j++];
			///合约基础商品乘数
			security.m_underlyingMultiple = FCStrEx::convertStrToDouble(result[j++].c_str());
			///组合类型
			security.m_combinationType = result[j++];
			security.getNnderlyingInstrName();
			securitis.push_back(security);
		}
	}
	return securitis;
}

SecurityLatestData CTPConvert::convertToCTPDepthMarketData(String str){
	SecurityLatestData cTPDepthMarketData;
	vector<String> results = FCStrEx::split(str, L",");
	if (results.size() >= 44){
		int i = 0;
		cTPDepthMarketData.m_tradingDay = results[i++];
		cTPDepthMarketData.m_code = results[i++];
		String exchangeID = results[i++];
		String exchangeInstID = results[i++];
		cTPDepthMarketData.m_lastClose = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_preSettlementPrice = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_preClose = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_preOpenInterest = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_open = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_high = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_low = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_volume = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_turnover = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_openInterest = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_close = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_settlementPrice = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_upperLimit = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_lowerLimit = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_preDelta = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_currDelta = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_updateTime = results[i++];
		cTPDepthMarketData.m_updateMillisec = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_bidPrice1 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_bidVolume1 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_askPrice1 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_askVolume1 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_bidPrice2 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_bidVolume2 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_askPrice2 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_askVolume2 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_bidPrice3 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_bidVolume3 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_askPrice3 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_askVolume3 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_bidPrice4 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_bidVolume4 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_askPrice4 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_askVolume4 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_bidPrice5 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_bidVolume5 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_askPrice5 = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_askVolume5 = FCStrEx::convertStrToInt(results[i++].c_str());
		cTPDepthMarketData.m_averagePrice = FCStrEx::convertStrToDouble(results[i++].c_str());
		cTPDepthMarketData.m_actionDay = results[i++];
	}
	return cTPDepthMarketData;
}

vector<InvestorPosition> CTPConvert::convertToCTPInvestorPosition(String str){
	vector<InvestorPosition> investorPositions;
	vector<String> results = FCStrEx::split(str, L";");
	int size = (int)results.size();
	for(int i = 0; i < size; i++){
		vector<String> result = FCStrEx::split(results[i], L",");
		if(result.size() == 43){
			InvestorPosition investorPosition;
			int k = 0;
			///合约代码
			investorPosition.m_code = result[k++];
			///经纪公司代码
			investorPosition.m_brokerID = result[k++];
			///投资者代码
			investorPosition.m_investorID = result[k++];
			///持仓多空方向
			investorPosition.m_posiDirection = result[k++];
			///投机套保标志
			investorPosition.m_hedgeFlag = result[k++];
			///持仓日期
			investorPosition.m_positionDate = result[k++];
			///上日持仓
			investorPosition.m_ydPosition = FCStrEx::convertStrToInt(result[k++].c_str());
			///今日持仓
			investorPosition.m_position = FCStrEx::convertStrToInt(result[k++].c_str());
			///多头冻结
			investorPosition.m_longFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			///空头冻结
			investorPosition.m_shortFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			///开仓冻结金额
			investorPosition.m_longFrozenAmount = FCStrEx::convertStrToDouble(result[k++].c_str());
			///开仓冻结金额
			investorPosition.m_shortFrozenAmount = FCStrEx::convertStrToDouble(result[k++].c_str());
			///开仓量
			investorPosition.m_openVolume = FCStrEx::convertStrToInt(result[k++].c_str());
			///平仓量
			investorPosition.m_closeVolume = FCStrEx::convertStrToInt(result[k++].c_str());
			///开仓金额
			investorPosition.m_openAmount = FCStrEx::convertStrToDouble(result[k++].c_str());
			///平仓金额
			investorPosition.m_closeAmount = FCStrEx::convertStrToDouble(result[k++].c_str());
			///持仓成本
			investorPosition.m_positionCost = FCStrEx::convertStrToDouble(result[k++].c_str());
			///上次占用的保证金
			investorPosition.m_preMargin = FCStrEx::convertStrToDouble(result[k++].c_str());
			///占用的保证金
			investorPosition.m_useMargin = FCStrEx::convertStrToDouble(result[k++].c_str());
			///冻结的保证金
			investorPosition.m_frozenMargin = FCStrEx::convertStrToDouble(result[k++].c_str());
			///冻结的资金
			investorPosition.m_frozenCash = FCStrEx::convertStrToDouble(result[k++].c_str());
			///冻结的手续费
			investorPosition.m_frozenCommission = FCStrEx::convertStrToDouble(result[k++].c_str());
			///资金差额
			investorPosition.m_cashIn = FCStrEx::convertStrToDouble(result[k++].c_str());
			///手续费
			investorPosition.m_commission = FCStrEx::convertStrToDouble(result[k++].c_str());
			///平仓盈亏
			investorPosition.m_closeProfit = FCStrEx::convertStrToDouble(result[k++].c_str());
			///持仓盈亏
			investorPosition.m_positionProfit = FCStrEx::convertStrToDouble(result[k++].c_str());
			///上次结算价
			investorPosition.m_preSettlementPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			///本次结算价
			investorPosition.m_settlementPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			///交易日
			investorPosition.m_tradingDate = result[k++];
			///结算编号
			investorPosition.m_settlementID = FCStrEx::convertStrToInt(result[k++].c_str());
			///开仓成本
			investorPosition.m_openCost = FCStrEx::convertStrToDouble(result[k++].c_str());
			///交易所保证金
			investorPosition.m_exchangeMargin = FCStrEx::convertStrToDouble(result[k++].c_str());
			///组合成交形成的持仓
			investorPosition.m_combPosition = FCStrEx::convertStrToInt(result[k++].c_str());
			///组合多头冻结
			investorPosition.m_combLongFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			///组合空头冻结
			investorPosition.m_combShortFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			///逐日盯市平仓盈亏
			investorPosition.m_closeProfitByDate = FCStrEx::convertStrToDouble(result[k++].c_str());
			///逐笔对冲平仓盈亏
			investorPosition.m_closeProfitByTrade = FCStrEx::convertStrToDouble(result[k++].c_str());
			///今日持仓
			investorPosition.m_todayPosition = FCStrEx::convertStrToInt(result[k++].c_str());
			///保证金率
			investorPosition.m_marginRateByMoney = FCStrEx::convertStrToDouble(result[k++].c_str());
			///保证金率(按手数)
			investorPosition.m_marginRateByVolume = FCStrEx::convertStrToDouble(result[k++].c_str());
			///执行冻结
			investorPosition.m_strikeFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			///执行冻结金额
			investorPosition.m_strikeFrozenAmount = FCStrEx::convertStrToDouble(result[k++].c_str());
			///放弃执行冻结
			investorPosition.m_abandonFrozen = FCStrEx::convertStrToInt(result[k++].c_str());
			investorPositions.push_back(investorPosition);
		}
	}
	return investorPositions;
}

vector<InvestorPositionDetail> CTPConvert::convertToCTPInvestorPositionDetail(String str){
	vector<InvestorPositionDetail> investorPositionDetails;
	vector<String> results = FCStrEx::split(str, L";");
	int size = (int)results.size();
	for(int i = 0; i < size; i++){
		vector<String> result = FCStrEx::split(results[i], L",");
		if(result.size() == 43){
			InvestorPositionDetail investorPositionDetail;
			int k = 0;
			investorPositionDetail.m_code = result[k++];
			investorPositionDetail.m_brokerID = result[k++];
			investorPositionDetail.m_investorID = result[k++];
			investorPositionDetail.m_hedgeFlag = result[k++];
			investorPositionDetail.m_direction = result[k++];
			investorPositionDetail.m_openDate = result[k++];
			investorPositionDetail.m_tradeID = result[k++];
			investorPositionDetail.m_volume = FCStrEx::convertStrToInt(result[k++].c_str());
			investorPositionDetail.m_openPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_tradingDay = result[k++];
			investorPositionDetail.m_settlementID = FCStrEx::convertStrToInt(result[k++].c_str());
			investorPositionDetail.m_tradeType = result[k++];
			investorPositionDetail.m_combInstrumentID = result[k++];
			investorPositionDetail.m_exchangeID = result[k++];
			investorPositionDetail.m_closeProfitByDate = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_closeProfitByTrade = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_positionProfitByDate = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_positionProfitByTrade = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_margin = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_exchMargin = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_marginRateByMoney = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_marginRateByVolume = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_lastSettlementPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_lastSettlementPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_settlementPrice = FCStrEx::convertStrToDouble(result[k++].c_str());
			investorPositionDetail.m_closeVolume = FCStrEx::convertStrToInt(result[k++].c_str());
			investorPositionDetails.push_back(investorPositionDetail);
		}
	}
	return investorPositionDetails;
}

vector<OrderInfo> CTPConvert::convertToCTPOrderList(String str){
	vector<OrderInfo> orderInfos;
	vector<String> results = FCStrEx::split(str, L";");
	int size = (int)results.size();
	for(int i = 0; i < size; i++){
		if(results[i].size() != 0){	
			OrderInfo orderInfo = convertToCTPOrder(results[i]);
			orderInfos.push_back(orderInfo);
		}
	}
	return orderInfos;
}

OrderInfo CTPConvert::convertToCTPOrder(String str){
	OrderInfo orderInfo;
	vector<String> result = FCStrEx::split(str, L",");
	int size = (int)result.size();
	if(size == 57){
		int i = 0;
		///经纪公司代码
		orderInfo.m_brokerID = result[i++];
		///投资者代码
		orderInfo.m_investorID = result[i++];
		///合约代码
		orderInfo.m_code = result[i++];
		///报单引用
		orderInfo.m_orderRef = result[i++];
		///用户代码
		orderInfo.m_userID = result[i++];
		///报单价格条件
		orderInfo.m_orderPriceType = result[i++];
		///买卖方向
		orderInfo.m_direction = result[i++];
		///组合开平标志
		orderInfo.m_combOffsetFlag = result[i++];
		///组合投机套保标志
		orderInfo.m_combHedgeFlag = result[i++];
		///价格
		orderInfo.m_limitPrice = FCStrEx::convertStrToDouble(result[i++].c_str());
		///数量
		orderInfo.m_volumeTotalOriginal = FCStrEx::convertStrToInt(result[i++].c_str());
		///有效期类型
		orderInfo.m_timeCondition = result[i++];
		///GTD日期
		orderInfo.m_gTDDate = result[i++];
		///成交量类型
		orderInfo.m_volumeCondition = result[i++];
		///最小成交量
		orderInfo.m_minVolume = FCStrEx::convertStrToInt(result[i++].c_str());
		///触发条件
		orderInfo.m_contingentCondition = result[i++];
		///止损价
		orderInfo.m_stopPrice = FCStrEx::convertStrToDouble(result[i++].c_str());
		///强平原因
		orderInfo.m_forceCloseReason = result[i++];
		///自动挂起标志
		orderInfo.m_isAutoSuspend = FCStrEx::convertStrToInt(result[i++].c_str());
		///业务单元
		orderInfo.m_businessUnit = result[i++];
		///请求编号
		orderInfo.m_requestID = FCStrEx::convertStrToInt(result[i++].c_str());
		///本地报单编号
		orderInfo.m_orderLocalID = result[i++];
		///交易所代码
		orderInfo.m_exchangeID = result[i++];
		///会员代码
		orderInfo.m_participantID = result[i++];
		///客户代码
		orderInfo.m_clientID = result[i++];
		///合约在交易所的代码
		orderInfo.m_exchangeInstID = result[i++];
		///交易所交易员代码
		orderInfo.m_traderID = result[i++];
		///安装编号
		orderInfo.m_installID = result[i++];
		///报单提交状态
		orderInfo.m_orderSubmitStatus = result[i++];
		///报单提示序号
		orderInfo.m_notifySequence = FCStrEx::convertStrToInt(result[i++].c_str());
		///交易日
		orderInfo.m_tradingDay = result[i++];
		///结算编号
		orderInfo.m_settlementID = FCStrEx::convertStrToInt(result[i++].c_str());
		///报单编号
		orderInfo.m_orderSysID = result[i++];
		///报单来源
		orderInfo.m_orderSource = result[i++];
		///报单状态
		orderInfo.m_orderStatus = result[i++];
		///报单类型
		orderInfo.m_orderType = result[i++];
		///今成交数量
		orderInfo.m_volumeTraded = FCStrEx::convertStrToInt(result[i++].c_str());
		///剩余数量
		orderInfo.m_volumeTotal = FCStrEx::convertStrToInt(result[i++].c_str());
		///报单日期
		orderInfo.m_insertDate = result[i++];
		///委托时间
		orderInfo.m_insertTime = result[i++];
		///激活时间
		orderInfo.m_activeTime = result[i++];
		///挂起时间
		orderInfo.m_suspendTime = result[i++];
		///最后修改时间
		orderInfo.m_updateTime = result[i++];
		///撤销时间
		orderInfo.m_cancelTime = result[i++];
		///最后修改交易所交易员代码
		orderInfo.m_activeTraderID = result[i++];
		///结算会员编号
		orderInfo.m_clearingPartID = result[i++];
		///序号
		orderInfo.m_sequenceNo = FCStrEx::convertStrToInt(result[i++].c_str());
		///前置编号
		orderInfo.m_frontID = FCStrEx::convertStrToInt(result[i++].c_str());
		///会话编号
		orderInfo.m_sessionID = FCStrEx::convertStrToInt(result[i++].c_str());
		///用户端产品信息
		orderInfo.m_userProductInfo = result[i++];
		///状态信息
		orderInfo.m_statusMsg = result[i++];
		///用户强评标志
		orderInfo.m_userForceClose = FCStrEx::convertStrToInt(result[i++].c_str());
		///操作用户代码
		orderInfo.m_activeUserID = result[i++];
		///经纪公司报单编号
		orderInfo.m_brokerOrderSeq = FCStrEx::convertStrToInt(result[i++].c_str());
		///相关报单
		orderInfo.m_relativeOrderSysID = result[i++];
		///郑商所成交数量
		orderInfo.m_zCETotalTradedVolume = FCStrEx::convertStrToInt(result[i++].c_str());
		///互换单标志
		orderInfo.m_isSwapOrder = FCStrEx::convertStrToInt(result[i++].c_str());
	}
	return orderInfo;
}

TradeRecord CTPConvert::convertToCTPTrade(String str){
	TradeRecord tradeRecord;
	vector<String> result = FCStrEx::split(str, L",");
	if(result.size() == 30){
		int i = 0;
		///经纪公司代码
		tradeRecord.m_brokerID = result[i++];
		///投资者代码
		tradeRecord.m_investorID = result[i++];
		///合约代码
		tradeRecord.m_code = result[i++];
		///报单引用
		tradeRecord.m_orderRef = result[i++];
		///用户代码
		tradeRecord.m_userID = result[i++];
		///交易所代码
		tradeRecord.m_exchangeID = result[i++];
		///成交编号
		tradeRecord.m_tradeID = result[i++];
		///买卖方向
		tradeRecord.m_direction = result[i++];
		///报单编号
		tradeRecord.m_orderSysID = result[i++];
		///会员代码
		tradeRecord.m_participantID = result[i++];
		///客户代码
		tradeRecord.m_clientID = result[i++];
		///交易角色
		tradeRecord.m_tradingRole = result[i++];
		///合约在交易所的代码
		tradeRecord.m_exchangeInstID = result[i++];
		///开平标志
		tradeRecord.m_offsetFlag = result[i++];
		///投机套保标志
		tradeRecord.m_hedgeFlag = result[i++];
		///价格
		tradeRecord.m_price = FCStrEx::convertStrToDouble(result[i++].c_str());
		///数量
		tradeRecord.m_volume = FCStrEx::convertStrToInt(result[i++].c_str());
		///成交时期
		tradeRecord.m_tradeDate = result[i++];
		///成交时间
		tradeRecord.m_tradeTime = result[i++];
		///成交类型
		tradeRecord.m_tradeType = result[i++];
		///成交价来源
		tradeRecord.m_priceSource = result[i++];
		///交易所交易员代码
		tradeRecord.m_traderID = result[i++];
		///本地报单编号
		tradeRecord.m_orderLocalID = result[i++];
		///结算会员编号
		tradeRecord.m_clearingPartID = result[i++];
		///业务单元
		tradeRecord.m_businessUnit = result[i++];
		///序号
		tradeRecord.m_sequenceNo = FCStrEx::convertStrToInt(result[i++].c_str());
		///交易日
		tradeRecord.m_tradingDay = result[i++];
		///结算编号
		tradeRecord.m_settlementID = FCStrEx::convertStrToInt(result[i++].c_str());
		///经纪公司报单编号
		tradeRecord.m_brokerOrderSeq = FCStrEx::convertStrToInt(result[i++].c_str());
		///成交来源
		tradeRecord.m_tradeSource = result[i++];
	}
	return tradeRecord;
}

vector<TradeRecord> CTPConvert::convertToCTPTradeRecords(String str){
	vector<TradeRecord> tradeRecords;
	vector<String> results = FCStrEx::split(str, L";");
	int size = (int)results.size();
	for(int i = 0 ; i < size ; i++){
		if(results[i].size() != 0){
			TradeRecord tradeRecord =  convertToCTPTrade(results[i]);
			tradeRecords.push_back(tradeRecord);
		}
	}
	return  tradeRecords;
}