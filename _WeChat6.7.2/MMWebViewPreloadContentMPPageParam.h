//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMWebViewPreloadContentMPPageParam : NSObject
{
    unsigned int _templateType;
    unsigned int _templateVersion;
    unsigned int _templateReportId;
    NSString *_pageFrameUrl;
    NSString *_templateFullVersion;
}

@property(nonatomic) unsigned int templateReportId; // @synthesize templateReportId=_templateReportId;
@property(copy, nonatomic) NSString *templateFullVersion; // @synthesize templateFullVersion=_templateFullVersion;
@property(nonatomic) unsigned int templateVersion; // @synthesize templateVersion=_templateVersion;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *pageFrameUrl; // @synthesize pageFrameUrl=_pageFrameUrl;
- (void).cxx_destruct;
- (id)description;

@end

