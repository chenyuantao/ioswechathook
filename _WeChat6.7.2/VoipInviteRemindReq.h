//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray;

@interface VoipInviteRemindReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(nonatomic) unsigned int listCount; // @dynamic listCount;
@property(retain, nonatomic) NSMutableArray *toUserNameList; // @dynamic toUserNameList;

@end
