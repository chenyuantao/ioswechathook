//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMFile : NSObject <PBCoding>
{
    NSString *name;
    long long size;
}

+ (void)initialize;
@property long long size; // @synthesize size;
@property(retain) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

