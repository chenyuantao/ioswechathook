//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSString, PopItem;

@interface OpenECardAuthRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) PopItem *guideInfo; // @dynamic guideInfo;
@property(nonatomic) _Bool isReuseExistingEcard; // @dynamic isReuseExistingEcard;
@property(nonatomic) _Bool isTokenInvalid; // @dynamic isTokenInvalid;
@property(retain, nonatomic) NSString *reqSerial; // @dynamic reqSerial;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *rettext; // @dynamic rettext;

@end

