library("Rcpp")#加载RCpp 调用c++ 方法
library("hash")#加载hash, 返回hash表结构数据
sourceCpp("iCTP.cpp")

lordMT.askClose <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(askClose(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.askCloseToday <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(askCloseToday(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.askOpen <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(askOpen(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.bidClose <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(bidClose(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.bidCloseToday <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(bidCloseToday(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.bidOpen <- function(ctpID, requestID, code, price, qty, timeCondition, orderRef)
{
  return(bidOpen(ctpID, requestID, code, price, qty, timeCondition, orderRef))
}

lordMT.cancelOrder <- function(ctpID, requestID, exchangeID, orderSysID, orderRef)
{
  return(cancelOrder(ctpID, requestID, exchangeID, orderSysID, orderRef))
}

#登录成功后创建
lordMT.create <- function()
{
  create()
}

##GenerateReqID
lordMT.generateReqID <- function(ctpID)
{
  return(generateReqID(ctpID))
}

#TODO
lordMT.getAccountData <- function(ctpID)
{
  cppResult <- getAccountData(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("brokerID", 
            "accountID", 
            "preMortgage", 
            "preCredit", 
            "preDeposit", 
            "preBalance", 
            "preMargin", 
            "interestBase", 
            "interest", 
            "deposit", 
            "withdraw", 
            "frozenMargin", 
            "frozenCash", 
            "frozenCommission", 
            "currMargin", 
            "cashIn", 
            "commission", 
            "closeProfit", 
            "positionProfit", 
            "balance", 
            "available", 
            "withdrawQuota", 
            "reserve", 
            "tradingDay", 
            "settlementID", 
            "credit", 
            "mortgage", 
            "exchangeMargin", 
            "deliveryMargin", 
            "exchangeDeliveryMargin", 
            "reserveBalance", 
            "currencyID", 
            "preFundMortgageIn", 
            "preFundMortgageOut", 
            "fundMortgageIn", 
            "fundMortgageOut", 
            "fundMortgageAvailable", 
            "mortgageableFund", 
            "specProductMargin", 
            "specProductFrozenMargin", 
            "specProductCommission", 
            "specProductFrozenCommission", 
            "specProductPositionProfit", 
            "specProductCloseProfit", 
            "specProductPositionProfitByAlg", 
            "specProductExchangeMargin", 
            "dynamicBalance", 
            "risk")
    return(hash(keys = rowNames, values = localIst))
  }
}

lordMT.getBrokerID <- function(ctpID)
{
  return(GetBrokerID(ctpID))
}

lordMT.getCommissionRate <- function(ctpID, code)
{
	cppResult <- GetCommissionRate(ctpID, code)
	if(cppResult == "")
	{
		return("")
	}
	localIst <- unlist(strsplit(cppResult, ","))
	rowNames <- c("code", 
            "investorRange", 
            "brokerID", 
            "investorID", 
            "openRatioByMoney", 
            "openRatioByVolume", 
            "closeRatioByMoney", 
            "closeRatioByVolume", 
            "closeTodayRatioByMoney", 
            "closeTodayRatioByVolume")
	return(hash(keys = rowNames, values = localIst)) 
}

lordMT.getDepthMarketData <- function(ctpID)
{
  cppResult <- getDepthMarketData(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("tradingDay", 
                "code", 
                "exchangeID", 
                "exchangeInstID", 
                "close", 
                "preSettlementPrice", 
                "preClose", 
                "preOpenInterest", 
                "open", 
                "high", 
                "low", 
                "volume", 
                "turnover", 
                "openInterest", 
                "lastClose", 
                "settlementPrice", 
                "upperLimit", 
                "lowerLimit", 
                "preDelta", 
                "currDelta", 
                "updateTime", 
                "updateMillisec", 
                "bidPrice1", 
                "bidVolume1", 
                "askPrice1", 
                "askVolume1", 
                "bidPrice2", 
                "bidVolume2", 
                "askPrice2", 
                "askVolume2", 
                "bidPrice3", 
                "bidVolume3", 
                "askPrice3", 
                "askVolume3", 
                "bidPrice4", 
                "bidVolume4", 
                "askPrice4", 
                "askVolume4", 
                "bidPrice5", 
                "bidVolume5", 
                "askPrice5", 
                "askVolume5", 
                "averagePrice", 
                "actionDay")
    return(hash(keys = rowNames, values = localIst))
  }
}

#TODO
lordMT.getInstrumentsData <- function(ctpID)
{
  temp <- getInstrumentsData(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("instrumentID", 
                "exchangeID", 
                "instrumentName", 
                "exchangeInstID", 
                "productID", 
                "productClass", 
                "deliveryYear", 
                "deliveryMonth", 
                "maxMarketOrderVolume", 
                "minMarketOrderVolume", 
                "maxLimitOrderVolume", 
                "minLimitOrderVolume", 
                "volumeMultiple", 
                "priceTick", 
                "createDate", 
                "openDate", 
                "expireDate", 
                "startDelivDate", 
                "endDelivDate", 
                "instLifePhase", 
                "isTrading", 
                "positionType", 
                "positionDateType",    
                "longMarginRatio", 
                "shortMarginRatio", 
                "maxMarginSideAlgorithm", 
                "underlyingInstrID", 
                "strikePrice", 
                "optionsType", 
                "underlyingMultiple", 
                "combinationType")
    return(hash(keys = rowNames, values = localIst))
  }
}

lordMT.getInvestorID <- function(ctpID)
{
  return(getInvestorID(ctpID))
}

#TODO
lordMT.getMarginRate <- function(ctpID, code)
{
  temp <- getMarginRate(ctpID, code)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("code", 
            "brokerID", 
            "investorID", 
            "hedgeFlag", 
            "longMarginRatioByMoney", 
            "longMarginRatioByVolume", 
            "shortMarginRatioByMoney", 
            "shortMarginRatioByVolume", 
            "isRelativel")
    return(hash(keys = rowNames, values = localIst))
  }
}

#TODO
lordMT.getPositionData <- function(ctpID)
{
  temp <- getPositionData(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("code", 
                "brokerID", 
                "investorID", 
                "posiDirection", 
                "hedgeFlag", 
                "positionDate", 
                "ydPosition", 
                "position", 
                "longFrozen", 
                "shortFrozen", 
                "longFrozenAmount", 
                "shortFrozenAmount", 
                "openVolume", 
                "closeVolume", 
                "openAmount", 
                "closeAmount", 
                "positionCost", 
                "preMargin", 
                "useMargin", 
                "frozenMargin", 
                "frozenCash", 
                "frozenCommission", 
                "cashIn", 
                "margin", 
                "floatProfit", 
                "positionProfit", 
                "preSettlementPrice", 
                "settlementPrice", 
                "tradingDate", 
                "settlementID", 
                "openCost", 
                "exchangeMargin", 
                "combPosition", 
                "combLongFrozen", 
                "combShortFrozen", 
                "closeProfitByDate", 
                "closeProfitByTrade", 
                "todayPosition", 
                "marginRateByMoney", 
                "marginRateByVolume", 
                "strikeFrozen", 
                "strikeFrozenAmount", 
                "abandonFrozen", 
                "openPrice")
    return(hash(keys = rowNames, values = localIst))
  }
}

#TODO
lordMT.getPositionDetailData <- function(ctpID)
{
  temp <- getPositionDetailData(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("code", 
                "brokerID", 
                "investorID", 
                "hedgeFlag", 
                "direction", 
                "openDate", 
                "tradeID", 
                "volume", 
                "openPrice", 
                "tradingDay", 
                "settlementID", 
                "tradeType", 
                "combInstrumentID", 
                "exchangeID", 
                "closeProfitByDate", 
                "closeProfitByTrade", 
                "positionProfitByDate", 
                "positionProfitByTrade", 
                "margin", 
                "exchMargin", 
                "marginRateByMoney", 
                "marginRateByVolume", 
                "lastSettlementPrice", 
                "lastSettlementPrice", 
                "settlementPrice", 
                "closeVolume")
    return(hash(keys = rowNames, values = localIst))
  }
}

#TODO
lordMT.getOrderInfo <- function(ctpID)
{
  temp <- getOrderInfo(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("brokerID", 
            "investorID", 
            "code", 
            "orderRef", 
            "userID", 
            "orderPriceType", 
            "direction", 
            "combOffsetFlag", 
            "combHedgeFlag", 
            "limitPrice", 
            "volumeTotalOriginal", 
            "timeCondition", 
            "gTDDate", 
            "volumeCondition", 
            "minVolume", 
            "contingentCondition", 
            "stopPrice", 
            "forceCloseReason", 
            "isAutoSuspend", 
            "businessUnit", 
            "requestID", 
            "orderLocalID", 
            "exchangeID", 
            "participantID", 
            "clientID", 
            "exchangeInstID", 
            "traderID", 
            "installID", 
            "orderSubmitStatus", 
            "notifySequence", 
            "tradingDay", 
            "settlementID", 
            "orderSysID", 
            "orderSource", 
            "orderStatus", 
            "orderType", 
            "volumeTraded", 
            "volumeTotal", 
            "insertDate", 
            "insertTime", 
            "activeTime", 
            "suspendTime", 
            "updateTime", 
            "cancelTime", 
            "activeTraderID", 
            "clearingPartID", 
            "sequenceNo", 
            "frontID", 
            "sessionID", 
            "userProductInfo", 
            "statusMsg", 
            "userForceClose", 
            "activeUserID", 
            "brokerOrderSeq", 
            "relativeOrderSysID", 
            "zCETotalTradedVolume", 
            "isSwapOrder")
    return(hash(keys = rowNames, values = localIst))
  }
}

#TODO
lordMT.getOrderInfos <- function(ctpID)
{
  temp <- getOrderInfos(ctpID)
  return(temp)
}

lordMT.getPassword <- function(ctpID)
{
	temp <- getPassword(ctpID)
	return(temp)
}

lordMT.getSessionID <- function(ctpID)
{
  temp <- getSessionID(ctpID)
  return(temp)
}

#TODO
lordMT.getTradeRecord <- function(ctpID)
{
  temp <- getTradeRecord(ctpID)
  if(cppResult == "")
  {
    return("")
  }
  else
  {
    localIst <- unlist(strsplit(cppResult, ","))
    rowNames <- c("brokerID", 
            "investorID", 
            "code", 
            "orderRef", 
            "userID", 
            "exchangeID", 
            "tradeID", 
            "direction", 
            "orderSysID", 
            "participantID", 
            "clientID", 
            "tradingRole", 
            "exchangeInstID", 
            "offsetFlag", 
            "hedgeFlag", 
            "price", 
            "volume", 
            "tradeDate", 
            "tradeTime", 
            "tradeType", 
            "priceSource", 
            "traderID", 
            "orderLocalID", 
            "clearingPartID", 
            "businessUnit", 
            "sequenceNo", 
            "tradingDay", 
            "settlementID", 
            "brokerOrderSeq", 
            "tradeSource", 
            "commission")
    return(hash(keys = rowNames, values = localIst))
  }
}

lordMT.getTradeRecords <- function(ctpID)
{
  temp <- getTradeRecords(ctpID)
}

lordMT.getTradingDate <- function(ctpID)
{
  temp <- getTradingDate(ctpID)
  return(temp)
}

lordMT.getTradingTime <- function(ctpID)
{
  temp <- getTradingTime(ctpID)
  return(temp)
}

lordMT.isClearanced <- function(ctpID)
{
  temp <- isClearanced(ctpID)
  return(temp)
}

lordMT.isClearanceTime <- function(ctpID)
{
  temp <- isClearanceTime(ctpID)
  return(temp)
}

lordMT.isDataOk <- function(ctpID)
{
  temp <- isDataOk(ctpID)
  return(temp)
}

lordMT.isMdLogined <- function(ctpID)
{
  return(isMdLogined(ctpID))
}

lordMT.isTdLogined <- function(ctpID)
{
  return(isTdLogined(ctpID))
}

lordMT.isTradingTime <- function(ctpID)
{
  return(isTradingTime(ctpID))
}

lordMT.isTradingTimeExact <- function(ctpID, code)
{
  return(isTradingTimeExact(ctpID, code))
}

lordMT.reqCommissionRate <- function(ctpID, code, requestID)
{
  return(reqCommissionRate(ctpID, code, requestID))
}

lordMT.reqQrySettlementInfoConfirm <- function(ctpID, requestID)
{
  return(reqQrySettlementInfoConfirm(ctpID, requestID))
}

lordMT.reqQrySettlementInfo <- function(ctpID, requestID, code)
{
  return(reqQrySettlementInfo(ctpID, requestID, code))
}

lordMT.reqMarginRate <- function(ctpID, code, requestID)
{
  return(reqMarginRate(ctpID, code, requestID))
}

#Start
lordMT.start <- function(ctpID, ctpRequestID, tradIP, quoteIP, brokerID, userID, userPWd)
{
  return(start(ctpID, ctpRequestID, tradIP, quoteIP, brokerID, userID, userPWd))
}

lordMT.subMarketDatas <- function(ctpID, ctpRequestID, stockID)
{
  return (subMarketDatas(ctpID, ctpRequestID, stockID))
}

lordMT.unSubMarketDatas <- function(ctpID, requestID, codes)
{
  return(unSubMarketDatas(ctpID, requestID, codes))
}


