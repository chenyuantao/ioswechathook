//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrandProfileCacheItem, CContact;

@interface BrandProfileReporter : NSObject
{
    unsigned int _enterTimestamp;
    CContact *_brandContact;
    BrandProfileCacheItem *_cacheItem;
    unsigned long long _bindWeappCount;
}

@property(nonatomic) unsigned long long bindWeappCount; // @synthesize bindWeappCount=_bindWeappCount;
@property(retain, nonatomic) BrandProfileCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
- (void).cxx_destruct;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2 subFuwu:(id)arg3 subFuwuIdx:(unsigned long long)arg4;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2;
- (id)reportShowFuwuList;
- (id)reportShowArticleList;
- (unsigned int)reportBrandType;
- (void)report10298WhenFetch;
- (void)report10298WhenExit;
- (void)report10298WhenEnter;

@end

