//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray, NSString;

@interface SnsTagListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *tagListMd5; // @dynamic tagListMd5;

@end

