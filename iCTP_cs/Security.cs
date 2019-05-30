/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

using System;
using System.Collections.Generic;
using System.Text;

namespace FaceCat {
    /// <summary>
    /// CTP资金账户类定义
    /// </summary>
    public class AccountData {
        // 投资者帐号
        public String m_accountID;
        // 可用资金
        public double m_available;
        // 期货结算准备金
        public double m_balance;
        // 经纪公司代码
        public String m_brokerID;
        // 资金差额
        public double m_cashIn;
        // 平仓盈亏
        public double m_closeProfit;
        // 手续费
        public double m_commission;
        // 信用额度
        public double m_credit;
        // 币种代码
        public String m_currencyID;
        // 当前保证金总额
        public double m_currMargin;
        // 投资者交割保证金
        public double m_deliveryMargin;
        // 入金金额
        public double m_deposit;
        // 动态权益(新增)
        public double m_dynamicBalance;
        // 交易所交割保证金
        public double m_exchangeDeliveryMargin;
        // 交易所保证金
        public double m_exchangeMargin;
        // 冻结的资金
        public double m_frozenCash;
        // 冻结的手续费
        public double m_frozenCommission;
        // 冻结的保证金
        public double m_frozenMargin;
        // 货币质押余额
        public double m_fundMortgageAvailable;
        // 货币质入金额
        public double m_fundMortgageIn;
        // 货币质出金额
        public double m_fundMortgageOut;
        // 利息收入
        public double m_interest;
        // 利息基数
        public double m_interestBase;
        // 质押金额
        public double m_mortgage;
        // 可质押货币金额
        public double m_mortgageableFund;
        // 持仓盈亏
        public double m_positionProfit;
        // 上次结算准备金
        public double m_preBalance;
        // 上次信用额度
        public double m_preCredit;
        // 上次存款额
        public double m_preDeposit;
        // 上次货币质入金额
        public double m_preFundMortgageIn;
        // 上次货币质出金额
        public double m_preFundMortgageOut;
        // 上次占用的保证金
        public double m_preMargin;
        // 上次质押金额
        public double m_preMortgage;
        // 基本准备金
        public double m_reserve;
        // 保底期货结算准备金
        public double m_reserveBalance;
        // 风险度(新增)
        public double m_risk;
        // 结算编号
        public int m_settlementID;
        // 特殊产品平仓盈亏
        public double m_specProductCloseProfit;
        // 特殊产品手续费
        public double m_specProductCommission;
        // 特殊产品交易所保证金
        public double m_specProductExchangeMargin;
        // 特殊产品冻结手续费
        public double m_specProductFrozenCommission;
        // 特殊产品冻结保证金
        public double m_specProductFrozenMargin;
        // 特殊产品占用保证金
        public double m_specProductMargin;
        // 特殊产品持仓盈亏
        public double m_specProductPositionProfit;
        // 根据持仓盈亏算法计算的特殊产品持仓盈亏
        public double m_specProductPositionProfitByAlg;
        // 交易日
        public String m_tradingDay;
        // 出金金额
        public double m_withdraw;
        // 可取资金
        public double m_withdrawQuota;
    }

    //合约手续费率
    public class CommissionRate {
        //经纪公司代码
        public String m_brokerID;
        //收费方式
        public String m_calculateMode;
        //平仓手续费率
        public double m_closeRatioByMoney;
        //平仓手续费
        public double m_closeRatioByVolume;
        //平今手续费率
        public double m_closeTodayRatioByMoney;
        //平今手续费
        public double m_closeTodayRatioByVolume;
        //平今费
        public double m_closeTodayFee;
        //合约代码
        public String m_code;
        //代码
        public String m_commodityNo;
        //类型
        public String m_commodityType;
        //交易所编号
        public String m_exchangeNo;
        //投资者代码
        public String m_investorID;
        //投资者范围
        public String m_investorRange;
        //来源
        public String m_matchSource;
        //开平费
        public double m_openCloseFee;
        //开仓手续费率
        public double m_openRatioByMoney;
        //开仓手续费
        public double m_openRatioByVolume;
    }

    //合约保证金率
    public class MarginRate {
        //经纪公司代码
        public String m_brokerID;
        //收费方式
        public String m_calculateMode;
        //看涨看跌标示
        public String m_callOrPutFlag;
        //合约代码
        public String m_code;
        //代码
        public String m_commodityNo;
        //类型
        public String m_commodityType;
        //合约
        public String m_contractNo;
        //投机套保标志
        public String m_hedgeFlag;
        public double m_initialMargin;
        //投资者代码
        public String m_investorID;
        //多头保证金率
        public double m_longMarginRatioByMoney;
        //多头保证金费
        public double m_longMarginRatioByVolume;
        //投资者范围
        public String m_investorRange;
        //是否相对交易所收取
        public int m_isRelativel;
        public double m_lockMargin;
        public double m_maintenanceMargin;
        public double m_sellInitialMargin;
        public double m_sellMaintenanceMargin;
        //空头保证金率
        public double m_shortMarginRatioByMoney;
        //空头保证金费
        public double m_shortMarginRatioByVolume;
        //
        public String m_strikePrice;
    }

    /// <summary>
    /// 合约数据定义
    /// </summary>
    public class Security {
        // 组合类型
        public String m_combinationType;
        //创建日
        public String m_createDate;
        //交割月
        public int m_deliveryMonth;
        //交割年份
        public int m_deliveryYear;
        //结束交割日
        public String m_endDelivDate;
        //交易所代码
        public String m_exchangeID;
        //合约在交易所的代码
        public String m_exchangeInstID;
        //到期日
        public String m_expireDate;
        //保留小数位数
        public int m_digit;
        //合约生命周期状态
        public String m_instLifePhase;
        //合约代码
        public String m_instrumentID;
        //合约名称
        public String m_instrumentName;
        //当前是否交易
        public String m_isTrading;
        //多头保证金率
        public double m_longMarginRatio;
        //限价单最大下单量
        public int m_maxLimitOrderVolume;
        //是否使用大额单边保证金算法
        public String m_maxMarginSideAlgorithm;
        //市价单最大下单量
        public int m_maxMarketOrderVolume;
        //限价单最小下单量
        public int m_minLimitOrderVolume;
        //市价单最小下单量
        public int m_minMarketOrderVolume;
        //上市日
        public String m_openDate;
        //期权类型
        public String m_optionsType;
        //持仓日期类型
        public String m_positionDateType;
        //持仓类型
        public String m_positionType;
        //最小变动价位
        public double m_priceTick;
        //产品类型
        public String m_productClass;
        //产品代码
        public String m_productID;
        //空头保证金率
        public double m_shortMarginRatio;
        //开始交割日
        public String m_startDelivDate;
        //执行价
        public double m_strikePrice;
        //基础商品代码
        public String m_underlyingInstrID;
        //基础商品名称
        public String m_underlyingInstrName;
        //合约基础商品乘数
        public double m_underlyingMultiple;
        //合约数量乘数
        public int m_volumeMultiple;

        /// <summary>
        /// 获取基础商品名称
        /// </summary>
        public void getNnderlyingInstrName() {
            int size = m_instrumentName.Length;
            m_underlyingInstrName = "";
            foreach (char sz in m_instrumentName) {
                if (!(sz == '0' || sz == '1' || sz == '2' || sz == '3' || sz == '4' ||
                    sz == '5' || sz == '6' || sz == '7' || sz == '8' || sz == '9')) {
                    m_underlyingInstrName += sz.ToString();
                }
            }
        }
    }

    /// <summary>
    /// 投资者持仓定义
    /// </summary>
    public class InvestorPosition {
        //放弃执行冻结
        public int m_abandonFrozen;
        // 经纪公司代码
        public String m_brokerID;
        // 资金差额
        public double m_cashIn;
        // 平仓金额
        public double m_closeAmount;
        // 平仓盈亏
        public double m_closeProfit;
        // 逐日盯市平仓盈亏
        public double m_closeProfitByDate;
        // 逐笔对冲平仓盈亏
        public double m_closeProfitByTrade;
        // 平仓量
        public int m_closeVolume;
        // 合约代码
        public String m_code;
        // 组合多头冻结
        public int m_combLongFrozen;
        // 组合成交形成的持仓
        public int m_combPosition;
        // 组合空头冻结
        public int m_combShortFrozen;
        // 手续费
        public double m_commission;
        // 交易所保证金
        public double m_exchangeMargin;
        //浮动盈亏
        public double m_floatProfit;
        // 冻结的资金
        public double m_frozenCash;
        // 冻结的手续费
        public double m_frozenCommission;
        // 冻结的保证金
        public double m_frozenMargin;
        // 投机套保标志
        public String m_hedgeFlag;
        // 投资者代码
        public String m_investorID;
        // 多头冻结
        public int m_longFrozen;
        // 多头冻结金额
        public double m_longFrozenAmount;
        //保证金
        public double m_margin;
        // 保证金率
        public double m_marginRateByMoney;
        // 保证金率(按手数)
        public double m_marginRateByVolume;
        // 开仓金额
        public double m_openAmount;
        // 开仓成本
        public double m_openCost;
        //开仓价格
        public double m_openPrice;
        // 开仓量
        public int m_openVolume;
        // 今日持仓
        public int m_position;
        // 持仓日期
        public String m_positionDate;
        // 持仓多空方向
        public String m_posiDirection;
        // 持仓成本
        public double m_positionCost;
        // 持仓盈亏
        public double m_positionProfit;
        // 上次占用的保证金
        public double m_preMargin;
        // 上次结算价
        public double m_preSettlementPrice;
        // 结算编号
        public int m_settlementID;
        // 本次结算价
        public double m_settlementPrice;
        // 空头冻结
        public int m_shortFrozen;
        // 空头冻结金额
        public double m_shortFrozenAmount;
        // 执行冻结
        public int m_strikeFrozen;
        // 执行冻结金额
        public double m_strikeFrozenAmount;
        // 今日持仓
        public int m_todayPosition;
        //交易日
        public String m_tradingDate;
        //占用的保证金
        public double m_useMargin;
        //上日持仓
        public int m_ydPosition;

        /// <summary>
        /// 获取可用仓位
        /// </summary>
        public int getAvailablePosition() {
            int position = 0;
            position = m_position - getFrozenAmount();
            return position;
        }

        /// <summary>
        /// 获取组合冻结量
        /// </summary>
        /// <returns></returns>
        public int getFrozenAmount() {
            int position = 0;
            if (m_posiDirection == "多") {
                position = m_longFrozen;
            }
            else if (m_posiDirection == "空") {
                position = m_shortFrozen;
            }
            return position;
        }
    }

    /// <summary>
    /// 持仓明细
    /// </summary>
    public class InvestorPositionDetail {
        //经纪公司代码
        public String m_brokerID;
        //平仓金额
        public double m_closeAmount;
        //平仓盈亏
        public double m_closeProfit;
        //逐日盯市持仓盈亏
        public double m_closeProfitByDate;
        //逐笔对冲持仓盈亏
        public double m_closeProfitByTrade;
        //平仓量
        public double m_closeVolume;
        //合约代码
        public String m_code;
        //组合合约代码
        public String m_combInstrumentID;
        //买卖
        public String m_direction;
        //交易所代码
        public String m_exchangeID;
        //交易所保证金
        public double m_exchMargin;
        //浮动盈亏
        public double m_floatProfit;
        //投机套保标志
        public String m_hedgeFlag;
        //投资者代码
        public String m_investorID;
        //昨收盘
        public double m_lastPrice;
        //昨结算价
        public double m_lastSettlementPrice;
        //投资者保证金
        public double m_margin;
        //保证金率
        public double m_marginRateByMoney;
        //保证金率(按手数)
        public double m_marginRateByVolume;
        //内部编号
        public String m_orderRef;
        //开仓日期
        public String m_openDate;
        //开仓价
        public double m_openPrice;
        //开仓量
        public int m_openVolume;
        //本地持仓号，服务器编写
        public String m_positionNo;
        //持仓盈亏
        public double m_positionProfit;
        //逐日盯市持仓利润
        public double m_positionProfitByDate;
        //逐笔对冲持仓利润
        public double m_positionProfitByTrade;
        //持仓流号
        public int m_positionStreamId;
        //昨结算价
        public double m_preSettlementPrice;
        //持仓盈亏基准价
        public double m_profitBasePrice;
        //结算编号
        public int m_settlementID;
        //结算价
        public double m_settlementPrice;
        //成交日期
        public String m_tradingDay;
        //成交编号
        public String m_tradeID;
        //成交类型
        public String m_tradeType;
        //数量
        public int m_volume;
    }

    /// <summary>
    /// 报单定义
    /// </summary>
    public class OrderInfo {
        //激活时间	
        public String m_activeTime;
        //最后修改交易所交易员代码	
        public String m_activeTraderID;
        //操作用户代码	
        public String m_activeUserID;
        //经纪公司代码	
        public String m_brokerID;
        //经纪公司报单编号	
        public int m_brokerOrderSeq;
        //业务单元	
        public String m_businessUnit;
        //撤销时间	
        public String m_cancelTime;
        //结算会员编号	
        public String m_clearingPartID;
        //客户代码	
        public String m_clientID;
        //合约代码	
        public String m_code;
        //组合投机套保标志	
        public String m_combHedgeFlag;
        //组合开平标志	
        public String m_combOffsetFlag;
        //触发条件	
        public String m_contingentCondition;
        //买卖方向	
        public String m_direction;
        //交易所代码	
        public String m_exchangeID;
        //合约在交易所的代码	
        public String m_exchangeInstID;
        //强平原因	
        public String m_forceCloseReason;
        //前置编号	
        public int m_frontID;
        //GTD日期	
        public String m_gTDDate;
        //价格	
        public double m_limitPrice;
        //报单日期	
        public String m_insertDate;
        //委托时间	
        public String m_insertTime;
        //安装编号	
        public String m_installID;
        //投资者代码	
        public String m_investorID;
        //自动挂起标志	
        public int m_isAutoSuspend;
        //互换单标志	
        public int m_isSwapOrder;
        //最小成交量	
        public int m_minVolume;
        //报单提示序号	
        public int m_notifySequence;
        //本地报单编号	
        public String m_orderLocalID;
        //报单价格条件	
        public String m_orderPriceType;
        //报单引用	
        public String m_orderRef;
        //报单状态	
        public String m_orderStatus;
        //报单来源	
        public String m_orderSource;
        //报单提交状态	
        public String m_orderSubmitStatus;
        //报单编号	
        public String m_orderSysID;
        //报单类型	
        public String m_orderType;
        //会员代码	
        public String m_participantID;
        //相关报单	
        public String m_relativeOrderSysID;
        //请求编号	
        public int m_requestID;
        //序号	
        public int m_sequenceNo;
        //会话编号	
        public int m_sessionID;
        //结算编号	
        public int m_settlementID;
        //状态信息	
        public String m_statusMsg;
        //止损价	
        public double m_stopPrice;
        //挂起时间	
        public String m_suspendTime;
        //有效期类型	
        public String m_timeCondition;
        //交易所交易员代码	
        public String m_traderID;
        //交易日	
        public String m_tradingDay;
        //最后修改时间	
        public String m_updateTime;
        //用户强评标志	
        public int m_userForceClose;
        //用户代码	
        public String m_userID;
        //用户端产品信息	
        public String m_userProductInfo;
        //成交量类型	
        public String m_volumeCondition;
        //剩余数量	
        public int m_volumeTotal;
        //数量	
        public int m_volumeTotalOriginal;
        //今成交数量	
        public int m_volumeTraded;
        //郑商所成交数量	
        public int m_zCETotalTradedVolume;
    }

    //最新数据
    public class SecurityLatestData {
        //触发日
        public String m_actionDay;
        //卖1价
        public double m_askPrice1;
        //卖2价
        public double m_askPrice2;
        //卖3价
        public double m_askPrice3;
        //卖4价
        public double m_askPrice4;
        //卖5价
        public double m_askPrice5;
        //卖1量
        public int m_askVolume1;
        //卖2量
        public int m_askVolume2;
        //卖3量
        public int m_askVolume3;
        //卖4量
        public int m_askVolume4;
        //卖5量
        public int m_askVolume5;
        //平均价格
        public double m_averagePrice;
        //买1价
        public double m_bidPrice1;
        //买2价
        public double m_bidPrice2;
        //买3价
        public double m_bidPrice3;
        //买4价
        public double m_bidPrice4;
        //买5价
        public double m_bidPrice5;
        //买1量
        public int m_bidVolume1;
        //买2量
        public int m_bidVolume2;
        //买3量
        public int m_bidVolume3;
        //买4量
        public int m_bidVolume4;
        //买5量
        public int m_bidVolume5;
        //最新价
        public double m_close;
        //合约代码
        public String m_code;
        //今虚实度
        public double m_currDelta;
        //交易所ID
        public String m_exchangeID;
        //交易所InstID
        public String exchangeInstID;
        //最高价
        public double m_high;
        //昨日收盘价
        public double m_lastClose;
        //最低价
        public double m_low;
        //跌停价
        public double m_lowerLimit;
        //开盘价
        public double m_open;
        //持仓量
        public double m_openInterest;
        //昨收盘
        public double m_preClose;
        //昨虚实度
        public double m_preDelta;
        //昨持仓量
        public double m_preOpenInterest;
        //上次结算价
        public double m_preSettlementPrice;
        //本次结算价
        public double m_settlementPrice;
        //交易日
        public String m_tradingDay;
        //成交金额
        public double m_turnover;
        //最后修改毫秒
        public int m_updateMillisec;
        //最后修改时间
        public String m_updateTime;
        //涨停价
        public double m_upperLimit;
        //成交量
        public int m_volume;

        //新增状态
        public int m_state1;
        public int m_state2;
        public int m_state3;
        public int m_state4;
    }

    /// <summary>
    /// 历史数据
    /// </summary>
    public class SecurityData {
        /// <summary>
        /// 收盘价
        /// </summary>
        public double m_close;
        /// <summary>
        /// 日期
        /// </summary>
        public String m_date;
        /// <summary>
        /// 最高价
        /// </summary>
        public double m_high;
        /// <summary>
        /// 最低价
        /// </summary>
        public double m_low;
        /// <summary>
        /// 均价
        /// </summary>
        public double m_ma;
        /// <summary>
        /// 开盘价
        /// </summary>
        public double m_open;
    }

    /// <summary>
    /// CTP交易定义
    /// </summary>
    public class TradeRecord {
        //经纪公司代码
        public String m_brokerID;
        ///经纪公司报单编号
        public int m_brokerOrderSeq;
        ///业务单元
        public String m_businessUnit;
        ///结算会员编号
        public String m_clearingPartID;
        ///客户代码
        public String m_clientID;
        //合约代码
        public String m_code;
        //手续费
        public double m_commission;
        //买卖方向
        public String m_direction;
        //市场代码
        public String m_exchangeID;
        //合约在交易所的代码
        public String m_exchangeInstID;
        //投机套保标志
        public String m_hedgeFlag;
        //投资者代码
        public String m_investorID;
        //开平标志
        public String m_offsetFlag;
        //本地报单编号
        public String m_orderLocalID;
        //报单引用
        public String m_orderRef;
        //报单编号
        public String m_orderSysID;
        //会员代码
        public String m_participantID;
        //价格
        public double m_price;
        //成交价来源
        public String m_priceSource;
        //序号
        public int m_sequenceNo;
        //结算编号
        public int m_settlementID;
        //成交编号
        public String m_tradeID;
        //交易所交易员代码
        public string m_traderID;
        //成交时期
        public String m_tradeDate;
        //成交来源
        public String m_tradeSource;
        //成交时间
        public String m_tradeTime;
        //交易日
        public String m_tradingDay;
        //成交类型
        public String m_tradeType;
        //交易角色
        public String m_tradingRole;
        //数量
        public int m_volume;
        //用户代码
        public String m_userID;
    }

    /// <summary>
    /// 数据转换
    /// </summary>
    public class CTPConvert {

        /// <summary>
        /// 转换成CTP资金账户
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP资金账户</returns>
        public static AccountData convertToCTPAccountData(String result) {
            //资金账号信息返回
            String[] results = result.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
            AccountData cTPTradingAccount = new AccountData();
            int i = 0;
            ///经纪公司代码
            cTPTradingAccount.m_brokerID = results[i++];
            ///投资者帐号
            cTPTradingAccount.m_accountID = results[i++];
            ///上次质押金额
            cTPTradingAccount.m_preMortgage = FCStr.convertStrToDouble(results[i++]);
            ///上次信用额度
            cTPTradingAccount.m_preCredit = FCStr.convertStrToDouble(results[i++]);
            ///上次存款额
            cTPTradingAccount.m_preDeposit = FCStr.convertStrToDouble(results[i++]);
            ///上次结算准备金
            cTPTradingAccount.m_preBalance = FCStr.convertStrToDouble(results[i++]);
            ///上次占用的保证金
            cTPTradingAccount.m_preMargin = FCStr.convertStrToDouble(results[i++]);
            ///利息基数
            cTPTradingAccount.m_interestBase = FCStr.convertStrToDouble(results[i++]);
            ///利息收入
            cTPTradingAccount.m_interest = FCStr.convertStrToDouble(results[i++]);
            ///入金金额
            cTPTradingAccount.m_deposit = FCStr.convertStrToDouble(results[i++]);
            ///出金金额
            cTPTradingAccount.m_withdraw = FCStr.convertStrToDouble(results[i++]);
            ///冻结的保证金
            cTPTradingAccount.m_frozenMargin = FCStr.convertStrToDouble(results[i++]);
            ///冻结的资金
            cTPTradingAccount.m_frozenCash = FCStr.convertStrToDouble(results[i++]);
            ///冻结的手续费
            cTPTradingAccount.m_frozenCommission = FCStr.convertStrToDouble(results[i++]);
            ///当前保证金总额
            cTPTradingAccount.m_currMargin = FCStr.convertStrToDouble(results[i++]);
            ///资金差额
            cTPTradingAccount.m_cashIn = FCStr.convertStrToDouble(results[i++]);
            ///手续费
            cTPTradingAccount.m_commission = FCStr.convertStrToDouble(results[i++]);
            ///平仓盈亏
            cTPTradingAccount.m_closeProfit = FCStr.convertStrToDouble(results[i++]);
            ///持仓盈亏
            cTPTradingAccount.m_positionProfit = FCStr.convertStrToDouble(results[i++]);
            ///期货结算准备金
            cTPTradingAccount.m_balance = FCStr.convertStrToDouble(results[i++]);
            ///可用资金
            cTPTradingAccount.m_available = FCStr.convertStrToDouble(results[i++]);
            ///可取资金
            cTPTradingAccount.m_withdrawQuota = FCStr.convertStrToDouble(results[i++]);
            ///基本准备金
            cTPTradingAccount.m_reserve = FCStr.convertStrToDouble(results[i++]);
            ///交易日
            cTPTradingAccount.m_tradingDay = results[i++];
            ///结算编号
            cTPTradingAccount.m_settlementID = FCStr.convertStrToInt(results[i++]);
            ///信用额度
            cTPTradingAccount.m_credit = FCStr.convertStrToDouble(results[i++]);
            ///质押金额
            cTPTradingAccount.m_mortgage = FCStr.convertStrToDouble(results[i++]);
            ///交易所保证金
            cTPTradingAccount.m_exchangeMargin = FCStr.convertStrToDouble(results[i++]);
            ///投资者交割保证金
            cTPTradingAccount.m_deliveryMargin = FCStr.convertStrToDouble(results[i++]);
            ///交易所交割保证金
            cTPTradingAccount.m_exchangeDeliveryMargin = FCStr.convertStrToDouble(results[i++]);
            ///保底期货结算准备金
            cTPTradingAccount.m_reserveBalance = FCStr.convertStrToDouble(results[i++]);
            ///币种代码
            cTPTradingAccount.m_currencyID = results[i++];
            ///上次货币质入金额
            cTPTradingAccount.m_preFundMortgageIn = FCStr.convertStrToDouble(results[i++]);
            ///上次货币质出金额
            cTPTradingAccount.m_preFundMortgageOut = FCStr.convertStrToDouble(results[i++]);
            ///货币质入金额
            cTPTradingAccount.m_fundMortgageIn = FCStr.convertStrToDouble(results[i++]);
            ///货币质出金额
            cTPTradingAccount.m_fundMortgageOut = FCStr.convertStrToDouble(results[i++]);
            ///货币质押余额
            cTPTradingAccount.m_fundMortgageAvailable = FCStr.convertStrToDouble(results[i++]);
            ///可质押货币金额
            cTPTradingAccount.m_mortgageableFund = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品占用保证金
            cTPTradingAccount.m_specProductMargin = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品冻结保证金
            cTPTradingAccount.m_specProductFrozenMargin = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品手续费
            cTPTradingAccount.m_specProductCommission = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品冻结手续费
            cTPTradingAccount.m_specProductFrozenCommission = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品持仓盈亏
            cTPTradingAccount.m_specProductPositionProfit = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品平仓盈亏
            cTPTradingAccount.m_specProductCloseProfit = FCStr.convertStrToDouble(results[i++]);
            ///根据持仓盈亏算法计算的特殊产品持仓盈亏
            cTPTradingAccount.m_specProductPositionProfitByAlg = FCStr.convertStrToDouble(results[i++]);
            ///特殊产品交易所保证金
            cTPTradingAccount.m_specProductExchangeMargin = FCStr.convertStrToDouble(results[i++]);
            ///动态权益
            cTPTradingAccount.m_dynamicBalance = FCStr.convertStrToDouble(results[i++]);
            ///风险度
            cTPTradingAccount.m_risk = FCStr.convertStrToDouble(results[i++]);
            return cTPTradingAccount;
        }

        /// <summary>
        /// 转换成CTP手续费率
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP手续费率</returns>
        public static CommissionRate convertToCTPCommissionRate(String result) {
            String[] results = result.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
            int i = 0;
            CommissionRate cTPCommissionRate = new CommissionRate();
            cTPCommissionRate.m_code = results[i++];
            cTPCommissionRate.m_investorRange = results[i++];
            cTPCommissionRate.m_brokerID = results[i++];
            cTPCommissionRate.m_investorID = results[i++];
            cTPCommissionRate.m_openRatioByMoney = FCStr.convertStrToDouble(results[i++]);
            cTPCommissionRate.m_openRatioByVolume = FCStr.convertStrToDouble(results[i++]);
            cTPCommissionRate.m_closeRatioByMoney = FCStr.convertStrToDouble(results[i++]);
            cTPCommissionRate.m_closeRatioByVolume = FCStr.convertStrToDouble(results[i++]);
            cTPCommissionRate.m_closeTodayRatioByMoney = FCStr.convertStrToDouble(results[i++]);
            cTPCommissionRate.m_closeTodayRatioByVolume = FCStr.convertStrToDouble(results[i++]);
            return cTPCommissionRate;
        }

        /// <summary>
        /// 转换CTP合约信息
        /// </summary>
        /// <param name="str">字符串</param>
        /// <returns>合约信息</returns>
        public static List<Security> convertToCTPInstrumentDatas(String result) {
            String[] strs = result.ToString().Split(new String[] { ";" }, StringSplitOptions.RemoveEmptyEntries);
            int size = strs.Length;
            List<Security> cTPInstrumentDatas = new List<Security>();
            for (int i = 0; i < size; i++) {
                String[] results = strs[i].Split(new char[] { ',' });
                Security cTPInstrumentData = new Security();
                int j = 0;
                ///合约代码
                cTPInstrumentData.m_instrumentID = results[j++];
                ///交易所代码
                cTPInstrumentData.m_exchangeID = results[j++];
                ///合约名称
                cTPInstrumentData.m_instrumentName = results[j++];
                ///合约在交易所的代码
                cTPInstrumentData.m_exchangeInstID = results[j++];
                ///产品代码
                cTPInstrumentData.m_productID = results[j++];
                ///产品类型
                cTPInstrumentData.m_productClass = results[j++];
                ///交割年份
                cTPInstrumentData.m_deliveryYear = FCStr.convertStrToInt(results[j++]);
                ///交割月
                cTPInstrumentData.m_deliveryMonth = FCStr.convertStrToInt(results[j++]);
                ///市价单最大下单量
                cTPInstrumentData.m_maxMarketOrderVolume = FCStr.convertStrToInt(results[j++]);
                ///市价单最小下单量
                cTPInstrumentData.m_minMarketOrderVolume = FCStr.convertStrToInt(results[j++]);
                ///限价单最大下单量
                cTPInstrumentData.m_maxLimitOrderVolume = FCStr.convertStrToInt(results[j++]);
                ///限价单最小下单量
                cTPInstrumentData.m_minLimitOrderVolume = FCStr.convertStrToInt(results[j++]);
                ///合约数量乘数
                cTPInstrumentData.m_volumeMultiple = FCStr.convertStrToInt(results[j++]);
                ///最小变动价位
                cTPInstrumentData.m_priceTick = FCStr.convertStrToDouble(results[j++]);
                ///创建日
                cTPInstrumentData.m_createDate = results[j++];
                ///上市日
                cTPInstrumentData.m_openDate = results[j++];
                ///到期日
                cTPInstrumentData.m_expireDate = results[j++];
                ///开始交割日
                cTPInstrumentData.m_startDelivDate = results[j++];
                ///结束交割日
                cTPInstrumentData.m_endDelivDate = results[j++];
                ///合约生命周期状态
                cTPInstrumentData.m_instLifePhase = results[j++];
                ///当前是否交易
                cTPInstrumentData.m_isTrading = results[j++];
                ///持仓类型
                cTPInstrumentData.m_positionType = results[j++];
                ///持仓日期类型
                cTPInstrumentData.m_positionDateType = results[j++];
                ///多头保证金率   
                cTPInstrumentData.m_longMarginRatio = FCStr.convertStrToDouble(results[j++]);
                ///空头保证金率
                cTPInstrumentData.m_shortMarginRatio = FCStr.convertStrToDouble(results[j++]);
                ///是否使用大额单边保证金算法
                cTPInstrumentData.m_maxMarginSideAlgorithm = results[j++];
                ///基础商品代码
                cTPInstrumentData.m_underlyingInstrID = results[j++];
                ///执行价
                cTPInstrumentData.m_strikePrice = FCStr.convertStrToDouble(results[j++]);
                ///期权类型
                cTPInstrumentData.m_optionsType = results[j++];
                ///合约基础商品乘数
                cTPInstrumentData.m_underlyingMultiple = FCStr.convertStrToDouble(results[j++]);
                ///组合类型
                cTPInstrumentData.m_combinationType = results[j++];
                cTPInstrumentData.getNnderlyingInstrName();
                cTPInstrumentDatas.Add(cTPInstrumentData);
            }
            return cTPInstrumentDatas;
        }

        /// <summary>
        /// 转换CTP深度市场数据
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP深度市场数据</returns>
        public static List<SecurityLatestData> convertToCTPDepthMarketData(String result) {
            String[] strs = result.ToString().Split(new String[] { ";" }, StringSplitOptions.RemoveEmptyEntries);
            int size = strs.Length;
            List<SecurityLatestData> cTPLatestDatas = new List<SecurityLatestData>();
            for (int p = 0; p < size; p++) {
                //持仓信息返回
                String[] results = strs[p].Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                SecurityLatestData cTPDepthMarketData = new SecurityLatestData();
                int i = 0;
                cTPDepthMarketData.m_tradingDay = results[i++];
                cTPDepthMarketData.m_code = results[i++];
                String exchangeID = results[i++];
                String exchangeInstID = results[i++];
                cTPDepthMarketData.m_close = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_preSettlementPrice = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_preClose = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_preOpenInterest = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_open = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_high = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_low = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_volume = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_turnover = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_openInterest = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_lastClose = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_settlementPrice = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_upperLimit = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_lowerLimit = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_preDelta = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_currDelta = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_updateTime = results[i++];
                cTPDepthMarketData.m_updateMillisec = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_bidPrice1 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_bidVolume1 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_askPrice1 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_askVolume1 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_bidPrice2 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_bidVolume2 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_askPrice2 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_askVolume2 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_bidPrice3 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_bidVolume3 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_askPrice3 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_askVolume3 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_bidPrice4 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_bidVolume4 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_askPrice4 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_askVolume4 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_bidPrice5 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_bidVolume5 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_askPrice5 = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_askVolume5 = FCStr.convertStrToInt(results[i++]);
                cTPDepthMarketData.m_averagePrice = FCStr.convertStrToDouble(results[i++]);
                cTPDepthMarketData.m_actionDay = results[i++];
                cTPLatestDatas.Add(cTPDepthMarketData);
            }
            return cTPLatestDatas;
        }

        /// <summary>
        /// 转换CTP持仓信息
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP持仓信息</returns>
        public static List<InvestorPosition> convertToCTPInvestorPosition(String result) {
            List<InvestorPosition> list = new List<InvestorPosition>();
            //报单信息返回
            String[] strs = result.Split(new char[] { ';' }, StringSplitOptions.RemoveEmptyEntries);
            for (int p = 0; p < strs.Length; p++) {
                //持仓信息返回
                String[] results = strs[p].Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                InvestorPosition cTPInvestorPosition = new InvestorPosition();
                int i = 0;
                ///合约代码
                cTPInvestorPosition.m_code = results[i++];
                ///经纪公司代码
                cTPInvestorPosition.m_brokerID = results[i++];
                ///投资者代码
                cTPInvestorPosition.m_investorID = results[i++];
                ///持仓多空方向
                cTPInvestorPosition.m_posiDirection = results[i++];
                ///投机套保标志
                cTPInvestorPosition.m_hedgeFlag = results[i++];
                ///持仓日期
                cTPInvestorPosition.m_positionDate = results[i++];
                ///上日持仓
                cTPInvestorPosition.m_ydPosition = FCStr.convertStrToInt(results[i++]);
                ///今日持仓
                cTPInvestorPosition.m_position = FCStr.convertStrToInt(results[i++]);
                ///多头冻结
                cTPInvestorPosition.m_longFrozen = FCStr.convertStrToInt(results[i++]);
                ///空头冻结
                cTPInvestorPosition.m_shortFrozen = FCStr.convertStrToInt(results[i++]);
                ///开仓冻结金额
                cTPInvestorPosition.m_longFrozenAmount = FCStr.convertStrToDouble(results[i++]);
                ///开仓冻结金额
                cTPInvestorPosition.m_shortFrozenAmount = FCStr.convertStrToDouble(results[i++]);
                ///开仓量
                cTPInvestorPosition.m_openVolume = FCStr.convertStrToInt(results[i++]);
                ///平仓量
                cTPInvestorPosition.m_closeVolume = FCStr.convertStrToInt(results[i++]);
                ///开仓金额
                cTPInvestorPosition.m_openAmount = FCStr.convertStrToDouble(results[i++]);
                ///平仓金额
                cTPInvestorPosition.m_closeAmount = FCStr.convertStrToDouble(results[i++]);
                ///持仓成本
                cTPInvestorPosition.m_positionCost = FCStr.convertStrToDouble(results[i++]);
                ///上次占用的保证金
                cTPInvestorPosition.m_preMargin = FCStr.convertStrToDouble(results[i++]);
                ///占用的保证金
                cTPInvestorPosition.m_useMargin = FCStr.convertStrToDouble(results[i++]);
                ///冻结的保证金
                cTPInvestorPosition.m_frozenMargin = FCStr.convertStrToDouble(results[i++]);
                ///冻结的资金
                cTPInvestorPosition.m_frozenCash = FCStr.convertStrToDouble(results[i++]);
                ///冻结的手续费
                cTPInvestorPosition.m_frozenCommission = FCStr.convertStrToDouble(results[i++]);
                ///资金差额
                cTPInvestorPosition.m_cashIn = FCStr.convertStrToDouble(results[i++]);
                ///手续费
                cTPInvestorPosition.m_margin = FCStr.convertStrToDouble(results[i++]);
                ///平仓盈亏
                cTPInvestorPosition.m_floatProfit = FCStr.convertStrToDouble(results[i++]);
                ///持仓盈亏
                cTPInvestorPosition.m_positionProfit = FCStr.convertStrToDouble(results[i++]);
                ///上次结算价
                cTPInvestorPosition.m_preSettlementPrice = FCStr.convertStrToDouble(results[i++]);
                ///本次结算价
                cTPInvestorPosition.m_settlementPrice = FCStr.convertStrToDouble(results[i++]);
                ///交易日
                cTPInvestorPosition.m_tradingDate = results[i++];
                ///结算编号
                cTPInvestorPosition.m_settlementID = FCStr.convertStrToInt(results[i++]);
                ///开仓成本
                cTPInvestorPosition.m_openCost = FCStr.convertStrToDouble(results[i++]);
                ///交易所保证金
                cTPInvestorPosition.m_exchangeMargin = FCStr.convertStrToDouble(results[i++]);
                ///组合成交形成的持仓
                cTPInvestorPosition.m_combPosition = FCStr.convertStrToInt(results[i++]);
                ///组合多头冻结
                cTPInvestorPosition.m_combLongFrozen = FCStr.convertStrToInt(results[i++]);
                ///组合空头冻结
                cTPInvestorPosition.m_combShortFrozen = FCStr.convertStrToInt(results[i++]);
                ///逐日盯市平仓盈亏
                cTPInvestorPosition.m_closeProfitByDate = FCStr.convertStrToDouble(results[i++]);
                ///逐笔对冲平仓盈亏
                cTPInvestorPosition.m_closeProfitByTrade = FCStr.convertStrToDouble(results[i++]);
                ///今日持仓
                cTPInvestorPosition.m_todayPosition = FCStr.convertStrToInt(results[i++]);
                ///保证金率
                cTPInvestorPosition.m_marginRateByMoney = FCStr.convertStrToDouble(results[i++]);
                ///保证金率(按手数)
                cTPInvestorPosition.m_marginRateByVolume = FCStr.convertStrToDouble(results[i++]);
                ///执行冻结
                cTPInvestorPosition.m_strikeFrozen = FCStr.convertStrToInt(results[i++]);
                ///执行冻结金额
                cTPInvestorPosition.m_strikeFrozenAmount = FCStr.convertStrToDouble(results[i++]);
                ///放弃执行冻结
                cTPInvestorPosition.m_abandonFrozen = FCStr.convertStrToInt(results[i++]);
                //开仓均价
                cTPInvestorPosition.m_openPrice = FCStr.convertStrToInt(results[i++]);
                list.Add(cTPInvestorPosition);
            }
            return list;
        }

        /// <summary>
        /// 转换CTP持仓明细信息
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP明细持仓信息</returns>
        public static List<InvestorPositionDetail> convertToCTPInvestorPositionDetail(String result) {
            List<InvestorPositionDetail> list = new List<InvestorPositionDetail>();
            //报单信息返回
            String[] strs = result.Split(new char[] { ';' }, StringSplitOptions.RemoveEmptyEntries);
            for (int p = 0; p < strs.Length; p++) {
                //持仓信息返回
                String[] results = strs[p].Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                InvestorPositionDetail cTPInvestorPositionDetail = new InvestorPositionDetail();
                int i = 0;
                cTPInvestorPositionDetail.m_code = results[i++];
                cTPInvestorPositionDetail.m_brokerID = results[i++];
                cTPInvestorPositionDetail.m_investorID = results[i++];
                cTPInvestorPositionDetail.m_hedgeFlag = results[i++];
                cTPInvestorPositionDetail.m_direction = results[i++];
                cTPInvestorPositionDetail.m_openDate = results[i++];
                cTPInvestorPositionDetail.m_tradeID = results[i++];
                cTPInvestorPositionDetail.m_volume = FCStr.convertStrToInt(results[i++]);
                cTPInvestorPositionDetail.m_openPrice = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_tradingDay = results[i++];
                cTPInvestorPositionDetail.m_settlementID = FCStr.convertStrToInt(results[i++]);
                cTPInvestorPositionDetail.m_tradeType = results[i++];
                cTPInvestorPositionDetail.m_combInstrumentID = results[i++];
                cTPInvestorPositionDetail.m_exchangeID = results[i++];
                cTPInvestorPositionDetail.m_closeProfitByDate = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_closeProfitByTrade = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_positionProfitByDate = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_positionProfitByTrade = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_margin = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_exchMargin = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_marginRateByMoney = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_marginRateByVolume = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_lastSettlementPrice = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_lastSettlementPrice = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_settlementPrice = FCStr.convertStrToDouble(results[i++]);
                cTPInvestorPositionDetail.m_closeVolume = FCStr.convertStrToInt(results[i++]);
                list.Add(cTPInvestorPositionDetail);
            }
            return list;
        }

        /// <summary>
        /// 转换CTP保证金率
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP保证金率</returns>
        public static MarginRate convertToCTPMarginRate(String result) {
            String[] results = result.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
            MarginRate cTPMarginRate = null;
            int i = 0;
            cTPMarginRate = new MarginRate();
            cTPMarginRate.m_code = results[i++];
            cTPMarginRate.m_brokerID = results[i++];
            cTPMarginRate.m_investorID = results[i++];
            cTPMarginRate.m_hedgeFlag = results[i++];
            cTPMarginRate.m_longMarginRatioByMoney = FCStr.convertStrToDouble(results[i++]);
            cTPMarginRate.m_longMarginRatioByVolume = FCStr.convertStrToDouble(results[i++]);
            cTPMarginRate.m_shortMarginRatioByMoney = FCStr.convertStrToDouble(results[i++]);
            cTPMarginRate.m_shortMarginRatioByVolume = FCStr.convertStrToDouble(results[i++]);
            cTPMarginRate.m_isRelativel = FCStr.convertStrToInt(results[i++]);
            return cTPMarginRate;
        }

        /// <summary>
        /// 转换CTP报单信息
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP报单信息</returns>
        public static List<OrderInfo> convertToCTPOrderList(String result) {
            List<OrderInfo> lst = new List<OrderInfo>();
            //报单信息返回
            String[] results = result.Split(new char[] { ';' }, StringSplitOptions.RemoveEmptyEntries);
            for (int i = 0; i < results.Length; i++) {
                OrderInfo order = convertToCTPOrder(results[i]);
                if (order != null) {
                    lst.Add(order);
                }
            }
            return lst;
        }

        /// <summary>
        /// 转换CTP报单信息
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP报单信息</returns>
        public static OrderInfo convertToCTPOrder(String result) {
            //报单信息返回
            String[] results = result.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
            OrderInfo cTPOrder = null;
            cTPOrder = new OrderInfo();
            int i = 0;
            ///经纪公司代码
            cTPOrder.m_brokerID = results[i++];
            ///投资者代码
            cTPOrder.m_investorID = results[i++];
            ///合约代码
            cTPOrder.m_code = results[i++];
            ///报单引用
            cTPOrder.m_orderRef = results[i++];
            ///用户代码
            cTPOrder.m_userID = results[i++];
            ///报单价格条件
            cTPOrder.m_orderPriceType = results[i++];
            ///买卖方向
            cTPOrder.m_direction = results[i++];
            ///组合开平标志
            cTPOrder.m_combOffsetFlag = results[i++];
            ///组合投机套保标志
            cTPOrder.m_combHedgeFlag = results[i++];
            ///价格
            cTPOrder.m_limitPrice = FCStr.convertStrToDouble(results[i++]);
            ///数量
            cTPOrder.m_volumeTotalOriginal = FCStr.convertStrToInt(results[i++]);
            ///有效期类型
            cTPOrder.m_timeCondition = results[i++];
            ///GTD日期
            cTPOrder.m_gTDDate = results[i++];
            ///成交量类型
            cTPOrder.m_volumeCondition = results[i++];
            ///最小成交量
            cTPOrder.m_minVolume = FCStr.convertStrToInt(results[i++]);
            ///触发条件
            cTPOrder.m_contingentCondition = results[i++];
            ///止损价
            cTPOrder.m_stopPrice = FCStr.convertStrToDouble(results[i++]);
            ///强平原因
            cTPOrder.m_forceCloseReason = results[i++];
            ///自动挂起标志
            cTPOrder.m_isAutoSuspend = FCStr.convertStrToInt(results[i++]);
            ///业务单元
            cTPOrder.m_businessUnit = results[i++];
            ///请求编号
            cTPOrder.m_requestID = FCStr.convertStrToInt(results[i++]);
            ///本地报单编号
            cTPOrder.m_orderLocalID = results[i++];
            ///交易所代码
            cTPOrder.m_exchangeID = results[i++];
            ///会员代码
            cTPOrder.m_participantID = results[i++];
            ///客户代码
            cTPOrder.m_clientID = results[i++];
            ///合约在交易所的代码
            cTPOrder.m_exchangeInstID = results[i++];
            ///交易所交易员代码
            cTPOrder.m_traderID = results[i++];
            ///安装编号
            cTPOrder.m_installID = results[i++];
            ///报单提交状态
            cTPOrder.m_orderSubmitStatus = results[i++];
            ///报单提示序号
            cTPOrder.m_notifySequence = FCStr.convertStrToInt(results[i++]);
            ///交易日
            cTPOrder.m_tradingDay = results[i++];
            ///结算编号
            cTPOrder.m_settlementID = FCStr.convertStrToInt(results[i++]);
            ///报单编号
            cTPOrder.m_orderSysID = results[i++];
            ///报单来源
            cTPOrder.m_orderSource = results[i++];
            ///报单状态
            cTPOrder.m_orderStatus = results[i++];
            ///报单类型
            cTPOrder.m_orderType = results[i++];
            ///今成交数量
            cTPOrder.m_volumeTraded = FCStr.convertStrToInt(results[i++]);
            ///剩余数量
            cTPOrder.m_volumeTotal = FCStr.convertStrToInt(results[i++]);
            ///报单日期
            cTPOrder.m_insertDate = results[i++];
            ///委托时间
            cTPOrder.m_insertTime = results[i++];
            ///激活时间
            cTPOrder.m_activeTime = results[i++];
            ///挂起时间
            cTPOrder.m_suspendTime = results[i++];
            ///最后修改时间
            cTPOrder.m_updateTime = results[i++];
            ///撤销时间
            cTPOrder.m_cancelTime = results[i++];
            ///最后修改交易所交易员代码
            cTPOrder.m_activeTraderID = results[i++];
            ///结算会员编号
            cTPOrder.m_clearingPartID = results[i++];
            ///序号
            cTPOrder.m_sequenceNo = FCStr.convertStrToInt(results[i++]);
            ///前置编号
            cTPOrder.m_frontID = FCStr.convertStrToInt(results[i++]);
            ///会话编号
            cTPOrder.m_sessionID = FCStr.convertStrToInt(results[i++]);
            ///用户端产品信息
            cTPOrder.m_userProductInfo = results[i++];
            ///状态信息
            cTPOrder.m_statusMsg = results[i++];
            ///用户强评标志
            cTPOrder.m_userForceClose = FCStr.convertStrToInt(results[i++]);
            ///操作用户代码
            cTPOrder.m_activeUserID = results[i++];
            ///经纪公司报单编号
            cTPOrder.m_brokerOrderSeq = FCStr.convertStrToInt(results[i++]);
            ///相关报单
            cTPOrder.m_relativeOrderSysID = results[i++];
            ///郑商所成交数量
            cTPOrder.m_zCETotalTradedVolume = FCStr.convertStrToInt(results[i++]);
            ///互换单标志
            cTPOrder.m_isSwapOrder = FCStr.convertStrToInt(results[i++]);
            return cTPOrder;
        }

        /// <summary>
        /// 转换CTP交易信息
        /// </summary>
        /// <param name="result">字符串</param>
        /// <returns>CTP交易信息</returns>
        public static TradeRecord convertToCTPTrade(String result) {
            //CTP交易信息返回
            String[] results = result.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
            TradeRecord cTPTrade = null;
            cTPTrade = new TradeRecord();
            int i = 0;
            ///经纪公司代码
            cTPTrade.m_brokerID = results[i++];
            ///投资者代码
            cTPTrade.m_investorID = results[i++];
            ///合约代码
            cTPTrade.m_code = results[i++];
            ///报单引用
            cTPTrade.m_orderRef = results[i++];
            ///用户代码
            cTPTrade.m_userID = results[i++];
            ///交易所代码
            cTPTrade.m_exchangeID = results[i++];
            ///成交编号
            cTPTrade.m_tradeID = results[i++];
            ///买卖方向
            cTPTrade.m_direction = results[i++];
            ///报单编号
            cTPTrade.m_orderSysID = results[i++];
            ///会员代码
            cTPTrade.m_participantID = results[i++];
            ///客户代码
            cTPTrade.m_clientID = results[i++];
            ///交易角色
            cTPTrade.m_tradingRole = results[i++];
            ///合约在交易所的代码
            cTPTrade.m_exchangeInstID = results[i++];
            ///开平标志
            cTPTrade.m_offsetFlag = results[i++];
            ///投机套保标志
            cTPTrade.m_hedgeFlag = results[i++];
            ///价格
            cTPTrade.m_price = FCStr.convertStrToDouble(results[i++]);
            ///数量
            cTPTrade.m_volume = FCStr.convertStrToInt(results[i++]);
            ///成交时期
            cTPTrade.m_tradeDate = results[i++];
            ///成交时间
            cTPTrade.m_tradeTime = results[i++];
            ///成交类型
            cTPTrade.m_tradeType = results[i++];
            ///成交价来源
            cTPTrade.m_priceSource = results[i++];
            ///交易所交易员代码
            cTPTrade.m_traderID = results[i++];
            ///本地报单编号
            cTPTrade.m_orderLocalID = results[i++];
            ///结算会员编号
            cTPTrade.m_clearingPartID = results[i++];
            ///业务单元
            cTPTrade.m_businessUnit = results[i++];
            ///序号
            cTPTrade.m_sequenceNo = FCStr.convertStrToInt(results[i++]);
            ///交易日
            cTPTrade.m_tradingDay = results[i++];
            ///结算编号
            cTPTrade.m_settlementID = FCStr.convertStrToInt(results[i++]);
            ///经纪公司报单编号
            cTPTrade.m_brokerOrderSeq = FCStr.convertStrToInt(results[i++]);
            ///成交来源
            cTPTrade.m_tradeSource = results[i++];
            ///手续费
            cTPTrade.m_commission = FCStr.convertStrToDouble(results[i++]);
            return cTPTrade;
        }

        /// <summary>
        /// 转换CTP交易信息列表
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public static List<TradeRecord> convertToCTPTradeRecords(String result) {
            List<TradeRecord> list = new List<TradeRecord>();
            //报单信息返回
            String[] results = result.Split(new char[] { ';' }, StringSplitOptions.RemoveEmptyEntries);
            for (int i = 0; i < results.Length; i++) {
                TradeRecord trade = convertToCTPTrade(results[i]);
                if (trade != null) {
                    list.Add(trade);
                }
            }
            return list;
        }
    }
}
