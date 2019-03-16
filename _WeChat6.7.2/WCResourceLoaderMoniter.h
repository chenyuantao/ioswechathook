//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCResourceLoaderMoniter : NSObject
{
    unsigned int _currentSameCount;
    unsigned int _threshold;
    long long _currentRequestLength;
}

@property(nonatomic) unsigned int threshold; // @synthesize threshold=_threshold;
@property(nonatomic) unsigned int currentSameCount; // @synthesize currentSameCount=_currentSameCount;
@property(nonatomic) long long currentRequestLength; // @synthesize currentRequestLength=_currentRequestLength;
- (void)checkData:(id)arg1 length:(unsigned int)arg2;
- (_Bool)shouldLowerPriorityWithLoadingRequest:(id)arg1;

@end

