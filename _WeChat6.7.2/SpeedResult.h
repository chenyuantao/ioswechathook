//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, VoipAddr;

@interface SpeedResult : WXPBGeneratedMessage
{
    int rttMemoizedSerializedSize;
    int downSeqMemoizedSerializedSize;
    int upSeqMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) VoipAddr *addr; // @dynamic addr;
@property(nonatomic) unsigned int avgRtt; // @dynamic avgRtt;
@property(nonatomic) unsigned int clientIp; // @dynamic clientIp;
@property(retain, nonatomic) NSMutableArray *downSeq; // @dynamic downSeq;
@property(nonatomic) unsigned int downSeqCnt; // @dynamic downSeqCnt;
@property(nonatomic) unsigned int maxRtt; // @dynamic maxRtt;
@property(nonatomic) unsigned int minRtt; // @dynamic minRtt;
@property(retain, nonatomic) NSMutableArray *rtt; // @dynamic rtt;
@property(nonatomic) unsigned int rttCnt; // @dynamic rttCnt;
@property(nonatomic) unsigned int testCnt; // @dynamic testCnt;
@property(nonatomic) unsigned int testPktSize; // @dynamic testPktSize;
@property(retain, nonatomic) NSMutableArray *upSeq; // @dynamic upSeq;
@property(nonatomic) unsigned int upSeqCnt; // @dynamic upSeqCnt;

@end

