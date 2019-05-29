/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

package ctp;

/**
 * CTP 接口 函数定义<br/>
 * 
 * 这个类不向用户直接访问
 * 
 * @author todd
 *
 */
final class IFCCTP {
	static {
		try {
			System.loadLibrary("iCTPJ");
		} catch (Exception e) {
			System.exit(1);
		}
	}

	protected native int askClose(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	protected native int askCloseToday(int ctpID, int requestID, String code, double price, char qty,
			char timeCondition, String orderRef);

	protected native int askOpen(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	protected native int bidClose(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	protected native int bidCloseToday(int ctpID, int requestID, String code, double price, char qty,
			char timeCondition, String orderRef);

	protected native int bidOpen(int ctpID, int requestID, String code, double price, char qty, char timeCondition,
			String orderRef);

	protected native int cancelOrder(int ctpID, int requestID, String exchangeID, String orderSysID, String orderRef);

	protected native int create();

	protected native int generateReqID(int ctpID);

	protected native String getAccountData(int ctpID);

	protected native String getBrokerID(int ctpID);

	protected native String getCommissionRate(int ctpID, String code);

	protected native String getDepthMarketData(int ctpID);

	protected native String getInstrumentsData(int ctpID);

	protected native String getInvestorID(int ctpID);

	protected native String getMarginRate(int ctpID, String code);

	protected native String getOrderInfo(int ctpID);

	protected native String getOrderInfos(int ctpID);

	protected native String getPassword(int ctpID);

	protected native String getPositionData(int ctpID);

	protected native String getPositionDetailData(int ctpID);

	protected native int getSessionID(int ctpID);

	protected native String getTradeRecord(int ctpID);

	protected native String getTradeRecords(int ctpID);

	protected native String getTradingDate(int ctpID);

	protected native String getTradingTime(int ctpID);

	protected native int isClearanced(int ctpID);

	protected native int isClearanceTime(int ctpID);
        
        protected native int isDataOk(int ctpID);

	protected native int isMdLogined(int ctpID);

	protected native int isTdLogined(int ctpID);

	protected native int isTradingTime(int ctpID);

	protected native int isTradingTimeExact(int ctpID, String code);

	protected native int reqCommissionRate(int ctpID, String code, int requestID);

	protected native int reqMarginRate(int ctpID, String code, int requestID);

	protected native int reqQrySettlementInfoConfirm(int ctpID, int requestID);
        
        protected native int reqQrySettlementInfo(int ctpID, int requestID, String tradingDate);

	protected native int start(int ctpID, int requestID, String mdServer, String tdServer, String brokerID,
			String investorID, String password);

	protected native int subMarketDatas(int ctpID, int requestID, String codes);

	protected native int unSubMarketDatas(int ctpID, int requestID, String codes);
}
