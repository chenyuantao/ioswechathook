//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface MyWCTimeline : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_groupHint;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSData *_m_buffer;
}

+ (void)__wcdb_MyWCTimeline_index_52:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCTimeline_primary_51:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCTimeline_unique_50:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_buffer;
+ (void)__wcdb_MyWCTimeline_synthesize_49:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_fromUser;
+ (void)__wcdb_MyWCTimeline_synthesize_48:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_id;
+ (void)__wcdb_MyWCTimeline_synthesize_47:(struct WCTBinding *)arg1;
+ (void)__wcdb_MyWCTimeline_default_46:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_groupHint;
+ (void)__wcdb_MyWCTimeline_synthesize_45:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_localId;
+ (void)__wcdb_MyWCTimeline_synthesize_44:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSData *m_buffer; // @synthesize m_buffer=_m_buffer;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_groupHint; // @synthesize m_groupHint=_m_groupHint;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

