//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray;

@interface InitContactResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contactUsernameList; // @dynamic contactUsernameList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int currentChatRoomContactSeq; // @dynamic currentChatRoomContactSeq;
@property(nonatomic) unsigned int currentWxcontactSeq; // @dynamic currentWxcontactSeq;

@end

