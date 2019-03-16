//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSString;

@interface WWKMessageLocationAttachment : WWKMessageAttachment
{
    NSString *_title;
    NSString *_address;
    double _lat;
    double _lng;
    double _zoom;
}

@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

