//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString, VoipStatReportData;

@interface VoipCancelInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(retain, nonatomic) VoipStatReportData *reportData; // @dynamic reportData;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

