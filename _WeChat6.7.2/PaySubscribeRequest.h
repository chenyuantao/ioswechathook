//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class ActionLocation, BaseRequest, NSData, NSString;

@interface PaySubscribeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionLocation *actionLocation; // @dynamic actionLocation;
@property(retain, nonatomic) NSString *appServiceUserName; // @dynamic appServiceUserName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int channel; // @dynamic channel;
@property(nonatomic) int payScene; // @dynamic payScene;
@property(retain, nonatomic) NSData *reqKey; // @dynamic reqKey;
@property(nonatomic) int subscribeLevel; // @dynamic subscribeLevel;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end
