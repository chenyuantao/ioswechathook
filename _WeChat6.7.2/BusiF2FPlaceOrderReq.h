//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, FavorComposeInfo, NSData, NSString;

@interface BusiF2FPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSData *cpuId; // @dynamic cpuId;
@property(nonatomic) unsigned int dynamicCodeSource; // @dynamic dynamicCodeSource;
@property(retain, nonatomic) NSString *dynamicCodeUrl; // @dynamic dynamicCodeUrl;
@property(retain, nonatomic) FavorComposeInfo *favorComposeInfo; // @dynamic favorComposeInfo;
@property(retain, nonatomic) NSString *favorRespSign; // @dynamic favorRespSign;
@property(nonatomic) _Bool isOpenTouch; // @dynamic isOpenTouch;
@property(nonatomic) _Bool isRoot; // @dynamic isRoot;
@property(retain, nonatomic) NSString *mchName; // @dynamic mchName;
@property(nonatomic) unsigned int mchTime; // @dynamic mchTime;
@property(retain, nonatomic) NSString *mchType; // @dynamic mchType;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *payerDesc; // @dynamic payerDesc;
@property(retain, nonatomic) NSString *qrcodeId; // @dynamic qrcodeId;
@property(retain, nonatomic) NSString *rcverDesc; // @dynamic rcverDesc;
@property(retain, nonatomic) NSString *rcvrTicket; // @dynamic rcvrTicket;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSData *uid; // @dynamic uid;
@property(retain, nonatomic) NSString *wifiBssid; // @dynamic wifiBssid;
@property(nonatomic) unsigned int wifiUpdatatime; // @dynamic wifiUpdatatime;

@end

