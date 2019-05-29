#install.packages("hash")
library("hash")
getwd()
setwd("iCTP_r")
source("iCTP.r")

##创建
ctpID <- lordMT.create()
if(!ctpID < 0)
{
  ##请求
  ctpRequestID <- lordMT.generateReqID(ctpID)
  if(ctpRequestID > 0)
  {
    ##启动
    lordMT.start(ctpID, ctpRequestID, "218.202.237.33:10012", "218.202.237.33:10002", "9999", "021739", "123456")
    ##检测是否登录成功
    while(lordMT.isMdLogined(ctpID) <= 0 || lordMT.isTdLogined(ctpID) <= 0)
    {
      print("尝试重新登录")
      Sys.sleep(10)
    }
    ##订阅股票
    subStatus <- lordMT.subMarketDatas(ctpID, ctpRequestID, "cu1712")
    if(subStatus > 0)
    {
      ##收取股票信息
      while(TRUE)
      {
        print(lordMT.getDepthMarketData(ctpID))
        print("----------------------------------------------------")
        Sys.sleep(10)
      }
    }
  }
}