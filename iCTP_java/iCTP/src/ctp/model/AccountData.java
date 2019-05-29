/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp.model;

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
