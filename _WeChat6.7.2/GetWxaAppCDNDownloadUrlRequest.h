//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString, PackagePreprocess;

@interface GetWxaAppCDNDownloadUrlRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool gzCompress; // @dynamic gzCompress;
@property(retain, nonatomic) NSString *moduleName; // @dynamic moduleName;
@property(nonatomic) unsigned int oldAppVersion; // @dynamic oldAppVersion;
@property(retain, nonatomic) PackagePreprocess *packagePreprocess; // @dynamic packagePreprocess;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *versionMd5; // @dynamic versionMd5;

@end

