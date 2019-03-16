//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBEmoticon : NSObject <WCTTableCoding>
{
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _length;
    unsigned int _status;
    unsigned int _catalogId;
    unsigned int _lastUsedTime;
    unsigned int _extFlag;
    unsigned int _indexInPack;
    NSString *_md5;
    NSString *_message;
    NSString *_catalog;
    NSString *_draft;
    NSString *_extInfo;
    NSString *_packageId;
    NSString *_ConStrRes3;
}

+ (const struct WCTProperty *)ConStrRes3;
+ (void)__wcdb_DBEmoticon_synthesize_157:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)packageId;
+ (void)__wcdb_DBEmoticon_synthesize_156:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extInfo;
+ (void)__wcdb_DBEmoticon_synthesize_155:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_154:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)indexInPack;
+ (void)__wcdb_DBEmoticon_synthesize_153:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_152:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extFlag;
+ (void)__wcdb_DBEmoticon_synthesize_151:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_150:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastUsedTime;
+ (void)__wcdb_DBEmoticon_synthesize_149:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)draft;
+ (void)__wcdb_DBEmoticon_synthesize_148:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_147:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)catalogId;
+ (void)__wcdb_DBEmoticon_synthesize_146:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)catalog;
+ (void)__wcdb_DBEmoticon_synthesize_145:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_144:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (void)__wcdb_DBEmoticon_synthesize_143:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_142:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)length;
+ (void)__wcdb_DBEmoticon_synthesize_141:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_140:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (void)__wcdb_DBEmoticon_synthesize_139:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBEmoticon_default_138:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (void)__wcdb_DBEmoticon_synthesize_137:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)message;
+ (void)__wcdb_DBEmoticon_synthesize_136:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)md5;
+ (void)__wcdb_DBEmoticon_synthesize_135:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int indexInPack; // @synthesize indexInPack=_indexInPack;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned int lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int catalogId; // @synthesize catalogId=_catalogId;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

