//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WebStorageGetResult : NSObject
{
    _Bool _bError;
    NSString *_value;
    NSString *_weightStr;
    long long _expireTime;
}

@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) _Bool bError; // @synthesize bError=_bError;
- (void).cxx_destruct;

@end

