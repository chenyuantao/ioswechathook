//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

@class NSMutableDictionary;

@interface WAWebViewPlugin_HTMLWeb : WAWebViewPlugin_embedView
{
    NSMutableDictionary *_enableScrollDic;
}

@property(readonly, nonatomic) NSMutableDictionary *enableScrollDic; // @synthesize enableScrollDic=_enableScrollDic;
- (void).cxx_destruct;
- (void)insertHtmlVCIfNeed;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (id)init;

@end

