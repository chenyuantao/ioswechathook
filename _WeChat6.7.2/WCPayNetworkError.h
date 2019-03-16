//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WCPayNetworkError : NSObject
{
    long long _errorCode;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
    NSString *_errorDetailUrl;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
@property(retain, nonatomic) NSString *errorDetailUrl; // @synthesize errorDetailUrl=_errorDetailUrl;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)description;
- (id)convertToNSError;
- (void)dealloc;

@end

