//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray, NSString;

@interface OauthAuthorizeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isCallServerWhenConfirm; // @dynamic isCallServerWhenConfirm;
@property(nonatomic) _Bool isRecentHasAuth; // @dynamic isRecentHasAuth;
@property(nonatomic) _Bool isSlienctAuth; // @dynamic isSlienctAuth;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;

@end

