classdef CTPMTM
    properties
    end
    
    methods
        function ctp = CTPMTM()
            mex CTPMTMAT.cpp
        end
    end
    
    methods
        function[status] = askClose(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(1, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = askCloseToday(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(2, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = askOpen(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(3, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = bidClose(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(4, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = bidCloseToday(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(5, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = bidOpen(self, ctpID, requestID, code, price, qty, timeCondition, orderRef)
            status = str2num(CTPMTMAT(6, ctpID, requestID, code, price, qty, timeCondition, orderRef));
        end
        
        function[status] = cancelOrder(self, ctpID, requestID, exchangeID, orderSysID, orderRef)
            status = str2num(CTPMTMAT(7, ctpID, requestID, exchangeID, orderSysID, orderRef));
        end
        
        function[ctpid] = create(self)
            ctpid = str2num(CTPMTMAT(8));
        end
        
        function[reqID] = generateReqID(self, ctpid)
            reqID = str2num(CTPMTMAT(9, ctpid));
        end
        
        function[result] = getAccountData(self, ctpID)
            strRet = CTPMTMAT(10, ctpID);
            if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end			
			titleStr = 'brokerID,accountID,preMortgage,preCredit,preDeposit,preBalance,preMargin,interestBase,interest,deposit,withdraw,frozenMargin,frozenCash,frozenCommission,currMargin,cashIn,commission,closeProfit,positionProfit,balance,available,withdrawQuota,reserve,tradingDay,settlementID,credit,mortgage,exchangeMargin,deliveryMargin,exchangeDeliveryMargin,reserveBalance,currencyID,preFundMortgageIn,preFundMortgageOut,fundMortgageIn,fundMortgageOut,fundMortgageAvailable,mortgageableFund,specProductMargin,specProductFrozenMargin,specProductCommission,specProductFrozenCommission,specProductPositionProfit,specProductCloseProfit,specProductPositionProfitByAlg,specProductExchangeMargin,dynamicBalance,risk';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getBrokerID(self, ctpID)
            result = CTPMTMAT(11, ctpID);
        end
        function[result] getCommissionRate(self, ctpID, code)
            strRet = CTPMTMAT(12, ctpID, code);
			if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end			
			titleStr = 'code,investorRange,brokerID,investorID,openRatioByMoney,openRatioByVolume,closeRatioByMoney,closeRatioByVolume,closeTodayRatioByMoney,closeTodayRatioByVolume';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
		
        function[result] = getDepthMarketData(self, ctpid)
            strmd = CTPMTMAT(13, ctpid);
            if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'tradingDay,code,exchangeID,exchangeInstID,close,preSettlementPrice,preClose,preOpenInterest,open,high,low,volume,turnover,openInterest,lastClose,settlementPrice,upperLimit,lowerLimit,preDelta,currDelta,updateTime,updateMillisec,bidPrice1,bidVolume1,askPrice1,askVolume1,bidPrice2,bidVolume2,askPrice2,askVolume2,bidPrice3,bidVolume3,askPrice3,askVolume3,bidPrice4,bidVolume4,askPrice4,askVolume4,bidPrice5,bidVolume5,askPrice5,askVolume5,averagePrice,actionDay';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getInstrumentsData(self, ctpID)
            strmd = CTPMTMAT(14, ctpID);
            if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'instrumentID,exchangeID,instrumentName,exchangeInstID,productID,productClass,deliveryYear,deliveryMonth,maxMarketOrderVolume,minMarketOrderVolume,maxLimitOrderVolume,minLimitOrderVolume,volumeMultiple,priceTick,createDate,openDate,expireDate,startDelivDate,endDelivDate,instLifePhase,isTrading,positionType,positionDateType,longMarginRatio,shortMarginRatio,maxMarginSideAlgorithm,underlyingInstrID,strikePrice,optionsType,underlyingMultiple,combinationType';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getInvestorID(self, ctpID)
            CTPMTMAT(15, ctpID);
        end
        
        function[result] = GetMarginRate(self, ctpID, code)
		   strmd = CTPMTMAT(17, ctpID, code);
           if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'code,brokerID,investorID,hedgeFlag,longMarginRatioByMoney,longMarginRatioByVolume,shortMarginRatioByMoney,shortMarginRatioByVolume,isRelativel';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getPositionData(self, ctpID)
            strmd = CTPMTMAT(16, ctpID);
            if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'code,brokerID,investorID,posiDirection,hedgeFlag,positionDate,ydPosition,position,longFrozen,shortFrozen,longFrozenAmount,shortFrozenAmount,openVolume,closeVolume,openAmount,closeAmount,positionCost,preMargin,useMargin,frozenMargin,frozenCash,frozenCommission,cashIn,margin,floatProfit,positionProfit,preSettlementPrice,settlementPrice,tradingDate,settlementID,openCost,exchangeMargin,combPosition,combLongFrozen,combShortFrozen,closeProfitByDate,closeProfitByTrade,todayPosition,marginRateByMoney,marginRateByVolume,strikeFrozen,strikeFrozenAmount,abandonFrozen,openPrice';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getPositionDetailData(self, ctpID)
            strmd = CTPMTMAT(18, ctpID);
            if strmd == 'E' 
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'code,brokerID,investorID,hedgeFlag,direction,openDate,tradeID,volume,openPrice,tradingDay,settlementID,tradeType,combInstrumentID,exchangeID,closeProfitByDate,closeProfitByTrade,positionProfitByDate,positionProfitByTrade,margin,exchMargin,marginRateByMoney,marginRateByVolume,lastSettlementPrice,lastSettlementPrice,settlementPrice,closeVolume';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getOrderInfo(self, ctpID)
            strmd = CTPMTMAT(19, ctpID);
            if strmd == 'E' 
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'brokerID,investorID,code,orderRef,userID,orderPriceType,direction,combOffsetFlag,combHedgeFlag,limitPrice,volumeTotalOriginal,timeCondition,gTDDate,volumeCondition,minVolume,contingentCondition,stopPrice,forceCloseReason,isAutoSuspend,businessUnit,requestID,orderLocalID,exchangeID,participantID,clientID,exchangeInstID,traderID,installID,orderSubmitStatus,notifySequence,tradingDay,settlementID,orderSysID,orderSource,orderStatus,orderType,volumeTraded,volumeTotal,insertDate,insertTime,activeTime,suspendTime,updateTime,cancelTime,activeTraderID,clearingPartID,sequenceNo,frontID,sessionID,userProductInfo,statusMsg,userForceClose,activeUserID,brokerOrderSeq,relativeOrderSysID,zCETotalTradedVolume,isSwapOrder';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getOrderInfos(self, ctpID)
            CTPMTMAT(20, ctpID);
        end
        
        function[result] = getPassword(self, ctpID)
            CTPMTMAT(21, ctpID);
        end
        
        function[result] = getSessionID(self,  ctpID)
             CTPMTMAT(22, ctpID);
        end
        
        function[result] = getTradeRecord(self, ctpID)
            strmd = CTPMTMAT(23, ctpID);
            if strmd == 'E'
                result = java.util.Hashtable;
                result.put(1, 0);
                return;
            end
            titleStr = 'brokerID,investorID,code,orderRef,userID,exchangeID,tradeID,direction,orderSysID,participantID,clientID,tradingRole,exchangeInstID,offsetFlag,hedgeFlag,price,volume,tradeDate,tradeTime,tradeType,priceSource,traderID,orderLocalID,clearingPartID,businessUnit,sequenceNo,tradingDay,settlementID,brokerOrderSeq,tradeSource,commission';
            titArr = regexp(titleStr, ',' ,'split');
            dataArr = regexp(strmd, ',', 'split');
            retput = containers.Map();
            dataArrSize = length(dataArr);
            for i = 1:dataArrSize
                retput(char(titArr{i})) = char(dataArr{i});
            end
            result = retput;
        end
        
        function[result] = getTradeRecords(self, ctpID)
            CTPMTMAT(24, ctpID);
        end
        
        function[result] = getTradingDate(self, ctpID)
             CTPMTMAT(25, ctpID);
        end
        
        function[result] = getTradingTime(self, ctpID)
             CTPMTMAT(26, ctpID);
        end
        
        function[status] = isClearanced(self, ctpID)
            status = str2num(CTPMTMAT(27, ctpID));
        end
        
        function[logStatus] = isClearanceTime(self, ctpID)
            status = str2num(CTPMTMAT(28, ctpID));
        end
        
        function[status] = isMdLogined(self, ctpid)
            status = str2num(CTPMTMAT(29, ctpid));
        end
        
        function[status] = isTdLogined(self, ctpid)
            status = str2num(CTPMTMAT(30, ctpid));
        end
        
        function[status] = isTradingTime(self, ctpid)
            status = str2num(CTPMTMAT(31, ctpid));
        end
        
        function[status] = isTradingTimeExact(self, ctpID, code)
            status = str2num(CTPMTMAT(32,  ctpID, code));
        end 
        
        function[status] = reqCommissionRate(self, ctpID, code, requestID)
            status = str2num(CTPMTMAT(34, ctpID, code, requestID));
        end 
        
        function[status] = reqQrySettlementInfoConfirm(self, ctpID, requestID)
            status = str2num(CTPMTMAT(38, ctpID, requestID));
        end 
        
        function[status] = reqMarginRate(self,  ctpID, code, requestID)
            status = str2num(CTPMTMAT(39, ctpID, code, requestID));
        end

        function start(self, ctpid, reqid, ipmd, iptd, brokerID, uname, upwd)
            CTPMTMAT(42, ctpid, reqid, ipmd, iptd, brokerID, uname, upwd);
        end
        
        function[status] = subMarketDatas(self, ctpid, reqid, code)
            status = str2num(CTPMTMAT(43, ctpid, reqid, code));
        end
        
        function[status] = UnSubMarketDatas(self, ctpID, requestID, codes)
            status = str2num(CTPMTMAT(44, ctpID, requestID, codes));
        end  
    end
end

