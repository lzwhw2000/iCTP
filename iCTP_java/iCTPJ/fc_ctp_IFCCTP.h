#include "jni.h"
#include "jni_md.h"

#ifndef _Included_lord_ctp_ILordCTP
#define _Included_lord_ctp_ILordCTP
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_AskClose
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);


JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_AskCloseToday
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);


JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_AskOpen
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);


JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_BidClose
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);


JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_BidCloseToday
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_BidOpen
  (JNIEnv *, jobject, jint, jint, jstring, jdouble, jchar, jchar, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_CancelOrder
  (JNIEnv *, jobject, jint, jint, jstring, jstring, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_Create
  (JNIEnv *, jobject);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_GenerateReqID
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetAccountData
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetBrokerID
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetCommissionRate
  (JNIEnv *, jobject, jint, jstring);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetDepthMarketData
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetInstrumentsData
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetInvestorID
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetMarginRate
  (JNIEnv *, jobject, jint, jstring);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetOrderInfo
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetOrderInfos
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetPassword
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetPositionData
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetPositionDetailData
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_GetSessionID
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetTradeRecord
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetTradeRecords
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetTradingDate
  (JNIEnv *, jobject, jint);

JNIEXPORT jstring JNICALL Java_lord_ctp_ILordCTP_GetTradingTime
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsClearanced
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsClearanceTime
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsMdLogined
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsTdLogined
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsTradingTime
  (JNIEnv *, jobject, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_IsTradingTimeExact
  (JNIEnv *, jobject, jint, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_LoginGaia
  (JNIEnv *, jobject, jstring, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqCommissionRate
  (JNIEnv *, jobject, jint, jstring, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqInstrumentInfo
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqMarginRate
  (JNIEnv *, jobject, jint, jstring, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQryInvestorPosition
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQryInvestorPositionDetail
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQryOrderInfo
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQrySettlementInfoConfirm
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQryTradeInfo
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_ReqQryTradingAccount
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_Start
  (JNIEnv *, jobject, jint, jint, jstring, jstring, jstring, jstring, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_SubMarketDatas
  (JNIEnv *, jobject, jint, jint, jstring);

JNIEXPORT jint JNICALL Java_lord_ctp_ILordCTP_UnSubMarketDatas
  (JNIEnv *, jobject, jint, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
