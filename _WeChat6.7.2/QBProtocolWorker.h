//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLProtocol;

@interface QBProtocolWorker : NSObject
{
    NSURLProtocol *_protocol;
}

+ (id)qbProxyCanonicalRequestForRequest:(id)arg1;
+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
+ (_Bool)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(_Bool)arg2;
@property(nonatomic) __weak NSURLProtocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (void)qbProxyProtocolAfterSendRequest:(id)arg1;
- (void)qbProxyProtocolDidFinishLoadingWithCached:(id)arg1 errCode:(long long)arg2;
- (void)qbProxyProtocolDidStopLoading;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (_Bool)qbProxyProtocolDidReceiveResponse:(inout id *)arg1 error:(id *)arg2;
- (void)qbProxyProtocolDidStartLoading;
- (_Bool)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidInitialized;

@end

