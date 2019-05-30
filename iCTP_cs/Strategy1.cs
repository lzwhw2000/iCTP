/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

using System;
using System.Collections.Generic;
using System.Text;
using FaceCat;
using System.Threading;

namespace FaceCat {
    /// <summary>
    /// 策略1
    /// </summary>
    public class Strategy1 {
        /// <summary>
        /// 冷却时间1
        /// </summary>
        public static Dictionary<String, int> m_cd1 = new Dictionary<String, int>();

        /// <summary>
        /// 冷却时间2
        /// </summary>
        public static Dictionary<String, int> m_cd2 = new Dictionary<String, int>();

        /// <summary>
        /// CTP的ID
        /// </summary>
        public static int m_ctpID;

        /// <summary>
        /// 历史数据的集合
        /// </summary>
        public static Dictionary<String, List<SecurityData>> m_historyDatas = new Dictionary<String, List<SecurityData>>();

        /// <summary>
        /// 持仓数据
        /// </summary>
        public static Dictionary<String, InvestorPosition> m_investorPositions = new Dictionary<string, InvestorPosition>();

        /// <summary>
        /// 最新数据的集合
        /// </summary>
        public static Dictionary<String, SecurityLatestData> m_latestDatas = new Dictionary<String, SecurityLatestData>();

        /// <summary>
        /// 证券表
        /// </summary>
        public static Dictionary<String, Security> m_securities = new Dictionary<string, Security>();

        /// <summary>
        /// 成交手数
        /// </summary>
        public static Dictionary<String, int> m_tradeVolumes = new Dictionary<string, int>();

        /// <summary>
        /// 平仓
        /// </summary>
        /// <param name="investorPosition">持仓</param>
        /// <param name="code">代码</param>
        /// <param name="direction">方向</param>
        /// <param name="close">最新价</param>
        /// <param name="openPrice">开仓价</param>
        /// <param name="state">state=0为手动平仓，其余为自动</param>
        public static void askOrBidClose(InvestorPosition investorPosition, String code, String direction, double close, double openPrice, int state) {
            //如果持仓为0，则不检查
            if (investorPosition.m_position == 0) {
                return;
            }
            //获取对应的行情数据
            SecurityLatestData latestData = null;
            lock (m_latestDatas) {
                if (m_latestDatas.ContainsKey(code)) {
                    latestData = m_latestDatas[code];
                }
            }
            if (latestData != null) {
                //获取的码表
                Security security = null;
                lock (m_securities) {
                    if (m_securities.ContainsKey(investorPosition.m_code)) {
                        security = m_securities[investorPosition.m_code];
                    }
                }
                if (security != null) {
                    bool canTrade = true;
                    //检查冷却时间，一次平仓10秒后才能再次平仓
                    if (state != 0) {
                        lock (m_cd2) {
                            if (m_cd2.ContainsKey(investorPosition.m_code)) {
                                if (m_cd2[investorPosition.m_code] > 0) {
                                    canTrade = false;
                                }
                            }
                        }
                    }
                    //获取昨仓
                    int ydPosition = investorPosition.m_ydPosition;
                    //获取今仓
                    int todayPosition = investorPosition.m_position - ydPosition;
                    if (canTrade) {
                        bool isSh = security.m_exchangeID == "SHFE";
                        //买开仓情况下
                        if (direction == "买") {
                            //上期所处理方法
                            if (isSh) {
                                //平昨
                                if (ydPosition > 0) {
                                    CTPDLL.askClose(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, ydPosition, '3', "");
                                }
                                //平今
                                if (todayPosition > 0) {
                                    CTPDLL.askCloseToday(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, todayPosition, '3', "");
                                }
                            }
                            //其他交易所处理方法
                            else {
                                CTPDLL.askClose(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, investorPosition.m_position, '3', "");
                            }
                            //打印日志
                            if (state == 1) {
                                FCStrEx.writeLog(String.Format("自动止盈,开仓价{0},当前价{1},买平仓,代码{2},价格{3},数量{4}\r\n",
                               openPrice, close, investorPosition.m_code, latestData.m_bidPrice1, investorPosition.m_position));
                            }
                            else if (state == 2) {
                                FCStrEx.writeLog(String.Format("自动止损,开仓价{0},当前价{1},买平仓,代码{2},价格{3},数量{4}\r\n",
                                           openPrice, close, investorPosition.m_code, latestData.m_bidPrice1, investorPosition.m_position));
                            }
                            //开仓冷却时间+10
                            lock (m_cd1) {
                                if (m_cd1.ContainsKey(investorPosition.m_code)) {
                                    m_cd1[investorPosition.m_code] += 10;
                                }
                                else {
                                    m_cd1[investorPosition.m_code] = 10;
                                }
                            }
                            //平仓冷却时间重置
                            lock (m_cd2) {
                                m_cd2[investorPosition.m_code] = 10;
                            }
                        }
                        //卖开仓情况下
                        else if (direction == "卖") {
                            //上期所处理方法
                            if (isSh) {
                                //平昨
                                if (ydPosition > 0) {
                                    CTPDLL.bidClose(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, ydPosition, '3', "");
                                }
                                //平今
                                if (todayPosition > 0) {
                                    CTPDLL.bidCloseToday(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, todayPosition, '3', "");
                                }
                            }
                            //其他交易所处理方法
                            else {
                                CTPDLL.bidClose(m_ctpID, CTPDLL.generateReqID(m_ctpID), investorPosition.m_code, 0, investorPosition.m_position, '3', "");
                            }
                            //打印日志
                            if (state == 1) {
                                FCStrEx.writeLog(String.Format("自动止盈,开仓价{0},当前价{1},卖平仓,代码{2},价格{3},数量{4}\r\n",
                                        openPrice, close, investorPosition.m_code, latestData.m_bidPrice1, investorPosition.m_position));
                            }
                            else if (state == 2) {
                                FCStrEx.writeLog(String.Format("自动止损,开仓价{0},当前价{1},卖平仓,代码{2},价格{3},数量{4}\r\n",
                                         openPrice, close, investorPosition.m_code, latestData.m_bidPrice1, investorPosition.m_position));
                            }
                            //开仓冷却时间+10
                            lock (m_cd1) {
                                if (m_cd1.ContainsKey(investorPosition.m_code)) {
                                    m_cd1[investorPosition.m_code] += 10;
                                }
                                else {
                                    m_cd1[investorPosition.m_code] = 10;
                                }
                            }
                            //平仓冷却时间重置
                            lock (m_cd2) {
                                m_cd2[investorPosition.m_code] = 10;
                            }
                        }
                    }
                }
            }
        }

        /// <summary>
        /// 检查平仓
        /// </summary>
        /// <param name="data">最新持仓数据</param>
        /// <param name="ceil">止盈位</param>
        /// <param name="floor">止损位</param>
        public static void checkClose(List<InvestorPosition> data, double ceil, double floor) {
            //取小数部分，止盈为正，止损位负
            int dataSize = data.Count;
            Dictionary<String, String> codes = new Dictionary<string, string>();
            //循环遍历数据
            for (int i = 0; i < dataSize; i++) {
                InvestorPosition investorPosition = data[i];
                String key = investorPosition.m_code + investorPosition.m_posiDirection;
                //判断该持仓是新增的还是减少的
                lock (m_investorPositions) {
                    if (m_investorPositions.ContainsKey(key)) {
                        if (m_investorPositions[key].m_position != investorPosition.m_position) {
                            codes[investorPosition.m_code] = "";
                        }
                    }
                    else {
                        codes[investorPosition.m_code] = "";
                    }
                    //更新内存
                    m_investorPositions[key] = investorPosition;
                }
                //获取行情数据
                SecurityLatestData latestData = null;
                lock (m_latestDatas) {
                    if (m_latestDatas.ContainsKey(investorPosition.m_code)) {
                        latestData = m_latestDatas[investorPosition.m_code];
                    }
                }
                //openPrice字段是0
                if (latestData != null && investorPosition.m_position > 0) {
                    double openPrice = investorPosition.m_openCost / investorPosition.m_position;
                    //获取当前价格与开仓价的差额
                    if (openPrice != 0) {
                        //获取代码
                        String code = investorPosition.m_code;
                        //获取方向
                        String direction = investorPosition.m_posiDirection;
                        //处理买开仓
                        if (investorPosition.m_posiDirection == "买") {
                            //获取盈亏比例
                            double ratio = latestData.m_close / openPrice;
                            String strClose = String.Format("现价/开仓价:{0},止盈位:{1},止损位:{2}", ratio, ceil, floor);
                            //判断止盈
                            if (ratio >= ceil) //如果是止盈，右边应该1.03
                            {
                                askOrBidClose(investorPosition, code, direction, latestData.m_close, openPrice, 1);
                            }
                            //判断止损
                            else if (ratio <= floor) //如果是止损，右边应该是0.99
                            {
                                askOrBidClose(investorPosition, code, direction, latestData.m_close, openPrice, 2);
                            }
                        }
                        //处理卖开仓
                        else if (investorPosition.m_posiDirection == "卖") {
                            //获取当前价格与开仓价的差额，但是方向相反
                            double ratio = latestData.m_close / openPrice;
                            double subCeil = ceil - 1; //也就是0.03
                            double subFloor = 1 - floor; //也就是0.01
                            String strClose = String.Format("现价/开仓价:{0},止盈位:{1},止损位:{2}", ratio, 1 - subCeil, 1 + subFloor);
                            //判断止盈
                            if (ratio <= 1 - subCeil) //如果止盈是0.03，右边应该是0.97
                            {
                                askOrBidClose(investorPosition, code, direction, latestData.m_close, openPrice, 1);
                            }
                            //判断止损
                            else if (ratio >= 1 + subFloor) //如果止损是0.01，右边应该是1.01
                            {
                                askOrBidClose(investorPosition, code, direction, latestData.m_close, openPrice, 2);
                            }
                        }
                    }
                }
            }
        }

        /// <summary>
        /// 检查是否开仓
        /// </summary>
        /// <param name="latestData">最新数据</param>
        /// <param name="datas">数据</param>
        /// <param name="n">创新高参数</param>
        /// <param name="m">均线参数</param>
        /// <returns>是否开仓 1:买开 2:卖开 0:不开仓</returns>
        public static void checkOpen(SecurityLatestData latestData, List<SecurityData> datas, int n, int m) {
            int datasSize = datas.Count;
            //依次判断买和卖 direction = 0 买 direction = 1卖
            for (int direction = 0; direction <= 1; direction++) {
                //极值
                double extrem = 0;
                //判断是否产生极值
                double lastClose = datas[datasSize - 1].m_close;
                //循环遍历除最新数据外的前n-1条数据
                for (int i = datasSize - n; i < datasSize - 1; i++) {
                    SecurityData data = datas[i];
                    if (direction == 0) {
                        //获取阶段最高价
                        if (extrem == 0 || extrem < data.m_close) {
                            extrem = data.m_close;
                        }
                    }
                    else if (direction == 1) {
                        //获取阶段最低价
                        if (extrem == 0 || extrem > data.m_close) {
                            extrem = data.m_close;
                        }
                    }
                }
                //判断是否创新高
                bool newExtrem = false;
                if (direction == 0) {
                    //当前价高于前n-1的最高价
                    if (lastClose > extrem) {
                        newExtrem = true;
                    }
                }
                else if (direction == 1) {
                    //当前价低于前n-1的最低价
                    if (lastClose < extrem) {
                        newExtrem = true;
                    }
                }
                //循环便利数据，计算60周期均线
                for (int i = 0; i < datasSize; i++) {
                    SecurityData data = datas[i];
                    int startIndex = i - (m - 1);
                    int realM = m;
                    if (startIndex <= 0) {
                        startIndex = 0;
                        realM = i + 1;
                    }
                    double sum = 0;
                    for (int j = startIndex; j <= i; j++) {
                        sum += datas[j].m_close;
                    }
                    data.m_ma = sum / realM;
                }
                //判断60周期均线是否上翘或下翘
                bool newWards = false;
                if (direction == 0) {
                    newWards = datas[datasSize - 1].m_ma > datas[datasSize - 2].m_ma;
                }
                else if (direction == 1) {
                    newWards = datas[datasSize - 1].m_ma < datas[datasSize - 2].m_ma;
                }
                //判断是否买开仓
                if (direction == 0) {
                    if (newExtrem) {
                        latestData.m_state1 = 1; //state1=1 代表是创新高
                    }
                    if (newWards) {
                        latestData.m_state2 = 1; //state2=1 代表是均线上翘
                    }
                }
                //判断是否卖开仓
                else if (direction == 1) {
                    if (newExtrem) {
                        latestData.m_state3 = 1; //state3=1 代表是创新低
                    }
                    if (newWards) {
                        latestData.m_state4 = 1; //state4=1 代表是均线下翘
                    }
                }
            }
        }

        /// <summary>
        /// 触发开仓
        /// </summary>
        /// <param name="data">最新数据</param>
        public static void doOpen(SecurityLatestData data) {
            //执行买开仓
            if (data.m_state1 == 1 && data.m_state2 == 1) {
                //判断是否有持仓
                bool hasTrade = inTrade(data.m_code);
                if (!hasTrade) {
                    String key = data.m_code + "买";
                    //判断冷却时间
                    bool canTrade = true;
                    lock (Strategy1.m_cd1) {
                        if (Strategy1.m_cd1.ContainsKey(data.m_code)) {
                            if (Strategy1.m_cd1[data.m_code] > 0) {
                                canTrade = false;
                            }
                        }
                    }
                    if (canTrade) {
                        //获取默认交易手数
                        int tradeVol = 1;
                        if (m_tradeVolumes.ContainsKey(key)) {
                            tradeVol = m_tradeVolumes[key];
                        }
                        //打印日志
                        FCStrEx.writeLog(String.Format("创近20日新高,均线上翘,买开仓,代码{0},价格{1},数量{2}\r\n",
                            data.m_code, data.m_askPrice1, tradeVol));
                        //买开仓
                        CTPDLL.bidOpen(Strategy1.m_ctpID, CTPDLL.generateReqID(Strategy1.m_ctpID), data.m_code, data.m_askPrice1, tradeVol, '3', "");
                        //刷新开仓冷却时间
                        lock (Strategy1.m_cd1) {
                            Strategy1.m_cd1[data.m_code] = 60;
                        }
                    }
                }
            }
            //执行卖开仓
            if (data.m_state3 == 1 && data.m_state4 == 1) {
                //判断是否有持仓
                bool hasTrade = inTrade(data.m_code);
                if (!hasTrade) {
                    String key = data.m_code + "卖";
                    //判断冷却时间
                    bool canTrade = true;
                    lock (Strategy1.m_cd1) {
                        if (Strategy1.m_cd1.ContainsKey(data.m_code)) {
                            if (Strategy1.m_cd1[data.m_code] > 0) {
                                canTrade = false;
                            }
                        }
                    }
                    if (canTrade) {
                        //获取默认交易手数
                        int tradeVol = 1;
                        if (m_tradeVolumes.ContainsKey(key)) {
                            tradeVol = m_tradeVolumes[key];
                        }
                        //打印日志
                        FCStrEx.writeLog(String.Format("创近20日新低,均线下翘,卖开仓,代码{0},价格{1},数量{2}\r\n",
                            data.m_code, data.m_askPrice1, tradeVol));
                        //卖开仓
                        CTPDLL.askOpen(Strategy1.m_ctpID, CTPDLL.generateReqID(Strategy1.m_ctpID), data.m_code, data.m_bidPrice1, tradeVol, '3', "");
                        //刷新开仓冷却时间
                        lock (Strategy1.m_cd1) {
                            Strategy1.m_cd1[data.m_code] = 60;
                        }
                    }
                }
            }
        }

        /// <summary>
        /// 是否拥有持仓
        /// </summary>
        /// <param name="code">代码</param>
        /// <param name="direction">方向</param>
        /// <returns>是否拥有</returns>
        public static bool hasInvestorPosition(String code, String direction) {
            bool hasPosition = false;
            lock (Strategy1.m_investorPositions) {
                if (Strategy1.m_investorPositions.ContainsKey(code + direction)) {
                    if (Strategy1.m_investorPositions[code + direction].m_position > 0) {
                        hasPosition = true;
                    }
                }
            }
            return hasPosition;
        }

        /// <summary>
        /// 是否正在交易
        /// </summary>
        /// <param name="code">代码</param>
        /// <returns>是否在交易</returns>
        public static bool inTrade(String code) {
            if (hasInvestorPosition(code, "买") || hasInvestorPosition(code, "卖")) {
                return true;
            }
            return false;
        }

        /// <summary>
        /// 更新冷却时间
        /// </summary>
        public static void updateCD() {
            while (true) {
                lock (m_cd1) {
                    List<String> reduceCodes = new List<String>();
                    foreach (String code in m_cd1.Keys) {
                        if (m_cd1[code] > 0) {
                            reduceCodes.Add(code);
                        }
                    }
                    foreach (String code in reduceCodes) {
                        m_cd1[code] = m_cd1[code] - 1;
                    }
                }
                lock (m_cd2) {
                    List<String> reduceCodes = new List<String>();
                    foreach (String code in m_cd2.Keys) {
                        if (m_cd2[code] > 0) {
                            reduceCodes.Add(code);
                        }
                    }
                    foreach (String code in reduceCodes) {
                        m_cd2[code] = m_cd2[code] - 1;
                    }
                }
                Thread.Sleep(1000);
            }
        }
    }
}
