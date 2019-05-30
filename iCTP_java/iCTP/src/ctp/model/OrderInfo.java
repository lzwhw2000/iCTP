/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class OrderInfo {
	// 激活时间
	public String m_activeTime;
	// 最后修改交易所交易员代码
	public String m_activeTraderID;
	// 操作用户代码
	public String m_activeUserID;
	// 经纪公司代码
	public String m_brokerID;
	// 经纪公司报单编号
	public int m_brokerOrderSeq;
	// 业务单元
	public String m_businessUnit;
	// 撤销时间
	public String m_cancelTime;
	// 结算会员编号
	public String m_clearingPartID;
	// 客户代码
	public String m_clientID;
	// 合约代码
	public String m_code;
	// 组合投机套保标志
	public String m_combHedgeFlag;
	// 组合开平标志
	public String m_combOffsetFlag;
	// 触发条件
	public String m_contingentCondition;
	// 买卖方向
	public String m_direction;
	// 交易所代码
	public String m_exchangeID;
	// 合约在交易所的代码
	public String m_exchangeInstID;
	// 强平原因
	public String m_forceCloseReason;
	// 前置编号
	public int m_frontID;
	// GTD日期
	public String m_gTDDate;
	// 报单日期
	public String m_insertDate;
	// 委托时间
	public String m_insertTime;
	// 安装编号
	public String m_installID;
	// 投资者代码
	public String m_investorID;
	// 自动挂起标志
	public int m_isAutoSuspend;
	// 互换单标志
	public int m_isSwapOrder;
	// 价格
	public double m_limitPrice;
	// 最小成交量
	public int m_minVolume;
	// 报单提示序号
	public int m_notifySequence;
	// 本地报单编号
	public String m_orderLocalID;
	// 报单价格条件
	public String m_orderPriceType;
	// 报单引用
	public String m_orderRef;
	// 报单来源
	public String m_orderSource;
	// 报单状态
	public String m_orderStatus;
	// 报单提交状态
	public String m_orderSubmitStatus;
	// 报单编号
	public String m_orderSysID;
	// 报单类型
	public String m_orderType;
	// 会员代码
	public String m_participantID;
	// 相关报单
	public String m_relativeOrderSysID;
	// 请求编号
	public int m_requestID;
	// 序号
	public int m_sequenceNo;
	// 会话编号
	public int m_sessionID;
	// 结算编号
	public int m_settlementID;
	// 状态信息
	public String m_statusMsg;
	// 止损价
	public double m_stopPrice;
	// 挂起时间
	public String m_suspendTime;
	// 有效期类型
	public String m_timeCondition;
	// 交易所交易员代码
	public String m_traderID;
	// 交易日
	public String m_tradingDay;
	// 最后修改时间
	public String m_updateTime;
	// 用户强评标志
	public int m_userForceClose;
	// 用户代码
	public String m_userID;
	// 用户端产品信息
	public String m_userProductInfo;
	// 成交量类型
	public String m_volumeCondition;
	// 剩余数量
	public int m_volumeTotal;
	// 数量
	public int m_volumeTotalOriginal;
	// 今成交数量
	public int m_volumeTraded;
	// 郑商所成交数量
	public int m_zCETotalTradedVolume;
}
