/*基于捂脸猫FaceCat框架 v1.0 https://github.com/FaceCat007/facecat.git
 1.创始人-矿洞程序员-上海宁米科技创始人-脉脉KOL-陶德 (微信号:suade1984);
 2.联合创始人-上海宁米科技创始人-袁立涛(微信号:wx627378127);
 3.联合创始人-肖添龙(微信号:xiaotianlong_luu);
 4.联合开发者-陈晓阳(微信号:chenxiaoyangzxy)，助理-朱炜(微信号:cnnic_zhu);
 5.该程序开源协议为BSD，欢迎对我们的创业活动进行各种支持，欢迎更多开发者加入。
 */

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace FaceCat {
    /// <summary>
    /// 登录窗体
    /// </summary>
    public partial class LoginWindow : Form {
        public LoginWindow() {
            InitializeComponent();
        }

        private MainForm m_mainForm;

        /// <summary>
        /// 获取或设置主窗体
        /// </summary>
        public MainForm MainForm {
            get { return m_mainForm; }
            set { m_mainForm = value; }
        }

        /// <summary>
        /// 关闭
        /// </summary>
        /// <param name="sender">调用者</param>
        /// <param name="e">参数</param>
        private void btnCancel_Click(object sender, EventArgs e) {
            this.Close();
        }

        /// <summary>
        /// 登录
        /// </summary>
        /// <param name="sender">调用者</param>
        /// <param name="e">参数</param>
        private void btnLogin_Click(object sender, EventArgs e) {
            //收集信息
            String mdServer = txtMDServer.Text.Trim();
            String tdServer = txtTDServer.Text.Trim();
            String brokerID = txtBrokerID.Text.Trim();
            String investorID = txtInvestorID.Text.Trim();
            String password = txtPassword.Text.Trim();
            if (mdServer.Length == 0) {
                MessageBox.Show("请输入行情服务器的地址!");
                return;
            }
            if (tdServer.Length == 0) {
                MessageBox.Show("请输入交易服务器的地址!");
                return;
            }
            if (brokerID.Length == 0) {
                MessageBox.Show("请输入机构ID!");
                return;
            }
            if (investorID.Length == 0) {
                MessageBox.Show("请输入投资者账号!");
                return;
            }
            if (password.Length == 0) {
                MessageBox.Show("请输入密码!");
                return;
            }
            String content = String.Format("{0}\r\n{1}\r\n{2}\r\n{3}\r\n{4}", mdServer, tdServer, brokerID, investorID, password);
            String filePath = Application.StartupPath + "\\LoginInfo.txt";
            FCFile.write(filePath, content);
            //发起登录
            m_mainForm.Xml.loginCTP(mdServer, tdServer, brokerID, investorID, password);
            this.DialogResult = DialogResult.OK;
            Close();
        }

        /// <summary>
        /// 加载界面方法
        /// </summary>
        protected override void OnLoad(EventArgs e) {
            base.OnLoad(e);
            String filePath = Application.StartupPath + "\\LoginInfo.txt";
            if (FCFile.isFileExist(filePath)) {
                String content = "";
                FCFile.read(filePath, ref content);
                if (content.Length > 0) {
                    String[] strs = content.Split(new String[] { "\r\n" }, StringSplitOptions.RemoveEmptyEntries);
                    txtMDServer.Text = strs[0];
                    txtTDServer.Text = strs[1];
                    txtBrokerID.Text = strs[2];
                    txtInvestorID.Text = strs[3];
                    txtPassword.Text = strs[4];
                }
            }
        }
    }
}
