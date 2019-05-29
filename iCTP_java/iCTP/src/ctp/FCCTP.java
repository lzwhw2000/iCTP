/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp;

import java.util.List;

import ctp.model.Security;
import ctp.model.SecurityLatestData;

/**
 * FCCTP 用户接口
 * 
 * @author todd
 *
 */
public interface FCCTP {
	/**
	 * 卖平：多单平仓
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int askClose(int ctpID, int requestID, String code, double price, char qty, char timeCondition, String orderRef);

	/**
	 * 卖平今仓：平今天的开仓的空单
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int askCloseToday(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	/**
	 * 卖开：空单开仓
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int askOpen(int ctpID, int requestID, String code, double price, char qty, char timeCondition, String orderRef);

	/**
	 * 买平：空单平仓
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int bidClose(int ctpID, int requestID, String code, double price, char qty, char timeCondition, String orderRef);

	/**
	 * 买平今仓：平今天的开仓的空单
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int bidCloseToday(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	/**
	 * 买开：多单开仓
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param code
	 * @param price
	 * @param qty
	 * @param timeCondition
	 * @param orderRef
	 * @return
	 */
	int bidOpen(int ctpID, int requestID, String code, double price, char qty, char timeCondition, String orderRef);

	/**
	 * 撤单
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param exchangeID
	 * @param orderSysID
	 * @param orderRef
	 * @return
	 */
	int cancelOrder(int ctpID, int requestID, String exchangeID, String orderSysID, String orderRef);

	/**
	 * 和交易所建立连接
	 * 
	 * @return
	 */
	int create();

	/**
	 * 生成ctp请求编号
	 * 
	 * @param ctpID
	 * @return
	 */
	int generateReqID(int ctpID);

	/**
	 * 获取资金账户信息
	 * 
	 * @param ctpID
	 * @return
	 */
	String getAccountData(int ctpID);

	/**
	 * 获取经纪公司ID
	 * 
	 * @param ctpID
	 * @return
	 */
	String getBrokerID(int ctpID);

	/**
	 * 获取手续费率
	 * 
	 * @param ctpID
	 * @param code
	 * @return
	 */
	String getCommissionRate(int ctpID, String code);

	/**
	 * 获取深度市场行情
	 * 
	 * @param ctpID
	 * @return
	 */
	SecurityLatestData getDepthMarketData(int ctpID);

	/**
	 * 获取合约数据
	 * 
	 * @param ctpID
	 * @return
	 */
	List<Security> getInstrumentsData(int ctpID);

	/**
	 * 获取投资者ID
	 * 
	 * @param ctpID
	 * @return
	 */
	String getInvestorID(int ctpID);

	/**
	 * 获取保证金率
	 * 
	 * @param ctpID
	 * @param code
	 * @return
	 */
	String getMarginRate(int ctpID, String code);

	/**
	 * 获取最新的委托回报（上一条)
	 * 
	 * @param ctpID
	 * @return
	 */
	String getOrderInfo(int ctpID);

	/**
	 * 获取所有的最新委托回报（今天的所有委托）
	 * 
	 * @param ctpID
	 * @return
	 */
	String getOrderInfos(int ctpID);

	/**
	 * 得到投资者密码
	 * 
	 * @param ctpID
	 * @return
	 */
	String getPassword(int ctpID);

	/**
	 * 获取投资者持仓数据
	 * 
	 * @param ctpID
	 * @return
	 */
	String getPositionData(int ctpID);

	/**
	 * 获取投资者持仓明细数据
	 * 
	 * @param ctpID
	 * @return
	 */
	String getPositionDetailData(int ctpID);

	/**
	 * 获取sessionID
	 * 
	 * @param ctpID
	 * @return
	 */
	int getSessionID(int ctpID);

	/**
	 * 获取最新成交记录（上一条）
	 * 
	 * @param ctpID
	 * @return
	 */
	String getTradeRecord(int ctpID);

	/**
	 * 获取最新交易记录（今天的所有交易）
	 * 
	 * @param ctpID
	 * @return
	 */
	String getTradeRecords(int ctpID);

	/**
	 * 获取交易日期
	 * 
	 * @param ctpID
	 * @return
	 */
	String getTradingDate(int ctpID);

	/**
	 * 获取交易时间
	 * 
	 * @param ctpID
	 * @return
	 */
	String getTradingTime(int ctpID);

	/**
	 * 当天是否已经结算
	 * 
	 * @param ctpID
	 * @return
	 */
	int isClearanced(int ctpID);

	/**
	 * 是否是结算时间
	 * 
	 * @param ctpID
	 * @return
	 */
	int isClearanceTime(int ctpID);
        
        /**
	 * 数据是否准备完成
	 * 
	 * @param ctpID
	 * @return
	 */
	int isDataOk(int ctpID);

	/**
	 * 行情数据服务器是否已经登录
	 * 
	 * @param ctpID
	 * @return
	 */
	boolean isMdLogined(int ctpID);

	/**
	 * 交易是否已经登录
	 * 
	 * @param ctpID
	 * @return
	 */
	boolean isTdLogined(int ctpID);

	/**
	 * 是否是交易时间
	 * 
	 * @param ctpID
	 * @return
	 */
	int isTradingTime(int ctpID);

	/**
	 * 是否是精确交易时间(去掉集合竞价时间和休息时间)
	 * 
	 * @param ctpID
	 * @param code
	 * @return
	 */
	int isTradingTimeExact(int ctpID, String code);

	/**
	 * 请求手续费率
	 * 
	 * @param ctpID
	 * @param code
	 * @param requestID
	 * @return
	 */
	int reqCommissionRate(int ctpID, String code, int requestID);

	/**
	 * 请求保证金率
	 * 
	 * @param ctpID
	 * @param code
	 * @param requestID
	 * @return
	 */
	int reqMarginRate(int ctpID, String code, int requestID);
        
	/**
	 * 请求确认结算信息
	 * 
	 * @param ctpID
	 * @param requestID
	 * @return
	 */
	int reqQrySettlementInfoConfirm(int ctpID, int requestID);
        
        /**
	 * 请求结算信息
	 * 
	 * @param ctpID
	 * @param requestID
	 * @return
	 */
        int reqQrySettlementInfo(int ctpID, int requestID, String tradingDate);

	/**
	 * 启动创建的连接(在create后执行)
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param mdServer
	 * @param tdServer
	 * @param brokerID
	 * @param investorID
	 * @param password
	 * @return
	 */
	int start(int ctpID, int requestID, String mdServer, String tdServer, String brokerID, String investorID,
			String password);

	/**
	 * 订阅多个合约的行情数据
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param codes
	 * @return
	 */
	int subMarketDatas(int ctpID, int requestID, String codes);

	/**
	 * 取消订阅多个合约的行情数据
	 * 
	 * @param ctpID
	 * @param requestID
	 * @param codes
	 * @return
	 */
	int unSubMarketDatas(int ctpID, int requestID, String codes);
}
