//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSString, WxaAppBaseResponse;

@interface CheckDemoInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasNewDemo; // @dynamic hasNewDemo;
@property(nonatomic) _Bool hasNewDemoPage; // @dynamic hasNewDemoPage;
@property(retain, nonatomic) NSString *newDemoCodeExtJsonInfo; // @dynamic newDemoCodeExtJsonInfo;
@property(retain, nonatomic) NSString *newDemoDownloadUrl; // @dynamic newDemoDownloadUrl;
@property(retain, nonatomic) NSString *newDemoMd5; // @dynamic newDemoMd5;
@property(retain, nonatomic) NSString *newDemoPageDownloadUrl; // @dynamic newDemoPageDownloadUrl;
@property(retain, nonatomic) NSString *newDemoPageMd5; // @dynamic newDemoPageMd5;
@property(retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse; // @dynamic wxaappBaseresponse;

@end

