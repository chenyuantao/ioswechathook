//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, LocationInfo, NSString, ScanInfo;

@interface BizWifiConnectRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) LocationInfo *locationInfo; // @dynamic locationInfo;
@property(retain, nonatomic) ScanInfo *scanInfo; // @dynamic scanInfo;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;

@end

