//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString;

@interface AAPaySuccReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(nonatomic) unsigned long long payAmount; // @dynamic payAmount;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end

