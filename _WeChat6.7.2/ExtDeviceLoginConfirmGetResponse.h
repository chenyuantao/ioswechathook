//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, ExtDeviceLoginConfirmErrorRet, ExtDeviceLoginConfirmExpiredRet, ExtDeviceLoginConfirmOKRet, NSString;

@interface ExtDeviceLoginConfirmGetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *deviceNameStr; // @dynamic deviceNameStr;
@property(retain, nonatomic) ExtDeviceLoginConfirmErrorRet *errorRet; // @dynamic errorRet;
@property(retain, nonatomic) ExtDeviceLoginConfirmExpiredRet *expiredRet; // @dynamic expiredRet;
@property(nonatomic) unsigned int funcCtrl; // @dynamic funcCtrl;
@property(nonatomic) unsigned int loginClientVersion; // @dynamic loginClientVersion;
@property(retain, nonatomic) ExtDeviceLoginConfirmOKRet *okret; // @dynamic okret;

@end

