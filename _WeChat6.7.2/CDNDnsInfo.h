//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface CDNDnsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *authKey; // @dynamic authKey;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned int fakeUin; // @dynamic fakeUin;
@property(nonatomic) int frontId; // @dynamic frontId;
@property(nonatomic) int frontIpcount; // @dynamic frontIpcount;
@property(retain, nonatomic) NSMutableArray *frontIplist; // @dynamic frontIplist;
@property(nonatomic) int frontIpportCount; // @dynamic frontIpportCount;
@property(retain, nonatomic) NSMutableArray *frontIpportList; // @dynamic frontIpportList;
@property(retain, nonatomic) SKBuiltinBuffer_t *newAuthKey; // @dynamic newAuthKey;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(nonatomic) unsigned int ver; // @dynamic ver;
@property(retain, nonatomic) NSString *zoneDomain; // @dynamic zoneDomain;
@property(nonatomic) int zoneId; // @dynamic zoneId;
@property(nonatomic) int zoneIpcount; // @dynamic zoneIpcount;
@property(retain, nonatomic) NSMutableArray *zoneIplist; // @dynamic zoneIplist;
@property(nonatomic) int zoneIpportCount; // @dynamic zoneIpportCount;
@property(retain, nonatomic) NSMutableArray *zoneIpportList; // @dynamic zoneIpportList;

@end

