//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface ResendFavItem : NSObject <PBCoding>
{
    unsigned int favId;
    unsigned int localFavId;
    unsigned int _itemStatus;
    NSMutableArray *fileIdList;
}

+ (void)initialize;
@property(nonatomic) unsigned int itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSMutableArray *fileIdList; // @synthesize fileIdList;
@property(nonatomic) unsigned int localFavId; // @synthesize localFavId;
@property(nonatomic) unsigned int favId; // @synthesize favId;
- (void).cxx_destruct;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

