//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

#import "EJDrawable.h"

@class EJImageData, EJTexture;

@interface EJBindingImageData : EJBindingBase <EJDrawable>
{
    EJImageData *imageData;
    struct OpaqueJSValue *dataArray;
}

+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get_data;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_data:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) EJTexture *texture;
@property(readonly, nonatomic) EJImageData *imageData; // @synthesize imageData;
- (void)dealloc;
- (id)initWithImageData:(id)arg1;

@end
