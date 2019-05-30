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
using System.IO;
using System.Threading;
namespace FaceCat {
    /// <summary>
    /// 主窗体
    /// </summary>
    public partial class MainForm : Form {
        /// <summary>
        ///  创建图形控件
        /// </summary>
        public MainForm() {
            InitializeComponent();
            m_xml = new MainFrame();
            m_xml.createNative();
            m_native = m_xml.Native;
            m_native.ResourcePath = Application.StartupPath + "\\image";
            //m_native.Paint = new GdiPlusPaintEx();
            m_host = new WinHost();
            m_host.Native = m_native;
            m_native.Host = m_host;
            m_host = m_native.Host as WinHost;
            m_host.HWnd = Handle;
            m_native.AllowScaleSize = true;
            m_native.DisplaySize = new FCSize(ClientSize.Width, ClientSize.Height);
            m_native.ScaleSize = new FCSize(ClientSize.Width, ClientSize.Height);
            m_xml.loadFile(Application.StartupPath + "\\config\\MainFrame.html", null);
            m_xml.resetScaleSize(m_native.DisplaySize);
            Invalidate();
            //字符串+
            m_native.update();
            m_native.invalidate();
        }

        /// <summary>
        /// 控件管理器
        /// </summary>
        private WinHost m_host;

        /// <summary>
        /// 控件库
        /// </summary>
        private FCNative m_native;

        private MainFrame m_xml;

        /// <summary>
        /// 获取或设置XML主框架
        /// </summary>
        public MainFrame Xml {
            get { return m_xml; }
            set { m_xml = value; }
        }

        /// <summary>
        /// 获取客户端尺寸
        /// </summary>
        /// <returns>客户端尺寸</returns>
        public FCSize getClientSize() {
            return new FCSize(ClientSize.Width, ClientSize.Height);
        }

        /// <summary>
        /// 窗体关闭事件
        /// </summary>
        /// <param name="e">事件参数</param>
        protected override void OnFormClosing(FormClosingEventArgs e) {
            Environment.Exit(0);
        }

        /// <summary>
        /// 窗体加载方法
        /// </summary>
        /// <param name="e"></param>
        protected override void OnLoad(EventArgs e) {
            base.OnLoad(e);
            LoginWindow loginWindow = new LoginWindow();
            loginWindow.MainForm = this;
            loginWindow.ShowDialog();
            if (loginWindow.DialogResult != DialogResult.OK) {
                Environment.Exit(0);
            }
        }

        /// <summary>
        /// 鼠标滚动方法
        /// </summary>
        /// <param name="e">参数</param>
        protected override void OnMouseWheel(MouseEventArgs e) {
            base.OnMouseWheel(e);
            if (m_host.isKeyPress(0x11)) {
                double scaleFactor = m_xml.ScaleFactor;
                if (e.Delta > 0) {
                    if (scaleFactor > 0.2) {
                        scaleFactor -= 0.1;
                    }
                }
                else if (e.Delta < 0) {
                    if (scaleFactor < 10) {
                        scaleFactor += 0.1;
                    }
                }
                m_xml.ScaleFactor = scaleFactor;
                m_xml.resetScaleSize(getClientSize());
                Invalidate();
            }
        }

        /// <summary>
        /// 尺寸改变方法
        /// </summary>
        /// <param name="e">参数</param>
        protected override void OnSizeChanged(EventArgs e) {
            base.OnSizeChanged(e);
            if (m_host != null) {
                if (m_xml != null) {
                    m_xml.resetScaleSize(getClientSize());
                }
                Invalidate();
            }
        }

        /// <summary>
        /// 消息监听
        /// </summary>
        /// <param name="m"></param>
        protected override void WndProc(ref Message m) {
            if (m_host != null) {
                if (m_host.onMessage(ref m) > 0) {
                    return;
                }
            }
            base.WndProc(ref m);
        }
    }
}