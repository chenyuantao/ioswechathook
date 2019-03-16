//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol MMWebViewPreloadContentHandler <NSObject>
- (NSDictionary *)requestSessionHeader;
- (NSString *)addSessoinQueryForRequestUrl:(NSString *)arg1;
- (void)onLoadPageDataWithA8keyScene:(unsigned int)arg1 enterScene:(unsigned int)arg2 enterSubscene:(unsigned int)arg3 sessionId:(NSString *)arg4;
- (void)saveA8KeyInfoWithUrl:(NSString *)arg1 header:(NSDictionary *)arg2;
- (void)updatePageDataWithCompletion:(void (^)(NSString *, NSString *))arg1;
- (NSString *)pageDataString;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (NSString *)getPageForceUrl;
- (void)setupPageUrl:(NSString *)arg1;
- (NSString *)pageFrameHtmlString;
- (NSString *)pageFrameUrlString;
- (unsigned int)getPageTemplateReportId;
- (NSString *)getPageTemplateFullVersion;
- (unsigned int)getPageTemplateVersion;
- (unsigned int)getPageTemplateType;
- (id)initWithParameter:(id)arg1;
@end

