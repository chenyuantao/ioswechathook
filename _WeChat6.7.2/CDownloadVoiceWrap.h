//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface CDownloadVoiceWrap : NSObject <WCTTableCoding>
{
    NSString *m_nsChatUsrName;
    long long m_n64SvrID;
    unsigned int m_uiLocalID;
    unsigned int m_uiOffset;
    unsigned int m_uiLen;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    NSData *m_dtVoice;
    unsigned int m_uiRetryCount;
    unsigned int m_uiCancelFlag;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
}

+ (const struct WCTProperty *)ConStrRes3;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_51:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConStrRes2;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_50:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConStrRes1;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_49:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_48:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes3;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_47:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_46:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes2;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_45:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_44:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes1;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_43:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_42:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiRetryCount;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_41:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_40:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiEndFlag;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_39:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_38:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiVoiceTime;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_37:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_36:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiVoiceLen;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_35:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_34:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_33:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_32:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_n64SvrID;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_31:(struct WCTBinding *)arg1;
+ (void)__wcdb_CDownloadVoiceWrap_default_30:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiLocalID;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_29:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsChatUsrName;
+ (void)__wcdb_CDownloadVoiceWrap_synthesize_28:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset;
- (void).cxx_destruct;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
