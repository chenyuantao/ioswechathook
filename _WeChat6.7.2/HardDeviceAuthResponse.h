//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, SKBuiltinBuffer_t;

@interface HardDeviceAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int blockTimeout; // @dynamic blockTimeout;
@property(nonatomic) unsigned int cacheTimeout; // @dynamic cacheTimeout;
@property(nonatomic) unsigned int cryptMethod; // @dynamic cryptMethod;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuffer; // @dynamic keyBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) SKBuiltinBuffer_t *sessionKey; // @dynamic sessionKey;

@end

