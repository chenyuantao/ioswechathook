//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LocalSearchDynamicConfig : NSObject
{
    _Bool _isNewGroupSort;
    unsigned int _uiContactActiveDays;
    unsigned int _uiGroupActiveDays;
    unsigned int _uiSmallGroupMembers;
}

@property(nonatomic) unsigned int uiSmallGroupMembers; // @synthesize uiSmallGroupMembers=_uiSmallGroupMembers;
@property(nonatomic) unsigned int uiGroupActiveDays; // @synthesize uiGroupActiveDays=_uiGroupActiveDays;
@property(nonatomic) _Bool isNewGroupSort; // @synthesize isNewGroupSort=_isNewGroupSort;
@property(nonatomic) unsigned int uiContactActiveDays; // @synthesize uiContactActiveDays=_uiContactActiveDays;
- (void)updateConfigs;
- (id)description;
- (id)init;

@end
