//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportGameRenderItem : WAReportBaseItem
{
    int _canvasType;
    int _eventType;
    int _eventValue;
    long long _gameduration;
}

@property(nonatomic) long long gameduration; // @synthesize gameduration=_gameduration;
@property(nonatomic) int eventValue; // @synthesize eventValue=_eventValue;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) int canvasType; // @synthesize canvasType=_canvasType;
- (id)reportString;

@end
