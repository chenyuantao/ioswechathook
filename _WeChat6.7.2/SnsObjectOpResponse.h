//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray;

@interface SnsObjectOpResponse : WXPBGeneratedMessage
{
    int opRetListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int opCount; // @dynamic opCount;
@property(retain, nonatomic) NSMutableArray *opRetList; // @dynamic opRetList;

@end

