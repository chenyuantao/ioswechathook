//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray, VoipStatReportData;

@interface VoipStatReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoipStatReportData *channelReportData; // @dynamic channelReportData;
@property(retain, nonatomic) VoipStatReportData *dialReportData; // @dynamic dialReportData;
@property(retain, nonatomic) VoipStatReportData *engineExtReportData; // @dynamic engineExtReportData;
@property(retain, nonatomic) VoipStatReportData *engineReportData; // @dynamic engineReportData;
@property(retain, nonatomic) NSMutableArray *natReport; // @dynamic natReport;
@property(nonatomic) unsigned int natReportCnt; // @dynamic natReportCnt;
@property(retain, nonatomic) VoipStatReportData *reportData; // @dynamic reportData;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;

@end
