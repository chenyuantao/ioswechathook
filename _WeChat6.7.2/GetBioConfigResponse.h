//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, CdnInfo, NSData, NetworkSectResp;

@interface GetBioConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long bioId; // @dynamic bioId;
@property(retain, nonatomic) CdnInfo *cdnInfo; // @dynamic cdnInfo;
@property(retain, nonatomic) NSData *cfgbuffer; // @dynamic cfgbuffer;
@property(retain, nonatomic) NetworkSectResp *netWork; // @dynamic netWork;

@end

