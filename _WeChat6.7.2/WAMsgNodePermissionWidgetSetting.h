//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAMsgNodePermissionWidgetSetting : NSObject <PBCoding>
{
    _Bool timerEnabled;
    _Bool drawLock;
    unsigned int drawMinInterval;
}

+ (void)initialize;
@property(nonatomic) _Bool drawLock; // @synthesize drawLock;
@property(nonatomic) _Bool timerEnabled; // @synthesize timerEnabled;
@property(nonatomic) unsigned int drawMinInterval; // @synthesize drawMinInterval;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

