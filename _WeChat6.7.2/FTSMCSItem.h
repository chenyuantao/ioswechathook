//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FTSMCSItem : NSObject <PBCoding>
{
    float score;
    unsigned int baseTime;
    NSString *key;
}

+ (void)setDeclineFactor:(float)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int baseTime; // @synthesize baseTime;
@property(nonatomic) float score; // @synthesize score;
@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (long long)compareByScoreDesc:(id)arg1;
- (void)updateScoreWithTime:(unsigned int)arg1;
- (void)addScore;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

