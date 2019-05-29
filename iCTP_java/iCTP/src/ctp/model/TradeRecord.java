/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class TradeRecord {
	// 经纪公司代码
	public String m_brokerID;
	/// 经纪公司报单编号
	public int m_brokerOrderSeq;
	/// 业务单元
	public String m_businessUnit;
	/// 结算会员编号
	public String m_clearingPartID;
	/// 客户代码
	public String m_clientID;
	// 合约代码
	public String m_code;
	// 买卖方向
	public String m_direction;
	// 市场代码
	public String m_exchangeID;
	// 合约在交易所的代码
	public String m_exchangeInstID;
	// 投机套保标志
	public String m_hedgeFlag;
	// 投资者代码
	public String m_investorID;
	// 开平标志
	public String m_offsetFlag;
	// 本地报单编号
	public String m_orderLocalID;
	// 报单引用
	public String m_orderRef;
	// 报单编号
	public String m_orderSysID;
	// 会员代码
	public String m_participantID;
	// 价格
	public double m_price;
	// 成交价来源
	public String m_priceSource;
	// 序号
	public int m_sequenceNo;
	// 结算编号
	public int m_settlementID;
	// 成交时期
	public String m_tradeDate;
	// 成交编号
	public String m_tradeID;
	// 交易所交易员代码
	public String m_traderID;
	// 成交来源
	public String m_tradeSource;
	// 成交时间
	public String m_tradeTime;
	// 成交类型
	public String m_tradeType;
	// 交易日
	public String m_tradingDay;
	// 交易角色
	public String m_tradingRole;
	// 用户代码
	public String m_userID;
	// 数量
	public int m_volume;
}
