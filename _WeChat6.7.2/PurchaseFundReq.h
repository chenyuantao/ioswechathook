//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString;

@interface PurchaseFundReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fundCode; // @dynamic fundCode;
@property(nonatomic) unsigned int purchaseFee; // @dynamic purchaseFee;
@property(retain, nonatomic) NSString *spid; // @dynamic spid;

@end
