//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WAUtility : NSObject
{
}

+ (id)stringFromByte:(unsigned char)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)hexToBytes:(id)arg1;
+ (_Bool)savePbDataToFile:(id)arg1 Path:(id)arg2;
+ (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)cropImage:(id)arg1 rect:(struct CGRect)arg2;
+ (_Bool)saveImage:(id)arg1 toFile:(id)arg2 type:(struct __CFString *)arg3;
+ (id)getNetworkType;
+ (id)sha1WithFile:(id)arg1;
+ (unsigned long long)millisecondsWithAbsoluteTimeElapse:(unsigned long long)arg1;
+ (unsigned long long)currentAbsoluteTime;
+ (id)snapshotNavigationBarWithItem:(id)arg1 bound:(struct CGRect)arg2 layoutMargin:(struct UIEdgeInsets)arg3;
+ (id)snapshotStatusBar;
+ (id)snapshotLayerWithView:(id)arg1;
+ (id)snapshotWithView:(id)arg1;
+ (id)snapshotWithView:(id)arg1 captureFrame:(struct CGRect)arg2;
+ (void)setStatusBarViewHidden:(_Bool)arg1;
+ (id)getStatusBarView;
+ (_Bool)isKindOfDictionary:(id)arg1;
+ (_Bool)isKindOfData:(id)arg1;
+ (_Bool)isKindOfString:(id)arg1;
+ (void)runBlockOnMainThread:(CDUnknownBlockType)arg1;
+ (_Bool)hasHttpSchemaPrefix:(id)arg1;
+ (id)cerUrlForContact:(id)arg1;
+ (id)configUrlForContact:(id)arg1 rootDir:(id)arg2;
+ (id)trimBaseUrl:(id)arg1;
+ (id)baseUrlForContact:(id)arg1;
+ (id)pathWithoutQuery:(id)arg1 getQuery:(id *)arg2;
+ (id)queryForRelativeURL:(id)arg1;
+ (id)trimRelativeURL:(id)arg1;
+ (id)checkRelativeURL:(id)arg1 withAppId:(id)arg2;
+ (id)getHomePageOfAppId:(id)arg1;
+ (id)pathForRelativeURL:(id)arg1;
+ (_Bool)haveChineseChar:(id)arg1;
+ (id)parseURLParams:(id)arg1;
+ (unsigned int)GenWebviewID;
+ (id)imageFromBase64String:(id)arg1;
+ (id)stringWithSecondsSince1970:(unsigned long long)arg1;
+ (unsigned long long)currentTimeInMicroseconds;
+ (unsigned long long)currentTimeInMilliseconds;
+ (unsigned int)appVersionInTaskFromAppVersionInContact:(unsigned int)arg1 debugMode:(unsigned int)arg2;
+ (id)currentDeviceOrientation;

@end

