//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray;

@interface VoipRedirectResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int punchAddrCount; // @dynamic punchAddrCount;
@property(retain, nonatomic) NSMutableArray *punchAddrList; // @dynamic punchAddrList;
@property(nonatomic) int redirectDecision; // @dynamic redirectDecision;
@property(nonatomic) int redirectThreshold; // @dynamic redirectThreshold;
@property(nonatomic) int relayAddrCount; // @dynamic relayAddrCount;
@property(retain, nonatomic) NSMutableArray *relayAddrList; // @dynamic relayAddrList;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) int tcpAddrCount; // @dynamic tcpAddrCount;
@property(retain, nonatomic) NSMutableArray *tcpAddrList; // @dynamic tcpAddrList;

@end

