//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, WARemoteDebug_BaseResp;

@interface WARemoteDebug_WxSyncMessageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseResp *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *debugMessageList; // @dynamic debugMessageList;
@property(nonatomic) unsigned int sendAck; // @dynamic sendAck;

@end

