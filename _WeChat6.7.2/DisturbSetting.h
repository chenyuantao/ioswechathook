//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class DisturbTimeSpan;

@interface DisturbSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int allDaySetting; // @dynamic allDaySetting;
@property(retain, nonatomic) DisturbTimeSpan *allDayTime; // @dynamic allDayTime;
@property(nonatomic) unsigned int nightSetting; // @dynamic nightSetting;
@property(retain, nonatomic) DisturbTimeSpan *nightTime; // @dynamic nightTime;

@end

