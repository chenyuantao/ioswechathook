//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface VerifyPswdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *imgCode; // @dynamic imgCode;
@property(retain, nonatomic) SKBuiltinString_t *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) SKBuiltinString_t *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) NSString *pwd1; // @dynamic pwd1;
@property(retain, nonatomic) NSString *pwd2; // @dynamic pwd2;
@property(nonatomic) unsigned int scence; // @dynamic scence;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff; // @dynamic wtloginReqBuff;

@end

