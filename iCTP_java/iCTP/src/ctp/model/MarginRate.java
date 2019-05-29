/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class MarginRate {
	// 经纪公司代码
	public String m_brokerID;
	// 收费方式
	public String m_calculateMode;
	// 看涨看跌标示
	public String m_callOrPutFlag;
	// 合约代码
	public String m_code;
	// 代码
	public String m_commodityNo;
	// 类型
	public String m_commodityType;
	// 合约
	public String m_contractNo;
	// 投机套保标志
	public String m_hedgeFlag;
	public double m_initialMargin;
	// 投资者代码
	public String m_investorID;
	// 投资者范围
	public String m_investorRange;
	// 是否相对交易所收取
	public int m_isRelativel;
	public double m_lockMargin;
	// 多头保证金率
	public double m_longMarginRatioByMoney;
	// 多头保证金费
	public double m_longMarginRatioByVolume;
	public double m_maintenanceMargin;
	public double m_sellInitialMargin;
	public double m_sellMaintenanceMargin;
	// 空头保证金率
	public double m_shortMarginRatioByMoney;
	// 空头保证金费
	public double m_shortMarginRatioByVolume;
	public String m_strikePrice;
}
