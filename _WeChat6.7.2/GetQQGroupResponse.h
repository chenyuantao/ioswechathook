//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, QQFriendList, QQGroupList;

@interface GetQQGroupResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) QQFriendList *qqfriend; // @dynamic qqfriend;
@property(retain, nonatomic) QQGroupList *qqgroup; // @dynamic qqgroup;

@end

