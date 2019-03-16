//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WebRecordInfoData : MMObject <WCTTableCoding>
{
    unsigned int _visittime;
    NSString *_link;
    NSString *_name;
    NSString *_title;
    NSString *_iconurl;
    NSString *_imgurl;
}

+ (void)__wcdb_WebRecordInfoData_index_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_WebRecordInfoData_index_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)visittime;
+ (void)__wcdb_WebRecordInfoData_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)imgurl;
+ (void)__wcdb_WebRecordInfoData_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)iconurl;
+ (void)__wcdb_WebRecordInfoData_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)title;
+ (void)__wcdb_WebRecordInfoData_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)name;
+ (void)__wcdb_WebRecordInfoData_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)link;
+ (void)__wcdb_WebRecordInfoData_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int visittime; // @synthesize visittime=_visittime;
@property(retain, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

