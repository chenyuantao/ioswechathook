//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCPaySimpleUserSetPassGuideInfo : MMObject
{
    unsigned int _m_uiSendPwdMsg;
    NSString *_m_nsGuideWording;
    NSString *_m_nsLeftButtonWording;
    NSString *_m_nsRightButtonWording;
}

+ (id)GenFromDictionary:(id)arg1;
@property(nonatomic) unsigned int m_uiSendPwdMsg; // @synthesize m_uiSendPwdMsg=_m_uiSendPwdMsg;
@property(retain, nonatomic) NSString *m_nsRightButtonWording; // @synthesize m_nsRightButtonWording=_m_nsRightButtonWording;
@property(retain, nonatomic) NSString *m_nsLeftButtonWording; // @synthesize m_nsLeftButtonWording=_m_nsLeftButtonWording;
@property(retain, nonatomic) NSString *m_nsGuideWording; // @synthesize m_nsGuideWording=_m_nsGuideWording;
- (void).cxx_destruct;
- (id)getConfirmWording;
- (id)getCancelWording;
- (id)getGuideWording;
- (_Bool)isShowSetPasswordAlert;

@end

