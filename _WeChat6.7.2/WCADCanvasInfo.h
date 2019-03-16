//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, WCArrowDownIconStyle;

@interface WCADCanvasInfo : NSObject <NSCoding>
{
    NSArray *originalPageList;
    NSArray *adCanvasPageList;
    NSString *fromAdXml;
    NSString *shareTitle;
    NSString *shareDesc;
    NSString *shareWebUrl;
    NSString *shareThumbUrl;
    int sizeType;
    int basicWidth;
    int basicRootFontSize;
    int type;
    int subType;
    int visibleCount;
    NSString *canvasId;
    int enterType;
    int disableShareBitSet;
    int bizId;
    int _forceStay;
    int _enterViewIndex;
    int _statusBarStyle;
    NSString *shareAppId;
    NSString *shareType;
    NSString *userInfo;
    WCArrowDownIconStyle *_arrowDownIconStyle;
    NSString *_officialSyncBuffer;
    NSString *_rightBarTitle;
    NSString *_rightBarCanvasId;
    NSString *_rightBarCanvasExt;
}

@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) int enterViewIndex; // @synthesize enterViewIndex=_enterViewIndex;
@property(retain, nonatomic) NSString *rightBarCanvasExt; // @synthesize rightBarCanvasExt=_rightBarCanvasExt;
@property(retain, nonatomic) NSString *rightBarCanvasId; // @synthesize rightBarCanvasId=_rightBarCanvasId;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
@property(retain, nonatomic) NSString *officialSyncBuffer; // @synthesize officialSyncBuffer=_officialSyncBuffer;
@property(nonatomic) int forceStay; // @synthesize forceStay=_forceStay;
@property(retain, nonatomic) WCArrowDownIconStyle *arrowDownIconStyle; // @synthesize arrowDownIconStyle=_arrowDownIconStyle;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType;
@property(retain, nonatomic) NSString *shareAppId; // @synthesize shareAppId;
@property(nonatomic) int bizId; // @synthesize bizId;
@property(nonatomic) int visibleCount; // @synthesize visibleCount;
@property(nonatomic) int disableShareBitSet; // @synthesize disableShareBitSet;
@property(nonatomic) int enterType; // @synthesize enterType;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize;
@property(nonatomic) int basicWidth; // @synthesize basicWidth;
@property(nonatomic) int sizeType; // @synthesize sizeType;
@property(retain, nonatomic) NSString *shareThumbUrl; // @synthesize shareThumbUrl;
@property(retain, nonatomic) NSString *shareWebUrl; // @synthesize shareWebUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle;
@property(retain, nonatomic) NSString *fromAdXml; // @synthesize fromAdXml;
@property(retain, nonatomic) NSArray *originalPageList; // @synthesize originalPageList;
- (void).cxx_destruct;
- (_Bool)hasLoadAllVisiblePages;
@property(readonly, nonatomic) NSArray *adCanvasPageList; // @synthesize adCanvasPageList;
- (void)updateAdCanvasPageListWithinMaxCount:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

