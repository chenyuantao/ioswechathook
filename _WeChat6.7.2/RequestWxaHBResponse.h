//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSString;

@interface RequestWxaHBResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errorwording; // @dynamic errorwording;
@property(nonatomic) unsigned int pollingTimesPerSecond; // @dynamic pollingTimesPerSecond;
@property(nonatomic) unsigned int pollingTotalSeconds; // @dynamic pollingTotalSeconds;
@property(retain, nonatomic) NSString *reqkey; // @dynamic reqkey;
@property(retain, nonatomic) NSString *sendid; // @dynamic sendid;
@property(nonatomic) unsigned int wxahbStatus; // @dynamic wxahbStatus;

@end

