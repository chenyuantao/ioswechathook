//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray, NSString;

@interface AuthUserAutoFillInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSMutableArray *authInfoList; // @dynamic authInfoList;
@property(nonatomic) unsigned int authStatus; // @dynamic authStatus;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) _Bool userConfirm; // @dynamic userConfirm;

@end

