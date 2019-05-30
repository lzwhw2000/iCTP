/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class InvestorPositionDetail {
	// 经纪公司代码
	public String m_brokerID;
	// 平仓金额
	public double m_closeAmount;
	// 平仓盈亏
	public double m_closeProfit;
	// 逐日盯市持仓盈亏
	public double m_closeProfitByDate;
	// 逐笔对冲持仓盈亏
	public double m_closeProfitByTrade;
	// 平仓量
	public double m_closeVolume;
	// 合约代码
	public String m_code;
	// 组合合约代码
	public String m_combInstrumentID;
	// 买卖
	public String m_direction;
	// 交易所代码
	public String m_exchangeID;
	// 交易所保证金
	public double m_exchMargin;
	// 浮动盈亏
	public double m_floatProfit;
	// 投机套保标志
	public String m_hedgeFlag;
	// 投资者代码
	public String m_investorID;
	// 昨收盘
	public double m_lastPrice;
	// 昨结算价
	public double m_lastSettlementPrice;
	// 投资者保证金
	public double m_margin;
	// 保证金率
	public double m_marginRateByMoney;
	// 保证金率(按手数)
	public double m_marginRateByVolume;
	// 内部编号
	public String m_orderRef;
	// 开仓日期
	public String m_openDate;
	// 开仓价
	public double m_openPrice;
	// 开仓量
	public int m_openVolume;
	// 本地持仓号，服务器编写
	public String m_positionNo;
	// 持仓盈亏
	public double m_positionProfit;
	// 逐日盯市持仓利润
	public double m_positionProfitByDate;
	// 逐笔对冲持仓利润
	public double m_positionProfitByTrade;
	// 持仓流号
	public int m_positionStreamId;
	// 昨结算价
	public double m_preSettlementPrice;
	// 持仓盈亏基准价
	public double m_profitBasePrice;
	// 结算编号
	public int m_settlementID;
	// 结算价
	public double m_settlementPrice;
	// 成交日期
	public String m_tradingDay;
	// 成交编号
	public String m_tradeID;
	// 成交类型
	public String m_tradeType;
	// 数量
	public int m_volume;
}
