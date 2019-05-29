from ctypes import *
import struct
import time
class AccountData(object):
    #投资者帐号
    accountID = "";
    #可用资金
    available = 0;
    #期货结算准备金
    balance = 0;
    #经纪公司代码
    brokerID = "";
    #资金差额
    cashIn = 0;
    #平仓盈亏
    closeProfit = 0;
    #手续费
    commission = 0;
    #信用额度
    credit = 0;
    #币种代码
    currencyID = "";
    #当前保证金总额
    currMargin = 0;
    #投资者交割保证金
    deliveryMargin = 0;
    #入金金额
    deposit = 0;
    #动态权益(新增)
    dynamicBalance = 0;
    #交易所交割保证金
    exchangeDeliveryMargin = 0;
    #交易所保证金
    exchangeMargin = 0;
    #冻结的资金
    frozenCash = 0;
    #冻结的手续费
    frozenCommission = 0;
    #冻结的保证金
    frozenMargin = 0;
    #货币质押余额
    fundMortgageAvailable = 0;
    #货币质入金额
    fundMortgageIn = 0;
    #货币质出金额
    fundMortgageOut = 0;
    #利息收入
    interest = 0;
    #利息基数
    interestBase = 0;
    #质押金额
    mortgage = 0;
    #可质押货币金额
    mortgageableFund = 0;
    #持仓盈亏
    positionProfit = 0;
    #上次结算准备金
    preBalance = 0;
    #上次信用额度
    preCredit = 0;
    #上次存款额
    preDeposit = 0;
    #上次货币质入金额
    preFundMortgageIn = 0;
    #上次货币质出金额
    preFundMortgageOut = 0;
    #上次占用的保证金
    preMargin = 0;
    #上次质押金额
    preMortgage = 0;
    #基本准备金
    reserve = 0;
    #保底期货结算准备金
    reserveBalance = 0;
    #风险度(新增)
    risk = 0;
    #结算编号
    settlementID = 0;
    #特殊产品平仓盈亏
    specProductCloseProfit = 0;
    #特殊产品手续费
    specProductCommission = 0;
    #特殊产品交易所保证金
    specProductExchangeMargin = 0;
    #特殊产品冻结手续费
    specProductFrozenCommission = 0;
    #特殊产品冻结保证金
    specProductFrozenMargin = 0;
    #特殊产品占用保证金
    specProductMargin = 0;
    #特殊产品持仓盈亏
    specProductPositionProfit = 0;
    #根据持仓盈亏算法计算的特殊产品持仓盈亏
    specProductPositionProfitByAlg = 0;
    #交易日
    tradingDay = "";
    #出金金额
    withdraw = 0;
    #可取资金
    withdrawQuota = 0;

class Security(object):
    #组合类型
    combinationType = "";
    #创建日
    createDate = "";
    #交割月
    deliveryMonth = 0;
    #交割年份
    deliveryYear = 0;
    #结束交割日
    endDelivDate = "";
    #交易所代码
    exchangeID = "";
    #合约在交易所的代码
    exchangeInstID = "";
    #到期日
    expireDate = "";
    #保留小数位数
    digit = 0;
    #合约生命周期状态
    instLifePhase = "";
    #合约代码
    instrumentID = "";
    #合约名称
    instrumentName = "";
    #当前是否交易
    isTrading = "";
    #多头保证金率
    longMarginRatio;
    #限价单最大下单量
    maxLimitOrderVolume;
    #是否使用大额单边保证金算法
    maxMarginSideAlgorithm = "";
    #市价单最大下单量
    maxMarketOrderVolume;
    #限价单最小下单量
    minLimitOrderVolume;
    #市价单最小下单量
    minMarketOrderVolume;
    #上市日
    openDate = "";
    #期权类型
    optionsType = "";
    #持仓日期类型
    positionDateType = "";
    #持仓类型
    positionType = "";
    #最小变动价位
    priceTick = 0;
    #产品类型
    productClass = "";
    #产品代码
    productID = "";
    #空头保证金率
    shortMarginRatio;
    #开始交割日
    startDelivDate = "";
    #执行价
    strikePrice = 0;
    #基础商品代码
    underlyingInstrID = "";
    #基础商品名称
    underlyingInstrName = "";
    #合约基础商品乘数
    underlyingMultiple = 0;
    #合约数量乘数
    volumeMultiple = 0;

class InvestorPosition(object):
#放弃执行冻结
    abandonFrozen = 0;
    #经纪公司代码
    brokerID = "";
    #资金差额
    cashIn = 0;
    #平仓金额
    closeAmount = 0;
    #平仓盈亏
    closeProfit = 0;
    #逐日盯市平仓盈亏
    closeProfitByDate = 0;
    #逐笔对冲平仓盈亏
    closeProfitByTrade = 0;
    #平仓量
    closeVolume = 0;
    #合约代码
    code = "";
    #组合多头冻结
    combLongFrozen = 0;
    #组合成交形成的持仓
    combPosition = 0;
    #组合空头冻结
    combShortFrozen = 0;
    #手续费
    commission = 0;
    #交易所保证金
    exchangeMargin = 0;
    #浮动盈亏
    floatProfit = 0;
    #冻结的资金
    frozenCash = 0;
    #冻结的手续费
    frozenCommission = 0;
    #冻结的保证金
    frozenMargin = 0;
    #投机套保标志
    hedgeFlag = "";
    #投资者代码
    investorID = "";
    #多头冻结
    longFrozen = 0;
    #多头冻结金额
    longFrozenAmount = 0;
    #保证金
    margin = 0;
    #保证金率
    marginRateByMoney = 0;
    #保证金率(按手数)
    marginRateByVolume = 0;
    #开仓金额
    openAmount = 0;
    #开仓成本
    openCost = 0;
    #开仓价格
    openPrice = 0;
    #开仓量
    openVolume = 0;
    #今日持仓
    position = 0;
    #持仓日期
    positionDate = "";
    #持仓多空方向
    posiDirection = "";
    #持仓成本
    positionCost = 0;
    #持仓盈亏
    positionProfit = 0;
    #上次占用的保证金
    preMargin = 0;
    #上次结算价
    preSettlementPrice = 0;
    #结算编号
    settlementID = 0;
    #本次结算价
    settlementPrice = 0;
    #空头冻结
    shortFrozen = 0;
    #空头冻结金额
    shortFrozenAmount = 0;
    #执行冻结
    strikeFrozen = 0;
    #执行冻结金额
    strikeFrozenAmount = 0;
    #今日持仓
    todayPosition = 0;
    #交易日
    tradingDate = "";
    #占用的保证金
    useMargin = 0;
    #上日持仓
    ydPosition = 0;

class InvestorPositionDetail(object):
    #经纪公司代码
    brokerID = "";
    #平仓金额
    closeAmount = 0;
    #平仓盈亏
    closeProfit = 0;
    #逐日盯市持仓盈亏
    closeProfitByDate = 0;
    #逐笔对冲持仓盈亏
    closeProfitByTrade = 0;
    #平仓量
    closeVolume = 0;
    #合约代码
    code = "";
    #组合合约代码
    combInstrumentID = "";
    #买卖
    direction = "";
    #交易所代码
    exchangeID = "";
    #交易所保证金
    exchMargin = 0;
    #浮动盈亏
    floatProfit = 0;
    #投机套保标志
    hedgeFlag = "";
    #投资者代码
    investorID = "";
    #昨收盘
    lastPrice = 0;
    #昨结算价
    lastSettlementPrice = 0;
    #投资者保证金
    margin = 0;
    #保证金率
    marginRateByMoney = 0;
    #保证金率(按手数)
    marginRateByVolume = 0;
    #内部编号
    orderRef = "";
    #开仓日期
    openDate = "";
    #开仓价
    openPrice = 0;
    #开仓量
    openVolume = 0;
    #本地持仓号，服务器编写
    positionNo = "";
    #持仓盈亏
    positionProfit = 0;
    #逐日盯市持仓利润
    positionProfitByDate = 0;
    #逐笔对冲持仓利润
    positionProfitByTrade = 0;
    #持仓流号
    positionStreamId = 0;
    #昨结算价
    preSettlementPrice = 0;
    #持仓盈亏基准价
    profitBasePrice = 0;
    #结算编号
    settlementID = 0;
    #结算价
    settlementPrice = 0;
    #成交日期
    tradingDay = "";
    #成交编号
    tradeID = "";
    #成交类型
    tradeType = "";
    #数量
    volume = 0;

class OrderInfo(object):	
    #激活时间	
    activeTime = "";
    #最后修改交易所交易员代码	
    activeTraderID = "";
    #操作用户代码	
    activeUserID = "";
    #经纪公司代码	
    brokerID = "";
    #经纪公司报单编号	
    brokerOrderSeq = 0;
    #业务单元	
    businessUnit = "";
    #撤销时间	
    cancelTime = "";
    #结算会员编号	
    clearingPartID = "";
    #客户代码	
    clientID = "";
    #合约代码	
    code = "";
    #组合投机套保标志	
    combHedgeFlag = "";
    #组合开平标志	
    combOffsetFlag = "";
    #触发条件	
    contingentCondition = "";
    #买卖方向	
    direction = "";
    #交易所代码	
    exchangeID = "";
    #合约在交易所的代码	
    exchangeInstID = "";
    #强平原因	
    forceCloseReason = "";
    #前置编号	
    frontID = 0;
    #GTD日期	
    gTDDate = "";
    #价格	
    limitPrice = 0;
    #报单日期	
    insertDate = "";
    #委托时间	
    insertTime = "";
    #安装编号	
    installID = "";
    #投资者代码	
    investorID = "";
    #自动挂起标志	
    isAutoSuspend = 0;
    #互换单标志	
    isSwapOrder = 0;
    #最小成交量	
    minVolume = 0;
    #报单提示序号	
    notifySequence = 0;
    #本地报单编号	
    orderLocalID = "";
    #报单价格条件	
    orderPriceType = "";
    #报单引用	
    orderRef = "";
    #报单状态	
    orderStatus = "";
    #报单来源	
    orderSource = "";
    #报单提交状态	
    orderSubmitStatus = "";
    #报单编号	
    orderSysID = "";
    #报单类型	
    orderType = "";
    #会员代码	
    participantID = "";
    #相关报单	
    relativeOrderSysID = "";
    #请求编号	
    requestID = 0;
    #序号	
    sequenceNo = 0;
    #会话编号	
    sessionID = 0;
    #结算编号	
    settlementID = 0;
    #状态信息	
    statusMsg = "";
    #止损价	
    stopPrice = 0;
    #挂起时间	
    suspendTime = "";
    #有效期类型	
    timeCondition = "";
    #交易所交易员代码	
    traderID = "";
    #交易日	
    tradingDay = "";
    #最后修改时间	
    updateTime = "";
    #用户强评标志	
    userForceClose = 0;
    #用户代码	
    userID = "";
    #用户端产品信息	
    userProductInfo = "";
    #成交量类型	
    volumeCondition = "";
    #剩余数量	
    volumeTotal = 0;
    #数量	
    volumeTotalOriginal = 0;
    #今成交数量	
    volumeTraded = 0;
    #郑商所成交数量	
    zCETotalTradedVolume = 0;

class SecurityLatestData(object):
    #触发日
    actionDay = "";
    #卖1价
    askPrice1 = 0;
    #卖2价
    askPrice2 = 0;
    #卖3价
    askPrice3 = 0;
    #卖4价
    askPrice4 = 0;
    #卖5价
    askPrice5 = 0;
    #卖1量
    askVolume1 = 0;
    #卖2量
    askVolume2 = 0;
    #卖3量
    askVolume3 = 0;
    #卖4量
    askVolume4 = 0;
    #卖5量
    askVolume5 = 0;
    #平均价格
    averagePrice = 0;
    #买1价
    bidPrice1 = 0;
    #买2价
    bidPrice2 = 0;
    #买3价
    bidPrice3 = 0;
    #买4价
    bidPrice4 = 0;
    #买5价
    bidPrice5 = 0;
    #买1量
    bidVolume1 = 0;
    #买2量
    bidVolume2 = 0;
    #买3量
    bidVolume3 = 0;
    #买4量
    bidVolume4 = 0;
    #买5量
    bidVolume5 = 0;
    #最新价
    close = 0;
    #合约代码
    code = "";
    #今虚实度
    currDelta = 0;
    #交易所ID
    exchangeID = "";
    #交易所InstID
    exchangeInstID = "";
    #最高价
    high = 0;
    #昨日收盘价
    lastClose = 0;
    #最低价
    low = 0;
    #跌停价
    lowerLimit = 0;
    #开盘价
    open = 0;
    #持仓量
    openInterest = 0;
    #昨收盘
    preClose = 0;
    #昨虚实度
    preDelta = 0;
    #昨持仓量
    preOpenInterest = 0;
    #上次结算价
    preSettlementPrice = 0;
    #本次结算价
    settlementPrice = 0;
    #交易日
    tradingDay = "";
    #成交金额
    turnover = 0;
    #最后修改毫秒
    updateMillisec = 0;
    #最后修改时间
    updateTime = "";
    #涨停价
    upperLimit = 0;
    #成交量
    volume = 0;

class TradeRecord(object):
    #经纪公司代码
    brokerID = "";
    #/经纪公司报单编号
    brokerOrderSeq = 0;
    #/业务单元
    businessUnit = "";
    #/结算会员编号
    clearingPartID = "";
    #/客户代码
    clientID = "";
    #合约代码
    code = "";
    #手续费
    commission = 0;
    #买卖方向
    direction = "";
    #市场代码
    exchangeID = "";
    #合约在交易所的代码
    exchangeInstID = "";
    #投机套保标志
    hedgeFlag = "";
    #投资者代码
    investorID = "";
    #开平标志
    offsetFlag = "";
    #本地报单编号
    orderLocalID = "";
    #报单引用
    orderRef = "";
    #报单编号
    orderSysID = "";
    #会员代码
    participantID = "";
    #价格
    price = 0;
    #成交价来源
    priceSource = "";
    #序号
    sequenceNo = 0;
    #结算编号
    settlementID = 0;
    #成交编号
    tradeID = "";
    #交易所交易员代码
    traderID = "";
    #成交时期
    tradeDate = "";
    #成交来源
    tradeSource = "";
    #成交时间
    tradeTime = "";
    #交易日
    tradingDay = "";;
    #成交类型
    tradeType = "";
    #交易角色
    tradingRole = "";
    #数量
    volume = 0;
    #用户代码
    userID = "";

def convertToCTPAccountData(str):
    cTPTradingAccount = AccountData();
    results = str.split(',');
    alen = len(results);
    i = 0;
    if(alen >= 46):
        cTPTradingAccount.m_brokerID = results[i++];
        cTPTradingAccount.m_accountID = results[i++];
        cTPTradingAccount.m_preMortgage = results[i++];
        cTPTradingAccount.m_preCredit = results[i++];
        cTPTradingAccount.m_preDeposit = results[i++];
        cTPTradingAccount.m_preBalance = results[i++];
        cTPTradingAccount.m_preMargin = results[i++];
        cTPTradingAccount.m_interestBase = results[i++];
        cTPTradingAccount.m_interest = results[i++];
        cTPTradingAccount.m_deposit = results[i++];
        cTPTradingAccount.m_withdraw = results[i++];
        cTPTradingAccount.m_frozenMargin = results[i++];
        cTPTradingAccount.m_frozenCash = results[i++];
        cTPTradingAccount.m_frozenCommission = results[i++];
        cTPTradingAccount.m_currMargin = results[i++];
        cTPTradingAccount.m_cashIn = results[i++];
        cTPTradingAccount.m_commission = results[i++];
        cTPTradingAccount.m_closeProfit = results[i++];
        cTPTradingAccount.m_positionProfit = results[i++];
        cTPTradingAccount.m_balance = results[i++];
        cTPTradingAccount.m_available = results[i++];
        cTPTradingAccount.m_withdrawQuota = results[i++];
        cTPTradingAccount.m_reserve = results[i++];
        cTPTradingAccount.m_tradingDay = results[i++];
        cTPTradingAccount.m_settlementID = results[i++];
        cTPTradingAccount.m_credit = results[i++];
        cTPTradingAccount.m_mortgage = results[i++];
        cTPTradingAccount.m_exchangeMargin = results[i++];
        cTPTradingAccount.m_deliveryMargin = results[i++];
        cTPTradingAccount.m_exchangeDeliveryMargin = results[i++];
        cTPTradingAccount.m_reserveBalance = results[i++];
        cTPTradingAccount.m_currencyID = results[i++];
        cTPTradingAccount.m_preFundMortgageIn = results[i++];
        cTPTradingAccount.m_preFundMortgageOut = results[i++];
        cTPTradingAccount.m_fundMortgageIn = results[i++];
        cTPTradingAccount.m_fundMortgageOut = results[i++];
        cTPTradingAccount.m_fundMortgageAvailable = results[i++];
        cTPTradingAccount.m_mortgageableFund = results[i++];
        cTPTradingAccount.m_specProductMargin = results[i++];
        cTPTradingAccount.m_specProductFrozenMargin = results[i++];
        cTPTradingAccount.m_specProductCommission = results[i++];
        cTPTradingAccount.m_specProductFrozenCommission = results[i++];
        cTPTradingAccount.m_specProductPositionProfit = results[i++];
        cTPTradingAccount.m_specProductCloseProfit = results[i++];
        cTPTradingAccount.m_specProductPositionProfitByAlg = results[i++];
        cTPTradingAccount.m_specProductExchangeMargin = results[i++];
        cTPTradingAccount.m_dynamicBalance = results[i++];
        cTPTradingAccount.m_risk = results[i++];
    return cTPTradingAccount;

def convertToCTPDepthMarketData(str):
    cTPDepthMarketData = SecurityLatestData();
    results = str.split(',');
    alen = len(results);
    i = 0;
    if(alen >= 43):
        cTPDepthMarketData.m_tradingDay = results[i++];
        cTPDepthMarketData.m_code = results[i++];
        String exchangeID = results[i++];
        String exchangeInstID = results[i++];
        cTPDepthMarketData.m_close = results[i++];
        cTPDepthMarketData.m_preSettlementPrice = results[i++];
        cTPDepthMarketData.m_preClose = results[i++];
        cTPDepthMarketData.m_preOpenInterest = results[i++];
        cTPDepthMarketData.m_open = results[i++];
        cTPDepthMarketData.m_high = results[i++];
        cTPDepthMarketData.m_low = results[i++];
        cTPDepthMarketData.m_volume = results[i++];
        cTPDepthMarketData.m_turnover = results[i++];
        cTPDepthMarketData.m_openInterest = results[i++];
        cTPDepthMarketData.m_lastClose = results[i++];
        cTPDepthMarketData.m_settlementPrice = results[i++];
        cTPDepthMarketData.m_upperLimit = results[i++];
        cTPDepthMarketData.m_lowerLimit = results[i++];
        cTPDepthMarketData.m_preDelta = results[i++];
        cTPDepthMarketData.m_currDelta = results[i++];
        cTPDepthMarketData.m_updateTime = results[i++];
        cTPDepthMarketData.m_updateMillisec = results[i++];
        cTPDepthMarketData.m_bidPrice1 = results[i++];
        cTPDepthMarketData.m_bidVolume1 = results[i++];
        cTPDepthMarketData.m_askPrice1 = results[i++];
        cTPDepthMarketData.m_askVolume1 = results[i++];
        cTPDepthMarketData.m_bidPrice2 = results[i++];
        cTPDepthMarketData.m_bidVolume2 = results[i++];
        cTPDepthMarketData.m_askPrice2 = results[i++];
        cTPDepthMarketData.m_askVolume2 = results[i++];
        cTPDepthMarketData.m_bidPrice3 = results[i++];
        cTPDepthMarketData.m_bidVolume3 = results[i++];
        cTPDepthMarketData.m_askPrice3 = results[i++];
        cTPDepthMarketData.m_askVolume3 = results[i++];
        cTPDepthMarketData.m_bidPrice4 = results[i++];
        cTPDepthMarketData.m_bidVolume4 = results[i++];
        cTPDepthMarketData.m_askPrice4 = results[i++];
        cTPDepthMarketData.m_askVolume4 = results[i++];
        cTPDepthMarketData.m_bidPrice5 = results[i++];
        cTPDepthMarketData.m_bidVolume5 = results[i++];
        cTPDepthMarketData.m_askPrice5 = results[i++];
        cTPDepthMarketData.m_askVolume5 = results[i++];
        cTPDepthMarketData.m_averagePrice = results[i++];
        cTPDepthMarketData.m_actionDay = results[i++];
    return cTPDepthMarketData;

def convertToCTPInstrumentDatas(str):
    cTPInstrumentDatas = [];
    strs = str.split(';');
    alen = len(strs);
    for i in range(alen):
        results = strs[i].split(',');
        if(len(results) >= 30):
            cTPInstrumentData = Security();
            j = 0;
			cTPInstrumentData.m_instrumentID = results[j++];
            cTPInstrumentData.m_exchangeID = results[j++];
            cTPInstrumentData.m_instrumentName = results[j++];
            cTPInstrumentData.m_exchangeInstID = results[j++];
            cTPInstrumentData.m_productID = results[j++];
            cTPInstrumentData.m_productClass = results[j++];
            cTPInstrumentData.m_deliveryYear = results[j++];
            cTPInstrumentData.m_deliveryMonth = results[j++];
            cTPInstrumentData.m_maxMarketOrderVolume = results[j++];
            cTPInstrumentData.m_minMarketOrderVolume = results[j++];
            cTPInstrumentData.m_maxLimitOrderVolume = results[j++];
            cTPInstrumentData.m_minLimitOrderVolume = results[j++];
            cTPInstrumentData.m_volumeMultiple = results[j++];
            cTPInstrumentData.m_priceTick = results[j++];
            cTPInstrumentData.m_createDate = results[j++];
            cTPInstrumentData.m_openDate = results[j++];
            cTPInstrumentData.m_expireDate = results[j++];
            cTPInstrumentData.m_startDelivDate = results[j++];
            cTPInstrumentData.m_endDelivDate = results[j++];
            cTPInstrumentData.m_instLifePhase = results[j++];
            cTPInstrumentData.m_isTrading = results[j++];
            cTPInstrumentData.m_positionType = results[j++];
            cTPInstrumentData.m_positionDateType = results[j++];
            cTPInstrumentData.m_longMarginRatio = results[j++];
            cTPInstrumentData.m_shortMarginRatio = results[j++];
            cTPInstrumentData.m_maxMarginSideAlgorithm = results[j++];
            cTPInstrumentData.m_underlyingInstrID = results[j++];
            cTPInstrumentData.m_strikePrice = results[j++];
            cTPInstrumentData.m_optionsType = results[j++];
            cTPInstrumentData.m_underlyingMultiple = results[j++];
            cTPInstrumentData.m_combinationType = results[j++];
            cTPInstrumentDatas.append(cTPInstrumentData);
    return cTPInstrumentDatas;

def convertToCTPInvestorPosition(str):
    list = [];
    strs = str.split(';');
    alen = len(strs);
    for i in range(alen):
        results = strs[i].split(',');
        if(len(results) >= 42):
            cTPInvestorPosition = InvestorPosition();
            cTPInvestorPosition.m_code = results[i++];
            cTPInvestorPosition.m_brokerID = results[i++];
            cTPInvestorPosition.m_investorID = results[i++];
            cTPInvestorPosition.m_posiDirection = results[i++];
            cTPInvestorPosition.m_hedgeFlag = results[i++];
            cTPInvestorPosition.m_positionDate = results[i++];
            cTPInvestorPosition.m_ydPosition = results[i++];
            cTPInvestorPosition.m_position = results[i++];
            cTPInvestorPosition.m_longFrozen = results[i++];
            cTPInvestorPosition.m_shortFrozen = results[i++];
            cTPInvestorPosition.m_longFrozenAmount = results[i++];
            cTPInvestorPosition.m_shortFrozenAmount = results[i++];
            cTPInvestorPosition.m_openVolume = results[i++];
            cTPInvestorPosition.m_closeVolume = results[i++];
            cTPInvestorPosition.m_openAmount = results[i++];
            cTPInvestorPosition.m_closeAmount = results[i++];
            cTPInvestorPosition.m_positionCost = results[i++];
            cTPInvestorPosition.m_preMargin = results[i++];
            cTPInvestorPosition.m_useMargin = results[i++];
            cTPInvestorPosition.m_frozenMargin = results[i++];
            cTPInvestorPosition.m_frozenCash = results[i++];
            cTPInvestorPosition.m_frozenCommission = results[i++];
            cTPInvestorPosition.m_cashIn = results[i++];
            cTPInvestorPosition.m_margin = results[i++];
            cTPInvestorPosition.m_floatProfit = results[i++];
            cTPInvestorPosition.m_positionProfit = results[i++];
            cTPInvestorPosition.m_preSettlementPrice = results[i++];
            cTPInvestorPosition.m_settlementPrice = results[i++];
            cTPInvestorPosition.m_tradingDate = results[i++];
            cTPInvestorPosition.m_settlementID = results[i++];
            cTPInvestorPosition.m_openCost = results[i++];
            cTPInvestorPosition.m_exchangeMargin = results[i++];
            cTPInvestorPosition.m_combPosition = results[i++];
            cTPInvestorPosition.m_combLongFrozen = results[i++];
            cTPInvestorPosition.m_combShortFrozen = results[i++];
            cTPInvestorPosition.m_closeProfitByDate = results[i++];
            cTPInvestorPosition.m_closeProfitByTrade = results[i++];
            cTPInvestorPosition.m_todayPosition = results[i++];
            cTPInvestorPosition.m_marginRateByMoney = results[i++];
            cTPInvestorPosition.m_marginRateByVolume = results[i++];
            cTPInvestorPosition.m_strikeFrozen = results[i++];
            cTPInvestorPosition.m_strikeFrozenAmount = results[i++];
            cTPInvestorPosition.m_abandonFrozen = results[i++];
            cTPInvestorPosition.m_openPrice = results[i++];
            list.append(cTPInvestorPosition);
    return list;
    

def convertToCTPInvestorPositionDetail(str):
    list = [];
    strs = str.split(';');
    alen = len(strs);
    for i in range(alen):
        results = strs[i].split(',');
        if(len(results) >= 25):
            cTPInvestorPositionDetail = InvestorPositionDetail();
            cTPInvestorPositionDetail.m_code = results[i++];
            cTPInvestorPositionDetail.m_brokerID = results[i++];
            cTPInvestorPositionDetail.m_investorID = results[i++];
            cTPInvestorPositionDetail.m_hedgeFlag = results[i++];
            cTPInvestorPositionDetail.m_direction = results[i++];
            cTPInvestorPositionDetail.m_openDate = results[i++];
            cTPInvestorPositionDetail.m_tradeID = results[i++];
            cTPInvestorPositionDetail.m_volume = results[i++];
            cTPInvestorPositionDetail.m_openPrice = results[i++];
            cTPInvestorPositionDetail.m_tradingDay = results[i++];
            cTPInvestorPositionDetail.m_settlementID = results[i++];
            cTPInvestorPositionDetail.m_tradeType = results[i++];
            cTPInvestorPositionDetail.m_combInstrumentID = results[i++];
            cTPInvestorPositionDetail.m_exchangeID = results[i++];
            cTPInvestorPositionDetail.m_closeProfitByDate = results[i++];
            cTPInvestorPositionDetail.m_closeProfitByTrade = results[i++];
            cTPInvestorPositionDetail.m_positionProfitByDate = results[i++];
            cTPInvestorPositionDetail.m_positionProfitByTrade = results[i++];
            cTPInvestorPositionDetail.m_margin = results[i++];
            cTPInvestorPositionDetail.m_exchMargin = results[i++];
            cTPInvestorPositionDetail.m_marginRateByMoney = results[i++];
            cTPInvestorPositionDetail.m_marginRateByVolume = results[i++];
            cTPInvestorPositionDetail.m_lastSettlementPrice = results[i++];
            cTPInvestorPositionDetail.m_lastSettlementPrice = results[i++];
            cTPInvestorPositionDetail.m_settlementPrice = results[i++];
            cTPInvestorPositionDetail.m_closeVolume = results[i++];
            list.append(cTPInvestorPositionDetail);
    return list;

def convertToCTPOrder(str):
    cTPOrder = OrderInfo();
    results = str.split(',');
    alen = len(results);
    if(len(results) >= 56):
        cTPOrder.m_brokerID = results[i++];
        cTPOrder.m_investorID = results[i++];
        cTPOrder.m_code = results[i++];
        cTPOrder.m_orderRef = results[i++];
        cTPOrder.m_userID = results[i++];
        cTPOrder.m_orderPriceType = results[i++];
        cTPOrder.m_direction = results[i++];
        cTPOrder.m_combOffsetFlag = results[i++];
        cTPOrder.m_combHedgeFlag = results[i++];
        cTPOrder.m_limitPrice = results[i++];
        cTPOrder.m_volumeTotalOriginal = results[i++];
        cTPOrder.m_timeCondition = results[i++];
        cTPOrder.m_gTDDate = results[i++];
        cTPOrder.m_volumeCondition = results[i++];
        cTPOrder.m_minVolume = results[i++];
        cTPOrder.m_contingentCondition = results[i++];
        cTPOrder.m_stopPrice = results[i++];
        cTPOrder.m_forceCloseReason = results[i++];
        cTPOrder.m_isAutoSuspend = results[i++];
        cTPOrder.m_businessUnit = results[i++];
        cTPOrder.m_requestID = results[i++];
        cTPOrder.m_orderLocalID = results[i++];
        cTPOrder.m_exchangeID = results[i++];
        cTPOrder.m_participantID = results[i++];
        cTPOrder.m_clientID = results[i++];
        cTPOrder.m_exchangeInstID = results[i++];
        cTPOrder.m_traderID = results[i++];
        cTPOrder.m_installID = results[i++];
        cTPOrder.m_orderSubmitStatus = results[i++];
        cTPOrder.m_notifySequence = results[i++];
        cTPOrder.m_tradingDay = results[i++];
        cTPOrder.m_settlementID = results[i++];
        cTPOrder.m_orderSysID = results[i++];
        cTPOrder.m_orderSource = results[i++];
        cTPOrder.m_orderStatus = results[i++];
        cTPOrder.m_orderType = results[i++];
        cTPOrder.m_volumeTraded = results[i++];
        cTPOrder.m_volumeTotal = results[i++];
        cTPOrder.m_insertDate = results[i++];
        cTPOrder.m_insertTime = results[i++];
        cTPOrder.m_activeTime = results[i++];
        cTPOrder.m_suspendTime = results[i++];
        cTPOrder.m_updateTime = results[i++];
        cTPOrder.m_cancelTime = results[i++];
        cTPOrder.m_activeTraderID = results[i++];
        cTPOrder.m_clearingPartID = results[i++];
        cTPOrder.m_sequenceNo = results[i++];
        cTPOrder.m_frontID = results[i++];
        cTPOrder.m_sessionID = results[i++];
        cTPOrder.m_userProductInfo = results[i++];
        cTPOrder.m_statusMsg = results[i++];
        cTPOrder.m_userForceClose = results[i++];
        cTPOrder.m_activeUserID = results[i++];
        cTPOrder.m_brokerOrderSeq = results[i++];
        cTPOrder.m_relativeOrderSysID = results[i++];
        cTPOrder.m_zCETotalTradedVolume = results[i++];
        cTPOrder.m_isSwapOrder = results[i++];
    return cTPOrder;

def convertToCTPOrderList(str):
    lst = [];
    strs = str.split(';');
    alen = len(strs);
    for i in range(alen):
        lst.append(convertToCTPOrder(strs[i]));
    return lst;

def convertToCTPTrade(str):
    cTPTrade = TradeRecord();
    results = str.split(',');
    alen = len(results);
    if(len(results) > 30):
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
        cTPTrade.m_price = results[i++];
        cTPTrade.m_volume = results[i++];
        cTPTrade.m_tradeDate = results[i++];
        cTPTrade.m_tradeTime = results[i++];
        cTPTrade.m_tradeType = results[i++];
        cTPTrade.m_priceSource = results[i++];
        cTPTrade.m_traderID = results[i++];
        cTPTrade.m_orderLocalID = results[i++];
        cTPTrade.m_clearingPartID = results[i++];
        cTPTrade.m_businessUnit = results[i++];
        cTPTrade.m_sequenceNo = results[i++];
        cTPTrade.m_tradingDay = results[i++];
        cTPTrade.m_settlementID = results[i++];
        cTPTrade.m_brokerOrderSeq = results[i++];
        cTPTrade.m_tradeSource = results[i++];
        cTPTrade.m_commission = results[i++];
    return cTPTrade;

def convertToCTPTradeRecords(str):
    list = [];
    strs = str.split(';');
    alen = len(strs);
    for i in range(alen):
        list.append(convertToCTPTrade(strs[i]));
    return list;

def onAccountDataCallBack(data, ctpID):
    return

def onInvestorPositionCallBack(data, ctpID):
    return

def onInvestorPositionDetailCallBack(data, ctpID):
    return

def onOrderInfoCallBack(data, ctpID):
    return

def onOrderInfosCallBack(orderInfos, ctpID):
    return

def onSecurityCallBack(data, ctpID):
    return

def onSecurityLatestDataCallBack(data, ctpID):
    return

def onTradeRecordCallBack(data, ctpID):
    return

def onTradeRecordsCallBack(data, ctpID):
    return

#创建dll
ctp = cdll.LoadLibrary(r"iCTP.dll");
cdll.argtypes = [c_char_p, c_int, c_double, c_long, c_wchar_p];
print("CTP Python启动!");
ctpID = ctp.create();
reqID = ctp.generateReqID(ctpID);
#启动CTP交易和行情
ctp.start(ctpID , reqID, c_char_p(b"218.202.237.33:10012"), c_char_p(b"218.202.237.33:10002"), c_char_p(b"9999"), c_char_p(b"021739"), c_char_p(b"123456"));
#检查是否登陆成功
while(ctp.isMdLogined(ctpID) <= 0 or ctp.isTdLogined(ctpID) <= 0):
    time.sleep(1)
print("登陆CTP成功!");
#注册行情
reqID = ctp.generateReqID(ctpID);
ctp.subMarketDatas(ctpID, reqID, c_char_p(b"cu1712"));
#用死循环来读取最新信息
while (1 == 1):
    buffer = ctp.createBuffer(102400);
    recvData = c_char_p(buffer);
    if (ctp.getDepthMarketData(ctpID, recvData) > 0):
        data = convertToCTPDepthMarketData(str(recvData.value, encoding="gbk"));
        onSecurityLatestDataCallBack(data, ctpID);
    if (ctp.getInstrumentsData(ctpID, recvData) > 0):
        data = convertToCTPInstrumentDatas(str(recvData.value, encoding="gbk"));
        onSecurityCallBack(data, ctpID);
    if (ctp.getAccountData(ctpID, recvData) > 0):
        data = convertToCTPAccountData(str(recvData.value, encoding="gbk"));
        onAccountDataCallBack(data, ctpID);
    if (ctp.getOrderInfo(ctpID, recvData) > 0):
        data = convertToCTPOrder(str(recvData.value, encoding="gbk"));
        onOrderInfoCallBack(data, ctpID);
    if (ctp.getOrderInfos(ctpID, recvData) > 0):
        data = convertToCTPOrderList(str(recvData.value, encoding="gbk"));
        onOrderInfosCallBack(data, ctpID);
    if (ctp.getTradeRecord(ctpID, recvData) > 0):
        data = convertToCTPTrade(str(recvData.value, encoding="gbk"));
        onTradeRecordCallBack(data, ctpID);
    if (ctp.getTradeRecords(ctpID, recvData) > 0):
        data = convertToCTPTradeRecords(str(recvData.value, encoding="gbk"));
        onTradeRecordsCallBack(data, ctpID);
    if (ctp.getPositionData(ctpID, recvData) > 0):
        data = convertToCTPInvestorPosition(str(recvData.value, encoding, encoding="gbk"));
        onInvestorPositionCallBack(data, ctpID);
    if (ctp.getPositionDetailData(ctpID, recvData) > 0):
        data = convertToCTPInvestorPositionDetail(str(recvData.value, encoding="gbk"));
        onInvestorPositionDetailCallBack(data, ctpID);
    ctp.destoryBuffer(buffer);
    time.sleep(0.001);
