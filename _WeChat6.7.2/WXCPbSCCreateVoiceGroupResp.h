//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSData, NSMutableArray, NSString, WXCPbVoiceConf, WXCPbVoiceGroupInfo;

@interface WXCPbSCCreateVoiceGroupResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addrlist; // @dynamic addrlist;
@property(nonatomic) int audioencodetype; // @dynamic audioencodetype;
@property(nonatomic) unsigned int businessid; // @dynamic businessid;
@property(retain, nonatomic) NSString *clientGroupId; // @dynamic clientGroupId;
@property(retain, nonatomic) WXCPbVoiceConf *conf; // @dynamic conf;
@property(nonatomic) int encryptSwitch; // @dynamic encryptSwitch;
@property(retain, nonatomic) NSData *encryptkeybuf; // @dynamic encryptkeybuf;
@property(nonatomic) int encrypttype; // @dynamic encrypttype;
@property(retain, nonatomic) NSMutableArray *exitMembers; // @dynamic exitMembers;
@property(retain, nonatomic) NSMutableArray *generalpolicys; // @dynamic generalpolicys;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) WXCPbVoiceGroupInfo *groupInfo; // @dynamic groupInfo;
@property(retain, nonatomic) NSMutableArray *grpMemList; // @dynamic grpMemList;
@property(retain, nonatomic) NSMutableArray *grpUsrProfileList; // @dynamic grpUsrProfileList;
@property(retain, nonatomic) NSMutableArray *headSigns; // @dynamic headSigns;
@property(nonatomic) unsigned int helloFreqSeconds; // @dynamic helloFreqSeconds;
@property(retain, nonatomic) NSMutableArray *liveaddrlist; // @dynamic liveaddrlist;
@property(nonatomic) int memberid; // @dynamic memberid;
@property(nonatomic) unsigned int retrySeconds; // @dynamic retrySeconds;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int routeId; // @dynamic routeId;
@property(retain, nonatomic) NSMutableArray *tcpaddrlist; // @dynamic tcpaddrlist;
@property(nonatomic) int tcpstarttime; // @dynamic tcpstarttime;
@property(nonatomic) unsigned int videoencrypttype; // @dynamic videoencrypttype;

@end

