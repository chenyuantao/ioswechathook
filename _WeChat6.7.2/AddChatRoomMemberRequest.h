//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray, NSString, SKBuiltinString_t;

@interface AddChatRoomMemberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *accessApplicationDesp; // @dynamic accessApplicationDesp;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomName; // @dynamic chatRoomName;
@property(nonatomic) unsigned int lastRoomMsgTimeStamp; // @dynamic lastRoomMsgTimeStamp;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;

@end

