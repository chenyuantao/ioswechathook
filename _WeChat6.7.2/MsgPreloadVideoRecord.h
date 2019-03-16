//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MsgPreloadVideoRecord : NSObject <PBCoding>
{
    NSString *m_nsChatName;
    unsigned int m_uiLocalID;
    unsigned int m_uiAccessTime;
    _Bool m_bNonAutoClean;
    unsigned int m_uiHasPreloadSize;
}

+ (void)initialize;
@property(nonatomic) _Bool m_bNonAutoClean; // @synthesize m_bNonAutoClean;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
- (void).cxx_destruct;
- (_Bool)isChatRoom;
- (id)pathForPreloadVideo;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

