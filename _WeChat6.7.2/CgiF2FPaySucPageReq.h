//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString;

@interface CgiF2FPaySucPageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *f2FId; // @dynamic f2FId;
@property(retain, nonatomic) NSString *paySucExtend; // @dynamic paySucExtend;
@property(retain, nonatomic) NSString *payerDesc; // @dynamic payerDesc;
@property(retain, nonatomic) NSString *placeorderSucSign; // @dynamic placeorderSucSign;
@property(retain, nonatomic) NSString *rcvrDesc; // @dynamic rcvrDesc;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

