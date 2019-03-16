// %hook ManualAuthAesReqData
// -(id)serializedData{
//     %log;

//     NSLog(@"baseRequest.clientVersion = %d",self.baseRequest.clientVersion);
//     NSString *deviceId=[[NSString alloc] initWithData:self.baseRequest.deviceId encoding:NSUTF8StringEncoding];
//     NSLog(@"baseRequest.deviceId = %@  %@",deviceId,self.baseRequest.deviceId);
//     NSString *deviceType=[[NSString alloc] initWithData:self.baseRequest.deviceType encoding:NSUTF8StringEncoding];
//     NSLog(@"baseRequest.deviceType = %@",deviceType);
//     NSLog(@"baseRequest.scene = %d",self.baseRequest.scene);
//     NSLog(@"baseRequest.sessionKey = %@",self.baseRequest.sessionKey);
//     NSLog(@"baseRequest.uin = %d",self.baseRequest.uin);

//     NSLog(@"BaseAuthReqInfo.authReqFlag = %d",self.baseReqInfo.authReqFlag);
//     NSLog(@"BaseAuthReqInfo.authTicket = %@",self.baseReqInfo.authTicket);
//     NSLog(@"BaseAuthReqInfo.cliDbencryptInfo = %@",self.baseReqInfo.cliDbencryptInfo.buffer);
//     NSLog(@"BaseAuthReqInfo.cliDbencryptKey = %@",self.baseReqInfo.cliDbencryptKey.buffer);
//     NSLog(@"BaseAuthReqInfo.wtloginReqBuff = %@",self.baseReqInfo.wtloginReqBuff.buffer);

//     NSLog(@"BaseAuthReqInfo.wtloginImgReqInfo.imgCode = %@",self.baseReqInfo.wtloginImgReqInfo.imgCode);
//     NSLog(@"BaseAuthReqInfo.wtloginImgReqInfo.imgEncryptKey = %@",self.baseReqInfo.wtloginImgReqInfo.imgEncryptKey);
//     NSLog(@"BaseAuthReqInfo.wtloginImgReqInfo.imgSid = %@",self.baseReqInfo.wtloginImgReqInfo.imgSid);
//     NSLog(@"BaseAuthReqInfo.wtloginImgReqInfo.ksid = %@",self.baseReqInfo.wtloginImgReqInfo.ksid.buffer);

//     NSLog(@"BaseAuthReqInfo.wxVerifyCodeReqInfo.verifyContent = %@",self.baseReqInfo.wxVerifyCodeReqInfo.verifyContent);
//     NSLog(@"BaseAuthReqInfo.wxVerifyCodeReqInfo.verifySignature = %@",self.baseReqInfo.wxVerifyCodeReqInfo.verifySignature);

//     NSLog(@"builtinIpseq = %d",self.builtinIpseq);
//     NSLog(@"bundleId = %@",self.bundleId);
//     NSLog(@"channel = %d",self.channel);
//     NSLog(@"inputType = %d",self.inputType);
//     NSLog(@"clientCheckData = %@",self.clientCheckData.buffer);
//     NSLog(@"clientSeqId = %@",self.clientSeqId);
//     NSLog(@"deviceBrand = %@",self.deviceBrand);
//     NSLog(@"deviceName = %@",self.deviceName);
//     NSLog(@"deviceModel = %@",self.deviceModel);
//     NSLog(@"deviceType = %@",self.deviceType);
//     NSLog(@"imei = %@",self.imei);
//     NSLog(@"iphoneVer = %@",self.iphoneVer);
//     NSLog(@"language = %@",self.language);
//     NSLog(@"ostype = %@",self.ostype);
//     NSLog(@"realCountry = %@",self.realCountry);
//     NSLog(@"signature = %@",self.signature);
//     NSLog(@"softType = %@",self.softType);
//     NSLog(@"timeStamp = %d",self.timeStamp);
//     NSLog(@"timeZone = %@",self.timeZone);
//     NSLog(@"adSource = %@",self.adSource);
//     id r = %orig;
//     return r; 
// }

// %end



// %hook RsaCertMgr
// - (id)GetRsaCertInfoForCGI:(unsigned int)arg1 { %log; id r = %orig; HBLogDebug(@"%@ = %@",[r class], [r description]); return r; }
// %end


// %hook ManualAuthRsaReqData
// - (void)setValue:(id)arg1 atIndex:(int)arg2{%log; %orig;}
// -(id)serializedData{
//     %log;
//     NSLog(@"cliPubEcdhkey.nid = %d",self.cliPubEcdhkey.nid);
//     NSLog(@"cliPubEcdhkey.key = %@",self.cliPubEcdhkey.key.buffer);
//     NSLog(@"pwd = %@",self.pwd);
//     NSLog(@"pwd2 = %@",self.pwd2);
//     NSLog(@"userName = %@",self.userName);
//     NSLog(@"randomEncryKey = %@",self.randomEncryKey.buffer);
//     id r = %orig;
//     return r; 
// }
// %end





// %hook NewInitRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"baseRequest.clientVersion = %d",self.baseRequest.clientVersion);
//     NSLog(@"baseRequest.deviceId = %@",self.baseRequest.deviceId);
//     NSLog(@"baseRequest.deviceType = %@",self.baseRequest.deviceType);
//     NSLog(@"baseRequest.scene = %d",self.baseRequest.scene);
//     NSLog(@"baseRequest.sessionKey = %@",self.baseRequest.sessionKey);
//     NSLog(@"baseRequest.uin = %u",self.baseRequest.uin);
//     NSLog(@"maxSynckey = %d  %@",self.maxSynckey.iLen, self.maxSynckey.buffer);
//     NSLog(@"maxSynckey_hex = %@",[%c(QBRSA) dataToHexString:self.maxSynckey.buffer]);
//     NSLog(@"currentSynckey = %d %@",self.currentSynckey.iLen, self.currentSynckey.buffer);
//     NSLog(@"currentSynckey_hex = %@",[%c(QBRSA) dataToHexString:self.currentSynckey.buffer]);
//     NSLog(@"language = %@",self.language);
//     NSLog(@"userName = %@",self.userName);
//     id r = %orig;
//     return r; 
// }
// %end

// %hook NewSyncRequest
// - (void)setValue:(id)arg1 atIndex:(int)arg2{%log; %orig;}
// -(id)serializedData{
//     %log;
//     NSLog(@"deviceType = %@",self.deviceType);
//     NSLog(@"keyBuf = %@",self.keyBuf.buffer);
//     NSLog(@"oplog.count = %d",self.oplog.count);
//     NSLog(@"oplog.list = %@",self.oplog.list);

//     NSMutableArray *array =［NSMutableArray alloc] init];
//     for (id obj in self.oplog.list) {
//         NSDictionary *dict = @{
//             @"cmdBuf": [%c(QBRSA) dataToHexString:cmdItem.cmdBuf.buffer],
//             @"cmdId": cmdItem.cmdId,
//         };
//         [array addObject:dict];
//     }
//     NSLog(@"scene = %d",self.scene);
//     NSLog(@"selector = %d",self.selector);
//     NSLog(@"syncMsgDigest = %d",self.syncMsgDigest);
//     id r = %orig;
//     return r; 
// }
// %end
// %hook NewSyncRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"keyBuf = %@",self.keyBuf.buffer);
//     NSLog(@"keyBuf iLen = %d",self.keyBuf.iLen);
//     NSLog(@"keyBuf_hex = %@",[%c(QBRSA) dataToHexString:self.keyBuf.buffer]);
//     id r = %orig;
//     NSData *data = (NSData *)r;
//     NSLog(@"raw = %@",[%c(QBRSA) dataToHexString:data]);
//     return r; 
// }
// %end



// %hook NewSyncRequest
// -(id)serializedData{
//     %log;
//     id r = %orig;
//     NSData *data = (NSData *)r;
//     NSLog(@"raw = %@",[%c(QBRSA) dataToHexString:data]);
//     return r; 
// }
// %end

// %hook HeartBeatRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"baseRequest.clientVersion = %d",self.baseRequest.clientVersion);
//     NSString *deviceId=[[NSString alloc] initWithData:self.baseRequest.deviceId encoding:NSUTF8StringEncoding];
//     NSLog(@"baseRequest.deviceId = %@  %@",deviceId,self.baseRequest.deviceId);
//     NSString *deviceType=[[NSString alloc] initWithData:self.baseRequest.deviceType encoding:NSUTF8StringEncoding];
//     NSLog(@"baseRequest.deviceType = %@",deviceType);
//     NSLog(@"baseRequest.scene = %d",self.baseRequest.scene);
//     NSLog(@"baseRequest.sessionKey = %@",self.baseRequest.sessionKey);
//     NSLog(@"baseRequest.uin = %u",self.baseRequest.uin);
//     NSLog(@"keyBuf = %@",self.keyBuf.buffer);
//     NSLog(@"keyBuf len = %d",self.keyBuf.iLen);
    
//     NSLog(@"scene = %d",self.scene);
//     NSLog(@"timeStamp = %d",self.timeStamp);
//     id r = %orig;
//     return r; 
// }
// %end


// // if ([r isKindOfClass:[objc_getClass("NewSyncResponse") class]]){
//     //     



//     // }
//     // if ([r isKindOfClass:[objc_getClass("UnifyAuthResponse") class]]){
//     //     UnifyAuthResponse* resp = (UnifyAuthResponse *)r;
//     //     NSLog(@"authSectResp.a2Key = %@",resp.authSectResp.a2Key);
//     //     NSLog(@"authSectResp.applyBetaUrl = %@",resp.authSectResp.applyBetaUrl);
//     //     NSLog(@"authSectResp.authKey = %@",resp.authSectResp.authKey);
//     //     NSLog(@"authSectResp.authResultFlag = %d",resp.authSectResp.authResultFlag);
//     //     NSLog(@"authSectResp.authTicket = %@",resp.authSectResp.authTicket);
//     //     NSLog(@"authSectResp.autoAuthKey = %@",resp.authSectResp.autoAuthKey.buffer);
//     //     NSLog(@"authSectResp.cliDbencryptInfo = %@",resp.authSectResp.cliDbencryptInfo.buffer);
//     //     NSLog(@"authSectResp.cliDbencryptKey = %@",resp.authSectResp.cliDbencryptKey.buffer);
//     //     NSLog(@"authSectResp.fsurl = %@",resp.authSectResp.fsurl);
//     //     NSLog(@"authSectResp.mmtlsControlBitFlag = %d",resp.authSectResp.mmtlsControlBitFlag);
//     //     NSLog(@"authSectResp.newVersion = %d",resp.authSectResp.newVersion);
//     //     NSLog(@"authSectResp.sessionKey = %@",resp.authSectResp.sessionKey.buffer);
//     //     NSLog(@"authSectResp.svrPubEcdhkey = %@",resp.authSectResp.svrPubEcdhkey.key.buffer);
//     //     NSLog(@"authSectResp.wtloginRspBuff = %@",resp.authSectResp.wtloginRspBuff.buffer);
//     //     NSLog(@"authSectResp.wxVerifyCodeRespInfo.verifyBuff = %@",resp.authSectResp.wxVerifyCodeRespInfo.verifyBuff.buffer);
//     //     NSLog(@"authSectResp.wxVerifyCodeRespInfo.verifySignature = %@",resp.authSectResp.wxVerifyCodeRespInfo.verifySignature);




//     //     NSLog(@"NetworkSectResp.BuiltinIPList.longConnectIpcount = %d",resp.networkSectResp.builtinIplist.longConnectIpcount);
//     //     for (id obj in resp.networkSectResp.builtinIplist.longConnectIplist) {
//     //         BuiltinIP *builtinIP = (BuiltinIP *)obj;
//     //         NSLog(@"longConnectIplist.builtinIP.domain=%@", builtinIP.domain);
//     //         NSLog(@"longConnectIplist.builtinIP.ip=%@", builtinIP.ip);
//     //         NSLog(@"longConnectIplist.builtinIP.port=%d", builtinIP.port);
//     //         NSLog(@"longConnectIplist.builtinIP.type=%d", builtinIP.type);
//     //     }
//     //     NSLog(@"NetworkSectResp.BuiltinIPList.shortConnectIpcount = %d",resp.networkSectResp.builtinIplist.shortConnectIpcount);
//     //     for (id obj in resp.networkSectResp.builtinIplist.shortConnectIplist) {
//     //         BuiltinIP *builtinIP = (BuiltinIP *)obj;
//     //         NSLog(@"shortConnectIplist.builtinIP.domain=%@", builtinIP.domain);
//     //         NSLog(@"shortConnectIplist.builtinIP.ip=%@", builtinIP.ip);
//     //         NSLog(@"shortConnectIplist.builtinIP.port=%d", builtinIP.port);
//     //         NSLog(@"shortConnectIplist.builtinIP.type=%d", builtinIP.type);
//     //     }
//     //     NSLog(@"NetworkSectResp.BuiltinIPList.seq = %d",resp.networkSectResp.builtinIplist.seq);

//     //     NSLog(@"NetworkSectResp.HostList.count = %d",resp.networkSectResp.newHostList.count);
//     //     for (id obj in resp.networkSectResp.newHostList.list) {
//     //         Host *host = (Host *)obj;
//     //         NSLog(@"newHostList.origin=%@", host.origin);
//     //         NSLog(@"newHostList.priority=%d", host.priority);
//     //         NSLog(@"newHostList.substitute=%@", host.substitute);
//     //     }
//     // }

//     // if ([r isKindOfClass:[objc_getClass("NewInitResponse") class]]){
//     //     NewInitResponse* resp = (NewInitResponse *)r;
//     //     NSLog(@"maxSynckeyLen = %d",resp.maxSynckey.iLen);
//     //     NSLog(@"maxSynckey_hex = %@",[%c(QBRSA) dataToHexString:resp.maxSynckey.buffer]);
//     //     NSLog(@"currentSynckeyLen = %d",resp.currentSynckey.iLen);
//     //     NSLog(@"currentSynckey_hex = %@",[%c(QBRSA) dataToHexString:resp.currentSynckey.buffer]);
//     // }


// %hook ProtobufEvent
// - (_Bool)Pack:(struct AutoBuffer *)arg1 { 
//     _Bool r = %orig; 
//     if (self.m_pbCGIWrap.m_uiCgi == 701
//         ||self.m_pbCGIWrap.m_uiCgi == 138
//         ||self.m_pbCGIWrap.m_uiCgi == 139
//         ||self.m_pbCGIWrap.m_uiCgi == 385
//         ||self.m_pbCGIWrap.m_uiCgi == 233
//     ){
//          NSData *data = [NSData dataWithBytes:arg1->_field1   length:arg1->_field3];
//          HBLogDebug(@"CGI=%d Pack = %@",self.m_pbCGIWrap.m_uiCgi, [%c(QBRSA) dataToHexString:data]); 
//     }
//     return r; 
// }
// %end



// %hook TenPayRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"baseRequest.clientVersion = %d",self.baseRequest.clientVersion);
//     NSLog(@"baseRequest.deviceId = %@",self.baseRequest.deviceId);
//     NSLog(@"baseRequest.deviceType = %@",self.baseRequest.deviceType);
//     NSLog(@"baseRequest.scene = %d",self.baseRequest.scene);
//     NSLog(@"baseRequest.sessionKey = %@",self.baseRequest.sessionKey);
//     NSLog(@"baseRequest.uin = %u",self.baseRequest.uin);
//     NSLog(@"cgiCmd = %d",self.cgiCmd);
//     NSLog(@"outPutType = %d",self.outPutType);
//     NSLog(@"sign = %@",self.sign);
//     NSLog(@"crtNo = %@",self.crtNo);
//     NSLog(@"reqText = %@",self.reqText.buffer);
//     NSLog(@"reqText_hex = %@",[%c(QBRSA) dataToHexString:self.reqText.buffer]);
//     NSLog(@"reqTextWx = %@",self.reqTextWx.buffer);
//     NSLog(@"reqTextWx_hex = %@",[%c(QBRSA) dataToHexString:self.reqTextWx.buffer]);
//     id r = %orig;
//     NSData *data = (NSData *)r;
//     NSLog(@"raw = %@",[%c(QBRSA) dataToHexString:data]);
//     return r; 
// }
// %end

// if ([r isKindOfClass:[objc_getClass("TenPayResponse") class]]){
//         TenPayResponse* resp = (TenPayResponse *)r;
//         NSLog(@"retText = %d",resp.retText.iLen);
//         NSLog(@"retText_hex = %@",[%c(QBRSA) dataToHexString:resp.retText.buffer]);
//         NSLog(@"platRet = %d",resp.platRet);
//         NSLog(@"platMsg = %@",resp.platMsg);
//         NSLog(@"cgiCmdid = %d",resp.cgiCmdid);
//         NSLog(@"tenpayErrType = %d",resp.tenpayErrType);
//         NSLog(@"tenpayErrMsg = %@",resp.tenpayErrMsg);
//     }





// // %hook TenpaySecureObject
// // + (id)getSHA256Hex:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)DecryptWithSM4CBC:(id)arg1 key:(id)arg2 iv:(id)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)EncryptWithSM4CBC:(id)arg1 key:(id)arg2 iv:(id)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)EncryptWith3Des:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)SignWith3Des:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook TenpayDelegate
// // - (void)setBFormatBankCard:(_Bool )bFormatBankCard { %log; %orig; }
// // - (_Bool )bFormatBankCard { %log; _Bool  r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (void)setDefaultValue:(id)arg1 { %log; %orig; }
// // - (id)GetUnEncryptCode { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)GetEncryptCode { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)GetAsteriskString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (_Bool)isAreaIDCardNum:(long long)arg1 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (_Bool)isUserIDNum { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (_Bool)isBankCardNum { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (_Bool)isPhoneNum { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (id)Get3DesEncryptData { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)Get2048EncryptDataWithHash:(_Bool)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)GetEncryptDataWithHash:(_Bool)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (void)ClearInput { %log; %orig; }
// // - (void)SelectRsaKey:(int)arg1 { %log; %orig; }
// // - (void)SetSalt:(id)arg1 { %log; %orig; }
// // - (long long)GetInputInfo { %log; long long r = %orig; HBLogDebug(@" = %lld", r); return r; }
// // - (id)GetVersion { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (_Bool)textFieldShouldReturn:(id)arg1 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (_Bool)textFieldShouldClear:(id)arg1 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3 { %log; _Bool r = %orig; HBLogDebug(@" = %d", r); return r; }
// // - (void)textFieldDidChanged:(id)arg1 { %log; %orig; }
// // - (void)ResetInputText:(id)arg1 { %log; %orig; }
// // - (id)EncodeCard:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)DecodeCardWithAppend:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)DecodeCard:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (void)AppendString:(id)arg1 { %log; %orig; }
// // - (void)SetMaxInputLen:(int)arg1 { %log; %orig; }
// // - (void)SetChange:(id)arg1 callback:(SEL)arg2 { %log; %orig; }
// // - (void)SetReturn:(id)arg1 callback:(SEL)arg2 { %log; %orig; }
// // %end
// // %hook AESEncryptObject
// // - (void)setM_rsaEncryptedKey:(NSString *)m_rsaEncryptedKey { %log; %orig; }
// // - (NSString *)m_rsaEncryptedKey { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (void)setM_aesKey:(NSString *)m_aesKey { %log; %orig; }
// // - (NSString *)m_aesKey { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)decryptWithSourceString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)encryptWithSourceString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)rsaEncryptedKey { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)initWithAesKey:(id)arg1 withRSAEncryptedKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook AESKeyGenerator
// // + (id)AESKeyWith128Bit { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook AesUtil
// // + (id)decryptString:(id)arg1 withRawKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)encryptString:(id)arg1 withRawKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook APEncryptorAES
// // + (id)dataForHexString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)hexStringForData:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook CAESCrypt
// // + (id)AESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(_Bool)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AESDecryptWithKey:(id)arg1 Data:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AESEncryptWithKey:(id)arg1 Data:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook RC4EncryptDecrypt
// // + (id)RC4DecryptWithKey:(id)arg1 andData:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)RC4EncryptWithKey:(id)arg1 andData:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook RSAEncryptObject
// // - (void)setM_publicPemKey:(NSString *)m_publicPemKey { %log; %orig; }
// // - (NSString *)m_publicPemKey { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)encryptWithSourceString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // - (id)initWithRSAPublicPemKey:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook QBUtils
// // + (id)des:(id)arg1 WithKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AES128Decrypt:(id)arg1 WithKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AES128Encrypt:(id)arg1 WithKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // + (id)AES128:(id)arg1 Operation:(unsigned int)arg2 key:(id)arg3 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// // %end
// // %hook ProtobufCGIWrap
// // - (void)setM_nsUri:(NSString *)m_nsUri { %log; %orig; }
// // - (void)setM_nsCgiName:(NSString *)m_nsCgiName { %log; %orig; }
// // - (void)setM_uiScene:(unsigned int )m_uiScene { %log; %orig; }
// // - (void)setM_uiCgi:(unsigned int )m_uiCgi { %log; %orig; }
// // - (void)setM_pbResponse:(WXPBGeneratedMessage *)m_pbResponse { %log; %orig; }
// // - (void)setM_pbRespClass:(Class )m_pbRespClass { %log; %orig; }
// // - (void)setM_pbRequest:(WXPBGeneratedMessage *)m_pbRequest { %log; %orig; }
// // %end



// %hook ManualAuthAesReqData
// -(id)serializedData{
//     %log;
//     NSLog(@"clientCheckData = %@",[%c(QBRSA) dataToHexString:self.clientCheckData.buffer]);
//     id r = %orig;
//     return r; 
// }
// %end

// %hook WXPBGeneratedMessage
// +(id)parseFromData:(id)data { 
//     id r = %orig; 
//     HBLogDebug(@"%@ = %@",[r class], [r description]);
//     if ([r isKindOfClass:[objc_getClass("CheckTinkerUpdateResponse") class]]){
//         CheckTinkerUpdateResponse* resp = (CheckTinkerUpdateResponse *)r;
//         NSLog(@"data = %@",[%c(QBRSA) dataToHexString:resp.patch.info.data]);
//     }
//     return r; 
// }
// %end


// // %hook WXPBGeneratedMessage
// // - (void)setValue:(id)arg1 atIndex:(int)arg2{
// //     %log;
// //     %orig; 
// // }
// // //-(id)serializedData{ HBLogDebug(@"%@ = %@",[self class], [self description]); id r = %orig;  return r; }
// // +(id)parseFromData:(id)data { 
// //     id r = %orig; 
// //     HBLogDebug(@"%@ = %@",[r class], [r description]);
// //     if ([r isKindOfClass:[objc_getClass("GetA8KeyResp") class]]){
// //         GetA8KeyResp* resp = (GetA8KeyResp *)r;
// //         NSLog(@"cookie_hex = %@",[%c(QBRSA) dataToHexString:resp.cookie.buffer]);
// //         NSLog(@"jsapicontrolBytes_hex = %@",[%c(QBRSA) dataToHexString:resp.jsapicontrolBytes.buffer]);
// //         NSLog(@"a8Key = %@",resp.a8Key);
// //         NSLog(@"antispamTicket = %@",resp.antispamTicket);
// //         NSLog(@"content = %@",resp.content);
// //         NSLog(@"fullUrl = %@",resp.fullUrl);
// //         NSLog(@"httpHeaderCount = %u",resp.httpHeaderCount);
// //         NSLog(@"mid = %@",resp.mid);
// //         NSLog(@"scopeCount = %d",resp.scopeCount);
// //         NSLog(@"shareUrl = %@",resp.shareUrl);
// //         NSLog(@"ssid = %@",resp.ssid);
// //         NSLog(@"title = %@",resp.title);
// //         NSLog(@"JSAPIPermissionBitSet.bitValue = %u",resp.jsapipermission.bitValue);
// //         NSLog(@"JSAPIPermissionBitSet.bitValue2 = %u",resp.jsapipermission.bitValue2);
// //         NSLog(@"JSAPIPermissionBitSet.bitValue3 = %u",resp.jsapipermission.bitValue3);
// //         NSLog(@"JSAPIPermissionBitSet.bitValue4 = %u",resp.jsapipermission.bitValue4);
// //         for (id obj in resp.scopeList) {
// //             NSLog(@"scopeList=%@ %@", [obj class],[obj description]);
// //         }
// //     }
// //     return r; 
// // }
// // %end


// %hook ProtobufEvent
// - (_Bool)Pack:(struct AutoBuffer *)arg1 { 
//     _Bool r = %orig; 
//     if (self.m_pbCGIWrap.m_uiCgi == 701
//         ||self.m_pbCGIWrap.m_uiCgi == 502
//         ||self.m_pbCGIWrap.m_uiCgi == 503
//     ){
//          NSData *data = [NSData dataWithBytes:arg1->_field1   length:arg1->_field3];
//          HBLogDebug(@"CGI=%d %lld %llu %llu %llu Pack=%lu %@", self.m_pbCGIWrap.m_uiCgi, arg1->_field2,arg1->_field3,arg1->_field4,arg1->_field5, (unsigned long)data.length ,[%c(QBRSA) dataToHexString:data]); 
//     }
//     return r; 
// }
// %end



// struct AutoBuffer {
//     char *_field1;
//     long long _field2;
//     unsigned long long _field3;
//     unsigned long long _field4;
//     unsigned long long _field5;
// };

// @interface ProtobufEvent : NSObject
// @property(nonatomic) _Bool m_bSpeedy; // @synthesize m_bSpeedy;
// @property(readonly) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
// @end


// %hook ProtobufEvent
// - (int)UnPack:(struct AutoBuffer *)arg1 SvrID:(struct AutoBuffer *)arg2 headExtFlags:(int *)arg3 { 
//     %log; int r = %orig; 
//     HBLogDebug(@" = %d", r); 
//     NSData *data = [NSData dataWithBytes:arg1->_field1   length:arg1->_field3];
//     NSDictionary *dict = @{
//         @"m_uiCgi": self.m_pbCGIWrap.m_uiCgi,
//         @"m_nsUri": self.m_pbCGIWrap.m_nsUri,
//         @"m_pbResponse": [%c(QBRSA) dataToHexString:data],
//     };
//     return r; 
// }
// - (_Bool)Pack:(struct AutoBuffer *)arg1 { 
//     _Bool r = %orig; 
//     NSDictionary *dict = @{
//         @"m_uiCgi": self.m_pbCGIWrap.m_uiCgi,
//         @"m_nsUri": self.m_pbCGIWrap.m_nsUri,
//         @"m_pbRequest": [%c(QBRSA) dataToHexString:[m_pbRequest serializeData]],
//     };
//     return r; 
// }
// %end



// @implementation DoMsg

// + (void) PostUrl:(NSDictionary *)body{
//     NSURL *nsurl = [NSURL URLWithString:@"http://172.16.0.124:6080/api/device"];
//     NSMutableURLRequest *request = [[NSMutableURLRequest alloc]initWithURL:nsurl cachePolicy:NSURLRequestReloadIgnoringLocalCacheData timeoutInterval:10];
//     [request setHTTPMethod:@"POST"];
//     NSData *jsonData = [NSJSONSerialization dataWithJSONObject:body options:NSJSONWritingPrettyPrinted error:nil];
//     [request setHTTPBody:jsonData];
//     [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
//     return;
// }
// + (void) PostNats:(NSDictionary *)body{
//     NSData *jsonData = [NSJSONSerialization dataWithJSONObject:body options:NSJSONWritingPrettyPrinted error:nil];
//     TweakNetworkSendMsg(@"nats://iZtkx9fldntmz1Z@47.75.55.106:4321", @"hellodragon.device.information", [%c(QBRSA) dataToHexString:jsonData]);
//     return;
// }
// @end

// %hook ManualAuthAesReqData
// -(id)serializedData{
//     NSDictionary *dict = @{
//         @"clientVersion": [[NSString alloc] initWithFormat:@"%d", self.baseRequest.clientVersion],
//         @"deviceId": [%c(QBRSA) dataToHexString:self.baseRequest.deviceId],
//         @"deviceType": [[NSString alloc] initWithData:self.baseRequest.deviceType encoding:NSUTF8StringEncoding],
//         @"clientCheckData": [%c(QBRSA) dataToHexString:self.clientCheckData.buffer],
//         @"clientSeqId": self.clientSeqId,
//         @"deviceBrand": self.deviceBrand,
//         @"deviceName": self.deviceName,
//         @"deviceModel": self.deviceModel,
//         @"deviceType2": self.deviceType,
//         @"imei": self.imei,
//         @"iphoneVer": self.iphoneVer,
//         @"softType": self.softType,
//         @"adSource": self.adSource,
//         @"language": self.language,
//         @"realCountry": self.realCountry,
//         @"idfa":[%c(QBBeaconUtil) getIDFA],
//         @"idfv":[%c(QBBeaconUtil) getIDFV],
//     };
//     [DoMsg PostNats:dict];
//     return %orig; 
// }
// %end

// %hook JailBreakHelper
// + (_Bool)JailBroken { %log; return false; }
// - (_Bool)IsJailBreak { %log; return false; }
// %end

// %hook ProtobufEvent
// - (_Bool)Pack:(struct AutoBuffer *)arg1 { %orig; return false; }
// %end




// %hook TenpaySecureObject
// + (id)SignWith3Des:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// %end


// %hook TenPayRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"cgiCmd = %d",self.cgiCmd);
//     NSLog(@"outPutType = %d",self.outPutType);
//     NSLog(@"sign = %@",self.sign);
//     NSLog(@"crtNo = %@",self.crtNo);
//     NSLog(@"reqText = %@",self.reqText.buffer);
//     NSLog(@"reqText_hex = %@",[%c(QBRSA) dataToHexString:self.reqText.buffer]);
//     NSLog(@"reqTextWx = %@",self.reqTextWx.buffer);
//     NSLog(@"reqTextWx_hex = %@",[%c(QBRSA) dataToHexString:self.reqTextWx.buffer]);
//     id r = %orig;
//     return r; 
// }
// %end

// %hook AESEncryptObject
// - (void)setM_rsaEncryptedKey:(NSString *)m_rsaEncryptedKey { %log; %orig; }
// - (NSString *)m_rsaEncryptedKey { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (void)setM_aesKey:(NSString *)m_aesKey { %log; %orig; }
// - (NSString *)m_aesKey { %log; NSString * r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (id)decryptWithSourceString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (id)encryptWithSourceString:(id)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (id)rsaEncryptedKey { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (id)initWithAesKey:(id)arg1 withRSAEncryptedKey:(id)arg2 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// %end



%hook CgiGetRewardQrcodeResp
+(CgiGetRewardQrcodeResp *)parseFromData:(id)data { 
    CgiGetRewardQrcodeResp* resp = %orig; 
    NSLog(@" = %@",resp.amtList);
    NSLog(@" = %@",resp.buttonUrl);
    NSLog(@" = %@",resp.buttonWording);
    NSLog(@" = %@",resp.desc);
    NSLog(@" = %@",@(resp.emptyFlag));
    NSLog(@" = %@",@(resp.iconLength));
    NSLog(@" = %@",@(resp.maxAmt));
    NSLog(@" = %@",resp.photoAeskey);
    NSLog(@" = %@",resp.photoUrl);
    NSLog(@" = %@",@(resp.photoWidth));
    NSLog(@" = %@",@(resp.retcode));
    NSLog(@" = %@",resp.retmsg);
    NSLog(@" = %@",resp.trueName);
    NSLog(@" = %@",resp.word);
    return resp; 
}
%end





// %hook TenPayRequest
// -(id)serializedData{
//     %log;
//     NSLog(@"baseRequest.sessionKey = %@",[%c(QBRSA) dataToHexString:self.baseRequest.sessionKey]);
//     NSLog(@"cgiCmd = %d",self.cgiCmd);
//     NSLog(@"outPutType = %d",self.outPutType);
//     NSLog(@"sign = %@",self.sign);
//     NSLog(@"crtNo = %@",self.crtNo);
//     NSLog(@"reqText = %@",self.reqText.buffer);
//     NSLog(@"reqText str = %@",[[NSString alloc] initWithData:self.reqText.buffer encoding:NSUTF8StringEncoding]);
//     NSLog(@"reqText hex = %@",[%c(QBRSA) dataToHexString:self.reqText.buffer]);
//     NSLog(@"reqTextWx = %@",self.reqTextWx.buffer);
//     NSLog(@"reqTextWx str = %@",[[NSString alloc] initWithData:self.reqTextWx.buffer encoding:NSUTF8StringEncoding]);
//     NSLog(@"reqTextWx hex = %@",[%c(QBRSA) dataToHexString:self.reqTextWx.buffer]);
//     id r = %orig;
//     return r; 
// }
// %end

// %hook ProtobufCGIWrap
// - (void)setM_nsUri:(NSString *)m_nsUri { %log; %orig; }
// - (void)setM_nsCgiName:(NSString *)m_nsCgiName { %log; %orig; }
// - (void)setM_uiScene:(unsigned int )m_uiScene { %log; %orig; }
// - (void)setM_uiCgi:(unsigned int )m_uiCgi { %log; %orig; }
// - (void)setM_pbResponse:(WXPBGeneratedMessage *)m_pbResponse { %log; %orig; }
// - (void)setM_pbRespClass:(Class )m_pbRespClass { %log; %orig; }
// - (void)setM_pbRequest:(WXPBGeneratedMessage *)m_pbRequest { %log; %orig; }
// %end


@interface CgiGetRewardQrcodeResp : WXPBGeneratedMessage
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buttonUrl; // @dynamic buttonUrl;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool emptyFlag; // @dynamic emptyFlag;
@property(nonatomic) unsigned int iconLength; // @dynamic iconLength;
@property(nonatomic) unsigned int maxAmt; // @dynamic maxAmt;
@property(retain, nonatomic) NSString *photoAeskey; // @dynamic photoAeskey;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;
@property(nonatomic) unsigned int photoWidth; // @dynamic photoWidth;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *trueName; // @dynamic trueName;
@property(retain, nonatomic) NSString *word; // @dynamic word;
@end



// @interface CgiGetRewardQrcodeReq : NSObject
// - (id)valueAtIndex:(int)arg1;
// @end


// %hook CgiGetRewardQrcodeReq
// -(id)serializedData{ 
//     NSLog(@"valueAtIndex1 = %@", [self valueAtIndex:0]);
//     NSLog(@"valueAtIndex2 = %@", [self valueAtIndex:1]);
//     NSLog(@"valueAtIndex3 = %@", [self valueAtIndex:2]);
//     id r = %orig;  
//     return r; 
// }
// - (void)setValue:(id)arg1 atIndex:(int)arg2{%log;%orig; }
// - (id)valueAtIndex:(int)arg1 { %log; id r = %orig; HBLogDebug(@" = %@", r); return r; }
// - (void)setHasCache:(_Bool )hasCache { %log; %orig; }
// - (void)setPhotoAeskey:(NSString *)photoAeskey { %log; %orig; }
// - (void)setPhotoUrl:(NSString *)photoUrl { %log; %orig; }
// %end


// %hook CgiGetRewardQrcodeResp
// //- (void)setValue:(id)arg1 atIndex:(int)arg2{%log;%orig; }
// - (void)setAmtList:(NSMutableArray *)amtList { %log; %orig; }
// - (void)setButtonUrl:(NSString *)buttonUrl { %log; %orig; }
// - (void)setButtonWording:(NSString *)buttonWording { %log; %orig; }
// - (void)setDesc:(NSString *)desc { %log; %orig; }
// - (void)setEmptyFlag:(_Bool )emptyFlag { %log; %orig; }
// - (void)setIconLength:(unsigned int )iconLength { %log; %orig; }
// - (void)setMaxAmt:(unsigned int )maxAmt { %log; %orig; }
// - (void)setPhotoAeskey:(NSString *)photoAeskey { %log; %orig; }
// - (void)setPhotoUrl:(NSString *)photoUrl { %log; %orig; }
// - (void)setPhotoWidth:(unsigned int )photoWidth { %log; %orig; }
// - (void)setRetcode:(unsigned int )retcode { %log; %orig; }
// - (void)setRetmsg:(NSString *)retmsg { %log; %orig; }
// - (void)setTrueName:(NSString *)trueName { %log; %orig; }
// - (void)setWord:(NSString *)word { %log; %orig; }
// %end
