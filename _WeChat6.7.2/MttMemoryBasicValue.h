//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MttMemoryCommon.h"

@interface MttMemoryBasicValue : MttMemoryCommon
{
    _Bool _flag;
    int _pos;
    int _size;
    long long _value;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int pos; // @synthesize pos=_pos;
- (id)JSONObject;

@end

