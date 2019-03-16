//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface WXPBGeneratedMessage : NSObject
{
    int _has_bits_[3];
    int _serializedSize;
    struct PBClassInfo *_classInfo;
    id *_ivarValueDict;
}

+ (id)parseFromData:(id)arg1;
- (_Bool)hasProperty:(int)arg1;
- (unsigned int)continueFlag;
- (id)baseResponse;
- (void)setBaseRequest:(id)arg1;
- (void)writeValueToCodedOutputDataNoTag:(struct CodedOutputData *)arg1 value:(id)arg2 fieldType:(unsigned char)arg3;
- (void)writeValueToCodedOutputData:(struct CodedOutputData *)arg1 value:(id)arg2 fieldNumber:(int)arg3 fieldType:(unsigned char)arg4;
- (void)writeToCodedOutputData:(struct CodedOutputData *)arg1;
- (int)computeValueSizeNoTag:(id)arg1 fieldType:(unsigned char)arg2;
- (int)computeValueSize:(id)arg1 fieldNumber:(int)arg2 fieldType:(unsigned char)arg3;
- (int)serializedSize;
- (id)serializedData;
- (_Bool)isInitialized;
- (_Bool)isMessageInitialized:(id)arg1;
- (id)readValueFromCodedInputData:(struct CodedInputData *)arg1 fieldType:(unsigned char)arg2;
- (id)mergeFromCodedInputData:(struct CodedInputData *)arg1;
- (id)mergeFromData:(id)arg1;
- (id)valueAtIndex:(int)arg1;
- (void)setValue:(id)arg1 atIndex:(int)arg2;
- (int)indexOfPropertyWithSetter:(const char *)arg1;
- (int)indexOfPropertyWithGetter:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

