//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetSuggestAliasResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) int userNameRet; // @dynamic userNameRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *verifyBuff; // @dynamic verifyBuff;
@property(retain, nonatomic) NSString *verifySignature; // @dynamic verifySignature;

@end
