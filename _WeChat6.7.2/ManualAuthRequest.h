//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class ManualAuthAesReqData, ManualAuthRsaReqData;

@interface ManualAuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ManualAuthAesReqData *aesReqData; // @dynamic aesReqData;
@property(retain, nonatomic) ManualAuthRsaReqData *rsaReqData; // @dynamic rsaReqData;

@end

