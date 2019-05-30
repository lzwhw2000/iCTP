/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

public class Security {
	// 组合类型
	public String m_combinationType;
	// 创建日
	public String m_createDate;
	// 交割月
	public int m_deliveryMonth;
	// 交割年份
	public int m_deliveryYear;
	// 保留小数位数
	public int m_digit;
	// 结束交割日
	public String m_endDelivDate;
	// 交易所代码
	public String m_exchangeID;
	// 合约在交易所的代码
	public String m_exchangeInstID;
	// 到期日
	public String m_expireDate;
	// 合约生命周期状态
	public String m_instLifePhase;
	// 合约代码
	public String m_instrumentID;
	// 合约名称
	public String m_instrumentName;
	// 当前是否交易
	public String m_isTrading;
	// 多头保证金率
	public double m_longMarginRatio;
	// 限价单最大下单量
	public int m_maxLimitOrderVolume;
	// 是否使用大额单边保证金算法
	public String m_maxMarginSideAlgorithm;
	// 市价单最大下单量
	public int m_maxMarketOrderVolume;
	// 限价单最小下单量
	public int m_minLimitOrderVolume;
	// 市价单最小下单量
	public int m_minMarketOrderVolume;
	// 上市日
	public String m_openDate;
	// 期权类型
	public String m_optionsType;
	// 持仓日期类型
	public String m_positionDateType;
	// 持仓类型
	public String m_positionType;
	// 最小变动价位
	public double m_priceTick;
	// 产品类型
	public String m_productClass;
	// 产品代码
	public String m_productID;
	// 空头保证金率
	public double m_shortMarginRatio;
	// 开始交割日
	public String m_startDelivDate;
	// 执行价
	public double m_strikePrice;
	// 基础商品代码
	public String m_underlyingInstrID;
	// 基础商品名称
	public String m_underlyingInstrName;
	// 合约基础商品乘数
	public double m_underlyingMultiple;
	// 合约数量乘数
	public int m_volumeMultiple;

	public void GetNnderlyingInstrName() {
		int size = m_instrumentName.length();
		m_underlyingInstrName = "";
		for (int i = 0; i < size; i++) {
			char sz = m_instrumentName.charAt(i);
			if (!(sz == '0' || sz == '1' || sz == '2' || sz == '3' || sz == '4' || sz == '5' || sz == '6' || sz == '7'
					|| sz == '8' || sz == '9')) {
				m_underlyingInstrName += sz;
			}
		}
	}
}
