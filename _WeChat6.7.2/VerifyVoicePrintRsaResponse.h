//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, NSString, VoicePieceCtx;

@interface VerifyVoicePrintRsaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authPwd; // @dynamic authPwd;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) VoicePieceCtx *nextPiece; // @dynamic nextPiece;
@property(nonatomic) unsigned int result; // @dynamic result;
@property(nonatomic) unsigned int voiceTicket; // @dynamic voiceTicket;

@end

