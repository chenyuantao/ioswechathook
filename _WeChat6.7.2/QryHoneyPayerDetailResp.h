//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, C2CMsgNode, HoneyPayerDetail, MoreTransRecord, NSMutableArray, NSString, RightCorner, TokeMess;

@interface QryHoneyPayerDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) C2CMsgNode *c2Cmsg; // @dynamic c2Cmsg;
@property(retain, nonatomic) HoneyPayerDetail *detail; // @dynamic detail;
@property(nonatomic) unsigned long long maxCreditLine; // @dynamic maxCreditLine;
@property(nonatomic) unsigned long long minCreditLine; // @dynamic minCreditLine;
@property(retain, nonatomic) MoreTransRecord *moreRecords; // @dynamic moreRecords;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) RightCorner *rightCorner; // @dynamic rightCorner;
@property(retain, nonatomic) TokeMess *tokeMess; // @dynamic tokeMess;

@end

