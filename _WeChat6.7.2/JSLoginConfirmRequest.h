//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray, NSString, WxaExternalInfo;

@interface JSLoginConfirmRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int loginType; // @dynamic loginType;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

