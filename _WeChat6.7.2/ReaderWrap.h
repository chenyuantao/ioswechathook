//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, ReaderTopNewWrap, TemplateDetailToplineWrap, TemplateHeaderWrap, TemplateImageTextWrap, TemplateScheduleOPWrap, TemplateWeappOPWrap, UIColor;

@interface ReaderWrap : NSObject
{
    NSString *m_nsTitle;
    NSString *m_nsUrl;
    NSString *m_nsNativeUrl;
    NSString *m_nsShortUrl;
    NSString *m_nsTid;
    NSString *m_nsSource;
    NSString *m_nsSourceIcon;
    NSDate *m_pubTime;
    unsigned int m_uiType;
    _Bool m_bHasVedio;
    NSString *m_nsCategory;
    NSString *m_nsUserName;
    NSString *m_nsNickName;
    ReaderTopNewWrap *m_TopNewWrap;
    unsigned int m_uiDelFlag;
    unsigned int m_uiContentAttributeBitSetFlag;
    unsigned int m_uiItemShowType;
    UIColor *m_topColor;
    NSMutableArray *m_arrStyles;
    NSMutableArray *m_arrLines;
    _Bool _showComplaintButtonOldTemplate;
    unsigned int m_playLength;
    unsigned int m_picNum;
    unsigned int _templateShowType;
    unsigned int _templateOpType;
    unsigned int _opItemShowType;
    NSString *_m_playUrl;
    NSString *_m_player;
    unsigned long long _musicSource;
    TemplateImageTextWrap *_imageTextWrap;
    TemplateHeaderWrap *_headerWrap;
    TemplateDetailToplineWrap *_toplineWrap;
    NSMutableArray *_leftColumns;
    NSMutableArray *_rightColumns;
    NSMutableArray *_opItems;
    TemplateWeappOPWrap *_weappOpWrap;
    TemplateScheduleOPWrap *_scheduleOpWrap;
    unsigned long long _m_index;
}

+ (_Bool)parseLineWrap:(id)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
+ (_Bool)parseKeyLineWrap:(id)arg1 valueLineWrap:(id)arg2 xmlNode:(struct XmlReaderNode_t *)arg3;
+ (id)getArrReaderWaps:(id)arg1;
+ (id)getFirstReaderTitle:(id)arg1;
+ (struct XmlReaderNode_t *)getReaderNode:(struct XmlReaderNode_t *)arg1;
+ (void)convertReaderMsgToWeappMsg:(id)arg1 inMessage:(id)arg2;
+ (_Bool)hasReaderMsgJumpToWeapp:(id)arg1;
+ (_Bool)isReaderMsgJumpToWeapp:(id)arg1;
@property(nonatomic) unsigned long long m_index; // @synthesize m_index=_m_index;
@property(nonatomic) unsigned int opItemShowType; // @synthesize opItemShowType=_opItemShowType;
@property(retain, nonatomic) TemplateScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) TemplateWeappOPWrap *weappOpWrap; // @synthesize weappOpWrap=_weappOpWrap;
@property(nonatomic) _Bool showComplaintButtonOldTemplate; // @synthesize showComplaintButtonOldTemplate=_showComplaintButtonOldTemplate;
@property(nonatomic) unsigned int templateOpType; // @synthesize templateOpType=_templateOpType;
@property(retain, nonatomic) NSMutableArray *opItems; // @synthesize opItems=_opItems;
@property(retain, nonatomic) NSMutableArray *rightColumns; // @synthesize rightColumns=_rightColumns;
@property(retain, nonatomic) NSMutableArray *leftColumns; // @synthesize leftColumns=_leftColumns;
@property(retain, nonatomic) TemplateDetailToplineWrap *toplineWrap; // @synthesize toplineWrap=_toplineWrap;
@property(retain, nonatomic) TemplateHeaderWrap *headerWrap; // @synthesize headerWrap=_headerWrap;
@property(retain, nonatomic) TemplateImageTextWrap *imageTextWrap; // @synthesize imageTextWrap=_imageTextWrap;
@property(nonatomic) unsigned int templateShowType; // @synthesize templateShowType=_templateShowType;
@property(nonatomic) unsigned long long musicSource; // @synthesize musicSource=_musicSource;
@property(retain, nonatomic) NSString *m_player; // @synthesize m_player=_m_player;
@property(retain, nonatomic) NSString *m_playUrl; // @synthesize m_playUrl=_m_playUrl;
@property(nonatomic) unsigned int m_picNum; // @synthesize m_picNum;
@property(nonatomic) unsigned int m_playLength; // @synthesize m_playLength;
@property(nonatomic) unsigned int m_uiContentAttributeBitSetFlag; // @synthesize m_uiContentAttributeBitSetFlag;
@property(retain, nonatomic) NSMutableArray *m_arrLines; // @synthesize m_arrLines;
@property(retain, nonatomic) NSMutableArray *m_arrStyles; // @synthesize m_arrStyles;
@property(nonatomic) unsigned int m_uiItemShowType; // @synthesize m_uiItemShowType;
@property(retain, nonatomic) UIColor *m_topColor; // @synthesize m_topColor;
@property(nonatomic) unsigned int m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(retain, nonatomic) ReaderTopNewWrap *m_TopNewWrap; // @synthesize m_TopNewWrap;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsCategory; // @synthesize m_nsCategory;
@property(nonatomic) _Bool m_bHasVedio; // @synthesize m_bHasVedio;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSDate *m_pubTime; // @synthesize m_pubTime;
@property(retain, nonatomic) NSString *m_nsSourceIcon; // @synthesize m_nsSourceIcon;
@property(retain, nonatomic) NSString *m_nsSource; // @synthesize m_nsSource;
@property(retain, nonatomic) NSString *m_nsTid; // @synthesize m_nsTid;
@property(retain, nonatomic) NSString *m_nsShortUrl; // @synthesize m_nsShortUrl;
@property(retain, nonatomic) NSString *m_nsNativeUrl; // @synthesize m_nsNativeUrl;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end

