//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface GetQRCodeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *footerWording; // @dynamic footerWording;
@property(retain, nonatomic) SKBuiltinBuffer_t *qrcode; // @dynamic qrcode;
@property(retain, nonatomic) NSString *revokeQrcodeId; // @dynamic revokeQrcodeId;
@property(retain, nonatomic) NSString *revokeQrcodeWording; // @dynamic revokeQrcodeWording;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

