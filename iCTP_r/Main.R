#install.packages("hash")
library("hash")
getwd()
setwd("iCTP_r")
source("iCTP.r")

##����
ctpID <- iCTP.create()
if(!ctpID < 0)
{
  ##����
  ctpRequestID <- iCTP.generateReqID(ctpID)
  if(ctpRequestID > 0)
  {
    ##����
    iCTP.start(ctpID, ctpRequestID, "218.202.237.33:10012", "218.202.237.33:10002", "9999", "021739", "123456")
    ##����Ƿ��¼�ɹ�
    while(iCTP.isMdLogined(ctpID) <= 0 || iCTP.isTdLogined(ctpID) <= 0)
    {
      print("�������µ�¼")
      Sys.sleep(10)
    }
    ##���Ĺ�Ʊ
    subStatus <- iCTP.subMarketDatas(ctpID, ctpRequestID, "cu1712")
    if(subStatus > 0)
    {
      ##��ȡ��Ʊ��Ϣ
      while(TRUE)
      {
        print(iCTP.getDepthMarketData(ctpID))
        print("----------------------------------------------------")
        Sys.sleep(10)
      }
    }
  }
}