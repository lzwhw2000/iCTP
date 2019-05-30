/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp;

import java.util.*;
import ctp.model.*;

/**
 * CTP数据转换方法
 * 
 * @author todd
 *
 */
public abstract class CTPConvert {
	/**
	 * 转换CTP深度市场数据
	 * 
	 * @param result
	 * @return
	 */
	public static SecurityLatestData ConvertToCTPDepthMarketData(String result) {
		String[] results = result.split(",");
		SecurityLatestData cTPDepthMarketData = null;
		if (results.length >= 44) {
			cTPDepthMarketData = new SecurityLatestData();
			int i = 0;
			cTPDepthMarketData.m_tradingDay = results[i++];
			cTPDepthMarketData.m_code = results[i++];
			// String exchangeID = results[i++];
			// String exchangeInstID = results[i++];
			cTPDepthMarketData.m_lastClose = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_preSettlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_preClose = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_preOpenInterest = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_open = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_high = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_low = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_volume = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_turnover = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_openInterest = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_close = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_settlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_upperLimit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_lowerLimit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_preDelta = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_currDelta = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_updateTime = results[i++];
			cTPDepthMarketData.m_updateMillisec = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_bidPrice1 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_bidVolume1 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_askPrice1 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_askVolume1 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_bidPrice2 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_bidVolume2 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_askPrice2 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_askVolume2 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_bidPrice3 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_bidVolume3 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_askPrice3 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_askVolume3 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_bidPrice4 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_bidVolume4 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_askPrice4 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_askVolume4 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_bidPrice5 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_bidVolume5 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_askPrice5 = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_askVolume5 = FCStrEx.ConvertStrToInt(results[i++]);
			cTPDepthMarketData.m_averagePrice = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPDepthMarketData.m_actionDay = results[i++];
		}
		return cTPDepthMarketData;
	}

	/**
	 * 转换CTP合约信息
	 * 
	 * @param str
	 * @return
	 */
	public static List<Security> ConvertToCTPInstrumentDatas(String str) {
		String[] strs = str.split(";");
		int size = strs.length;
		List<Security> cTPInstrumentDatas = new ArrayList<Security>();
		for (int i = 0; i < size; i++) {
			String[] results = strs[i].split(",");
			Security cTPInstrumentData = new Security();
			if (results.length == 31) {
				int j = 0;
				cTPInstrumentData.m_instrumentID = results[j++];
				cTPInstrumentData.m_exchangeID = results[j++];
				cTPInstrumentData.m_instrumentName = results[j++];
				cTPInstrumentData.m_exchangeInstID = results[j++];
				cTPInstrumentData.m_productID = results[j++];
				cTPInstrumentData.m_productClass = results[j++];
				cTPInstrumentData.m_deliveryYear = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_deliveryMonth = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_maxMarketOrderVolume = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_minMarketOrderVolume = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_maxLimitOrderVolume = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_minLimitOrderVolume = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_volumeMultiple = FCStrEx.ConvertStrToInt(results[j++]);
				cTPInstrumentData.m_priceTick = FCStrEx.ConvertStrToDouble(results[j++]);
				cTPInstrumentData.m_createDate = results[j++];
				cTPInstrumentData.m_openDate = results[j++];
				cTPInstrumentData.m_expireDate = results[j++];
				cTPInstrumentData.m_startDelivDate = results[j++];
				cTPInstrumentData.m_endDelivDate = results[j++];
				cTPInstrumentData.m_instLifePhase = results[j++];
				cTPInstrumentData.m_isTrading = results[j++];
				cTPInstrumentData.m_positionType = results[j++];
				cTPInstrumentData.m_positionDateType = results[j++];
				cTPInstrumentData.m_longMarginRatio = FCStrEx.ConvertStrToDouble(results[j++]);
				cTPInstrumentData.m_shortMarginRatio = FCStrEx.ConvertStrToDouble(results[j++]);
				cTPInstrumentData.m_maxMarginSideAlgorithm = results[j++];
				cTPInstrumentData.m_underlyingInstrID = results[j++];
				cTPInstrumentData.m_strikePrice = FCStrEx.ConvertStrToDouble(results[j++]);
				cTPInstrumentData.m_optionsType = results[j++];
				cTPInstrumentData.m_underlyingMultiple = FCStrEx.ConvertStrToDouble(results[j++]);
				cTPInstrumentData.m_combinationType = results[j++];
				cTPInstrumentData.GetNnderlyingInstrName();
				cTPInstrumentDatas.add(cTPInstrumentData);
			}
		}
		return cTPInstrumentDatas;
	}

	/**
	 * 转换CTP持仓信息
	 * 
	 * @param result
	 * @return
	 */
	public static List<InvestorPosition> ConvertToCTPInvestorPosition(String result) {
		List<InvestorPosition> list = new ArrayList<InvestorPosition>();
		String[] strs = result.split(";");
		int len = strs.length;
		for (int p = 0; p < len; p++) {
			String[] results = strs[p].split(",");
			if (results.length == 43) {
				InvestorPosition cTPInvestorPosition = new InvestorPosition();
				int i = 0;
				cTPInvestorPosition.m_code = results[i++];
				cTPInvestorPosition.m_brokerID = results[i++];
				cTPInvestorPosition.m_investorID = results[i++];
				cTPInvestorPosition.m_posiDirection = results[i++];
				cTPInvestorPosition.m_hedgeFlag = results[i++];
				cTPInvestorPosition.m_positionDate = results[i++];
				cTPInvestorPosition.m_ydPosition = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_position = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_longFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_shortFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_longFrozenAmount = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_shortFrozenAmount = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_openVolume = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_closeVolume = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_openAmount = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_closeAmount = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_positionCost = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_preMargin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_useMargin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_frozenMargin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_frozenCash = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_frozenCommission = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_cashIn = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_commission = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_closeProfit = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_positionProfit = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_preSettlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_settlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_tradingDate = results[i++];
				cTPInvestorPosition.m_settlementID = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_openCost = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_exchangeMargin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_combPosition = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_combLongFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_combShortFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_closeProfitByDate = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_closeProfitByTrade = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_todayPosition = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_marginRateByMoney = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_marginRateByVolume = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_strikeFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPosition.m_strikeFrozenAmount = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPosition.m_abandonFrozen = FCStrEx.ConvertStrToInt(results[i++]);
				list.add(cTPInvestorPosition);
			}
		}
		return list;
	}

	/**
	 * 转换CTP持仓明细信息
	 * 
	 * @param result
	 * @return
	 */
	public static List<InvestorPositionDetail> ConvertToCTPInvestorPositionDetail(String result) {
		List<InvestorPositionDetail> list = new ArrayList<InvestorPositionDetail>();
		String[] strs = result.split(";");
		int len = strs.length;
		for (int p = 0; p < len; p++) {
			String[] results = strs[p].split(",");
			if (results.length == 43) {
				InvestorPositionDetail cTPInvestorPositionDetail = new InvestorPositionDetail();
				int i = 0;
				cTPInvestorPositionDetail.m_code = results[i++];
				cTPInvestorPositionDetail.m_brokerID = results[i++];
				cTPInvestorPositionDetail.m_investorID = results[i++];
				cTPInvestorPositionDetail.m_hedgeFlag = results[i++];
				cTPInvestorPositionDetail.m_direction = results[i++];
				cTPInvestorPositionDetail.m_openDate = results[i++];
				cTPInvestorPositionDetail.m_tradeID = results[i++];
				cTPInvestorPositionDetail.m_volume = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPositionDetail.m_openPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_tradingDay = results[i++];
				cTPInvestorPositionDetail.m_settlementID = FCStrEx.ConvertStrToInt(results[i++]);
				cTPInvestorPositionDetail.m_tradeType = results[i++];
				cTPInvestorPositionDetail.m_combInstrumentID = results[i++];
				cTPInvestorPositionDetail.m_exchangeID = results[i++];
				cTPInvestorPositionDetail.m_closeProfitByDate = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_closeProfitByTrade = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_positionProfitByDate = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_positionProfitByTrade = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_margin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_exchMargin = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_marginRateByMoney = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_marginRateByVolume = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_lastSettlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_lastSettlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_settlementPrice = FCStrEx.ConvertStrToDouble(results[i++]);
				cTPInvestorPositionDetail.m_closeVolume = FCStrEx.ConvertStrToInt(results[i++]);
				list.add(cTPInvestorPositionDetail);
			}
		}
		return list;
	}

	/**
	 * 转换CTP报单信息
	 * 
	 * @param result
	 * @return
	 */
	public static OrderInfo ConvertToCTPOrder(String result) {
		String[] results = result.split(",");
		OrderInfo cTPOrder = null;
		if (results.length == 57) {
			cTPOrder = new OrderInfo();
			int i = 0;
			cTPOrder.m_brokerID = results[i++];
			cTPOrder.m_investorID = results[i++];
			cTPOrder.m_code = results[i++];
			cTPOrder.m_orderRef = results[i++];
			cTPOrder.m_userID = results[i++];
			cTPOrder.m_orderPriceType = results[i++];
			cTPOrder.m_direction = results[i++];
			cTPOrder.m_combOffsetFlag = results[i++];
			cTPOrder.m_combHedgeFlag = results[i++];
			cTPOrder.m_limitPrice = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPOrder.m_volumeTotalOriginal = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_timeCondition = results[i++];
			cTPOrder.m_gTDDate = results[i++];
			cTPOrder.m_volumeCondition = results[i++];
			cTPOrder.m_minVolume = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_contingentCondition = results[i++];
			cTPOrder.m_stopPrice = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPOrder.m_forceCloseReason = results[i++];
			cTPOrder.m_isAutoSuspend = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_businessUnit = results[i++];
			cTPOrder.m_requestID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_orderLocalID = results[i++];
			cTPOrder.m_exchangeID = results[i++];
			cTPOrder.m_participantID = results[i++];
			cTPOrder.m_clientID = results[i++];
			cTPOrder.m_exchangeInstID = results[i++];
			cTPOrder.m_traderID = results[i++];
			cTPOrder.m_installID = results[i++];
			cTPOrder.m_orderSubmitStatus = results[i++];
			cTPOrder.m_notifySequence = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_tradingDay = results[i++];
			cTPOrder.m_settlementID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_orderSysID = results[i++];
			cTPOrder.m_orderSource = results[i++];
			cTPOrder.m_orderStatus = results[i++];
			cTPOrder.m_orderType = results[i++];
			cTPOrder.m_volumeTraded = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_volumeTotal = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_insertDate = results[i++];
			cTPOrder.m_insertTime = results[i++];
			cTPOrder.m_activeTime = results[i++];
			cTPOrder.m_suspendTime = results[i++];
			cTPOrder.m_updateTime = results[i++];
			cTPOrder.m_cancelTime = results[i++];
			cTPOrder.m_activeTraderID = results[i++];
			cTPOrder.m_clearingPartID = results[i++];
			cTPOrder.m_sequenceNo = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_frontID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_sessionID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_userProductInfo = results[i++];
			cTPOrder.m_statusMsg = results[i++];
			cTPOrder.m_userForceClose = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_activeUserID = results[i++];
			cTPOrder.m_brokerOrderSeq = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_relativeOrderSysID = results[i++];
			cTPOrder.m_zCETotalTradedVolume = FCStrEx.ConvertStrToInt(results[i++]);
			cTPOrder.m_isSwapOrder = FCStrEx.ConvertStrToInt(results[i++]);
		}
		return cTPOrder;
	}

	/**
	 * 转换CTP报单信息
	 * 
	 * @param result
	 * @return
	 */
	public static List<OrderInfo> ConvertToCTPOrderList(String result) {
		List<OrderInfo> lst = new ArrayList<OrderInfo>();
		String[] results = result.split(";");
		int len = results.length;
		for (int i = 0; i < len; i++) {
			OrderInfo order = ConvertToCTPOrder(results[i]);
			if (order != null) {
				lst.add(order);
			}
		}
		return lst;
	}

	/**
	 * 转换CTP交易信息
	 * 
	 * @param result
	 * @return
	 */
	public static TradeRecord ConvertToCTPTrade(String result) {
		String[] results = result.split(",");
		TradeRecord cTPTrade = null;
		if (results.length == 30) {
			cTPTrade = new TradeRecord();
			int i = 0;
			cTPTrade.m_brokerID = results[i++];
			cTPTrade.m_investorID = results[i++];
			cTPTrade.m_code = results[i++];
			cTPTrade.m_orderRef = results[i++];
			cTPTrade.m_userID = results[i++];
			cTPTrade.m_exchangeID = results[i++];
			cTPTrade.m_tradeID = results[i++];
			cTPTrade.m_direction = results[i++];
			cTPTrade.m_orderSysID = results[i++];
			cTPTrade.m_participantID = results[i++];
			cTPTrade.m_clientID = results[i++];
			cTPTrade.m_tradingRole = results[i++];
			cTPTrade.m_exchangeInstID = results[i++];
			cTPTrade.m_offsetFlag = results[i++];
			cTPTrade.m_hedgeFlag = results[i++];
			cTPTrade.m_price = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTrade.m_volume = FCStrEx.ConvertStrToInt(results[i++]);
			cTPTrade.m_tradeDate = results[i++];
			cTPTrade.m_tradeTime = results[i++];
			cTPTrade.m_tradeType = results[i++];
			cTPTrade.m_priceSource = results[i++];
			cTPTrade.m_traderID = results[i++];
			cTPTrade.m_orderLocalID = results[i++];
			cTPTrade.m_clearingPartID = results[i++];
			cTPTrade.m_businessUnit = results[i++];
			cTPTrade.m_sequenceNo = FCStrEx.ConvertStrToInt(results[i++]);
			cTPTrade.m_tradingDay = results[i++];
			cTPTrade.m_settlementID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPTrade.m_brokerOrderSeq = FCStrEx.ConvertStrToInt(results[i++]);
			cTPTrade.m_tradeSource = results[i++];
		}
		return cTPTrade;
	}

	/**
	 * 转换CTP交易信息列表
	 * 
	 * @param result
	 * @return
	 */
	public static List<TradeRecord> ConvertToCTPTradeRecords(String result) {
		List<TradeRecord> list = new ArrayList<TradeRecord>();
		String[] results = result.split(";");
		int len = results.length;
		for (int i = 0; i < len; i++) {
			TradeRecord trade = ConvertToCTPTrade(results[i]);
			if (trade != null) {
				list.add(trade);
			}
		}
		return list;
	}

	/**
	 * 转换成CTP资金账户
	 * 
	 * @param result
	 * @return
	 */
	public static AccountData ConvertToCTPTradingAccount(String result) {
		String[] results = result.split(",");
		AccountData cTPTradingAccount = null;
		if (results.length == 46) {
			cTPTradingAccount = new AccountData();
			int i = 0;
			cTPTradingAccount.m_brokerID = results[i++];
			cTPTradingAccount.m_accountID = results[i++];
			cTPTradingAccount.m_preMortgage = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_preCredit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_preDeposit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_preBalance = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_preMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_interestBase = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_interest = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_deposit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_withdraw = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_frozenMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_frozenCash = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_frozenCommission = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_currMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_cashIn = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_commission = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_closeProfit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_positionProfit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_balance = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_available = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_withdrawQuota = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_reserve = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_tradingDay = results[i++];
			cTPTradingAccount.m_settlementID = FCStrEx.ConvertStrToInt(results[i++]);
			cTPTradingAccount.m_credit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_mortgage = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_exchangeMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_deliveryMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_exchangeDeliveryMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_reserveBalance = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_currencyID = results[i++];
			cTPTradingAccount.m_preFundMortgageIn = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_preFundMortgageOut = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_fundMortgageIn = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_fundMortgageOut = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_fundMortgageAvailable = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_mortgageableFund = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductFrozenMargin = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductCommission = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductFrozenCommission = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductPositionProfit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductCloseProfit = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductPositionProfitByAlg = FCStrEx.ConvertStrToDouble(results[i++]);
			cTPTradingAccount.m_specProductExchangeMargin = FCStrEx.ConvertStrToDouble(results[i++]);
		}
		return cTPTradingAccount;
	}
}
