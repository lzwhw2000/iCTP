/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class SecurityLatestData {
	// 交易所InstID
	public String exchangeInstID;
	// 触发日
	public String m_actionDay;
	// 卖1价
	public double m_askPrice1;
	// 卖2价
	public double m_askPrice2;
	// 卖3价
	public double m_askPrice3;
	// 卖4价
	public double m_askPrice4;
	// 卖5价
	public double m_askPrice5;
	// 卖1量
	public int m_askVolume1;
	// 卖2量
	public int m_askVolume2;
	// 卖3量
	public int m_askVolume3;
	// 卖4量
	public int m_askVolume4;
	// 卖5量
	public int m_askVolume5;
	// 平均价格
	public double m_averagePrice;
	// 买1价
	public double m_bidPrice1;
	// 买2价
	public double m_bidPrice2;
	// 买3价
	public double m_bidPrice3;
	// 买4价
	public double m_bidPrice4;
	// 买5价
	public double m_bidPrice5;
	// 买1量
	public int m_bidVolume1;
	// 买2量
	public int m_bidVolume2;
	// 买3量
	public int m_bidVolume3;
	// 买4量
	public int m_bidVolume4;
	// 买5量
	public int m_bidVolume5;
	// 最新价
	public double m_close;
	// 合约代码
	public String m_code;
	// 今虚实度
	public double m_currDelta;
	// 交易所ID
	public String m_exchangeID;
	// 最高价
	public double m_high;
	// 昨日收盘价
	public double m_lastClose;
	// 最低价
	public double m_low;
	// 跌停价
	public double m_lowerLimit;
	// 开盘价
	public double m_open;
	// 持仓量
	public double m_openInterest;
	// 昨收盘
	public double m_preClose;
	// 昨虚实度
	public double m_preDelta;
	// 昨持仓量
	public double m_preOpenInterest;
	// 上次结算价
	public double m_preSettlementPrice;
	// 本次结算价
	public double m_settlementPrice;
	// 交易日
	public String m_tradingDay;
	// 成交金额
	public double m_turnover;
	// 最后修改毫秒
	public int m_updateMillisec;
	// 最后修改时间
	public String m_updateTime;
	// 涨停价
	public double m_upperLimit;
	// 成交量
	public int m_volume;
}
