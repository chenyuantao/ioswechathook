//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSString, WxaSyncBaseCmd;

@interface WxaSyncGetCodeCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(nonatomic) _Bool isEncrypt; // @dynamic isEncrypt;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int netWork; // @dynamic netWork;
@property(nonatomic) unsigned int retryInterval; // @dynamic retryInterval;
@property(nonatomic) unsigned int retryTime; // @dynamic retryTime;

@end
