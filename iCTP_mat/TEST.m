ctp = CTPMTM();%创建iCTP MATLAB对象
ctpID = ctp.create();%创建CTP实例
if ctpID > 0
    reqID = ctp.generateReqID(ctpID); %产生请求id
    if reqID >= 0
        ctp.start(ctpID, reqID, '218.202.237.33:10012', '218.202.237.33:10002', '9999', '021739', '123456');%登录行情,交易服务器
        while (1 == 1)
            if ctp.isMdLogined(ctpID) >= 0
                if ctp.isTdLogined(ctpID) >= 0
                    fprintf('登录成功!!!!!!!!!!\n');
                    break;
                end
            end
            fprintf('登录不成功, 5S后继续尝试\n');
            pause(5);
        end
        subStatus = ctp.subMarketDatas(ctpID, reqID, 'cu1712');%订阅股票信息
        if subStatus > 0
            while (1 == 1) %循环拉取股票信息
                mp = ctp.getDepthMarketData(ctpID);
                %keys(mp);
                %values(mp);
                keys = mp.keys;
                len = length(keys) -1;
                if len > 0 %如果有股票信息就输出股票信息
                    for w = 1: len
                        fprintf('%s : %s \n', char(keys(w)), char(mp(char(keys(w)))));
                    end
                else
                     fprintf('没有行情\n');
                end
                pause(5);
            end
        end
        fprintf('订阅失败!!\n');
    end
end
 fprintf('登录失败!!\n');