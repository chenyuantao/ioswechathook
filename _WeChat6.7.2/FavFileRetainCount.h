//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface FavFileRetainCount : NSObject <WCTTableCoding>
{
    unsigned int _itemLocalId;
    NSString *_md5;
}

+ (void)__wcdb_FavFileRetainCount_index_67:(struct WCTBinding *)arg1;
+ (void)__wcdb_FavFileRetainCount_default_66:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)itemLocalId;
+ (void)__wcdb_FavFileRetainCount_synthesize_65:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)md5;
+ (void)__wcdb_FavFileRetainCount_synthesize_64:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int itemLocalId; // @synthesize itemLocalId=_itemLocalId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

