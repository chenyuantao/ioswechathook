//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString, WSRedPointInfo;

@interface WSRedPointCtrlInfo : NSObject <PBCoding>
{
    unsigned int recommendClearedTimeStamps;
    unsigned int searchClearedTimeStamps;
    WSRedPointInfo *searchRedPointInfo;
    WSRedPointInfo *recommendRedPointInfo;
}

+ (void)initialize;
@property(nonatomic) unsigned int searchClearedTimeStamps; // @synthesize searchClearedTimeStamps;
@property(nonatomic) unsigned int recommendClearedTimeStamps; // @synthesize recommendClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *recommendRedPointInfo; // @synthesize recommendRedPointInfo;
@property(retain, nonatomic) WSRedPointInfo *searchRedPointInfo; // @synthesize searchRedPointInfo;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

