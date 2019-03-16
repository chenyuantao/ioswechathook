//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface MPPageTemplateInfoContainer : NSObject <PBCoding>
{
    NSMutableDictionary *templateInfoDic;
}

+ (_Bool)saveContainer:(id)arg1 toPath:(id)arg2;
+ (id)loadContainerFromPath:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *templateInfoDic; // @synthesize templateInfoDic;
- (void).cxx_destruct;
- (void)setTemplateInfo:(id)arg1;
- (id)getTemplateInfoWithType:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

