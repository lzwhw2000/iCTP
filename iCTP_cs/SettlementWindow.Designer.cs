namespace FaceCat {
    partial class SettlementWindow {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent() {
            this.components = new System.ComponentModel.Container();
            this.dtpDate = new System.Windows.Forms.DateTimePicker();
            this.cbSetDate = new System.Windows.Forms.CheckBox();
            this.rtbSettlement = new System.Windows.Forms.RichTextBox();
            this.btnQuery = new System.Windows.Forms.Button();
            this.timer = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // dtpDate
            // 
            this.dtpDate.Enabled = false;
            this.dtpDate.Location = new System.Drawing.Point(90, 10);
            this.dtpDate.Name = "dtpDate";
            this.dtpDate.Size = new System.Drawing.Size(131, 21);
            this.dtpDate.TabIndex = 0;
            // 
            // cbSetDate
            // 
            this.cbSetDate.AutoSize = true;
            this.cbSetDate.Location = new System.Drawing.Point(12, 12);
            this.cbSetDate.Name = "cbSetDate";
            this.cbSetDate.Size = new System.Drawing.Size(72, 16);
            this.cbSetDate.TabIndex = 1;
            this.cbSetDate.Text = "指定日期";
            this.cbSetDate.UseVisualStyleBackColor = true;
            this.cbSetDate.CheckedChanged += new System.EventHandler(this.cbSetDate_CheckedChanged);
            // 
            // rtbSettlement
            // 
            this.rtbSettlement.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.rtbSettlement.Location = new System.Drawing.Point(12, 46);
            this.rtbSettlement.Name = "rtbSettlement";
            this.rtbSettlement.Size = new System.Drawing.Size(699, 499);
            this.rtbSettlement.TabIndex = 2;
            this.rtbSettlement.Text = "";
            // 
            // btnQuery
            // 
            this.btnQuery.Location = new System.Drawing.Point(232, 9);
            this.btnQuery.Name = "btnQuery";
            this.btnQuery.Size = new System.Drawing.Size(75, 23);
            this.btnQuery.TabIndex = 3;
            this.btnQuery.Text = "查询";
            this.btnQuery.UseVisualStyleBackColor = true;
            this.btnQuery.Click += new System.EventHandler(this.btnQuery_Click);
            // 
            // timer
            // 
            this.timer.Enabled = true;
            this.timer.Interval = 1000;
            this.timer.Tick += new System.EventHandler(this.timer_Tick);
            // 
            // SettlementWindow
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(723, 557);
            this.Controls.Add(this.btnQuery);
            this.Controls.Add(this.rtbSettlement);
            this.Controls.Add(this.cbSetDate);
            this.Controls.Add(this.dtpDate);
            this.Name = "SettlementWindow";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "结算单";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DateTimePicker dtpDate;
        private System.Windows.Forms.CheckBox cbSetDate;
        private System.Windows.Forms.RichTextBox rtbSettlement;
        private System.Windows.Forms.Button btnQuery;
        private System.Windows.Forms.Timer timer;
    }
}