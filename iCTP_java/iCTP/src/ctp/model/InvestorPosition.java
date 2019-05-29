/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class InvestorPosition {
	// 放弃执行冻结
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
	// 保证金率
	public double m_marginRateByMoney;
	// 保证金率(按手数)
	public double m_marginRateByVolume;
	// 开仓金额
	public double m_openAmount;
	// 开仓成本
	public double m_openCost;
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
	// 交易日
	public String m_tradingDate;
	// 占用的保证金
	public double m_useMargin;
	// 上日持仓
	public int m_ydPosition;

	// 获取可用仓位
	int GetAvailablePosition() {
		int position = 0;
		position = m_position - GetFrozenAmount();
		return position;
	};

	int GetFrozenAmount() {
		int position = 0;
		if (m_posiDirection.equals("多")) {
			position = m_longFrozen;
		} else if (m_posiDirection.equals("空")) {
			position = m_shortFrozen;
		}
		return position;
	};
}
