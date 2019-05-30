/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using FaceCat;

namespace FaceCat {
    /// <summary>
    /// 结算窗体
    /// </summary>
    public partial class SettlementWindow : Form {
        /// <summary>
        /// 创建结算窗体
        /// </summary>
        public SettlementWindow() {
            InitializeComponent();
        }

        /// <summary>
        /// CTP编号
        /// </summary>
        private int m_ctpID;

        /// <summary>
        /// 日期设置改变
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void cbSetDate_CheckedChanged(object sender, EventArgs e) {
            dtpDate.Enabled = cbSetDate.Checked;
        }

        /// <summary>
        /// 查询结算信息
        /// </summary>
        /// <param name="ctpID"></param>
        /// <param name="tradingDay"></param>
        public void QuerySettlementInfo(int ctpID, String tradingDay) {
            CTPDLL.reqQrySettlementInfo(ctpID, CTPDLL.generateReqID(m_ctpID), tradingDay);
            m_ctpID = ctpID;
        }

        /// <summary>
        /// 查询方法
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnQuery_Click(object sender, EventArgs e) {
            if (cbSetDate.Checked) {
                CTPDLL.reqQrySettlementInfo(m_ctpID, CTPDLL.generateReqID(m_ctpID), dtpDate.Value.ToString("yyyyMMdd"));
            }
            else {
                CTPDLL.reqQrySettlementInfo(m_ctpID, CTPDLL.generateReqID(m_ctpID), "");
            }
        }

        /// <summary>
        /// 秒表方法
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void timer_Tick(object sender, EventArgs e) {
            StringBuilder sb = new StringBuilder();
            CTPDLL.getSettlementInfo(m_ctpID, sb);
            if (sb.Length > 0) {
                rtbSettlement.Text = sb.ToString();
            }
        }
    }
}