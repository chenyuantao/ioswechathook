//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray, NSString;

@interface AAQueryListRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *h5RecordUrl; // @dynamic h5RecordUrl;
@property(retain, nonatomic) NSString *lastBillId; // @dynamic lastBillId;
@property(nonatomic) int lastBillType; // @dynamic lastBillType;
@property(nonatomic) unsigned int lastCreateTime; // @dynamic lastCreateTime;
@property(retain, nonatomic) NSString *lastTransId; // @dynamic lastTransId;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

