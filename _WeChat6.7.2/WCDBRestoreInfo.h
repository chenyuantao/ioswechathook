//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCDBRestoreInfo : NSObject <PBCoding>
{
    unsigned int m_rootpage;
    NSString *m_tableName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *m_tableName; // @synthesize m_tableName;
@property(nonatomic) unsigned int m_rootpage; // @synthesize m_rootpage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRootPage:(unsigned int)arg1 andTableName:(id)arg2;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
