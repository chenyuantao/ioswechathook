//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, CheckJSApiInfoResponse_FromAppIdInfoResp, CheckJSApiInfoResponse_PluginHostInfoResp, JSAPIBaseResponse, NSMutableArray;

@interface CheckJSApiInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appControlInfo; // @dynamic appControlInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckJSApiInfoResponse_FromAppIdInfoResp *fromInfoResp; // @dynamic fromInfoResp;
@property(retain, nonatomic) CheckJSApiInfoResponse_PluginHostInfoResp *hostInfoResp; // @dynamic hostInfoResp;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(retain, nonatomic) NSMutableArray *jumpToInfo; // @dynamic jumpToInfo;
@property(retain, nonatomic) NSMutableArray *pluginInfo; // @dynamic pluginInfo;

@end
