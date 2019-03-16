//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJCanvasContext.h"

@class EJFontCache, EJFontDescriptor, EJGLProgram2D, EJJavaScriptView, EJPath, EJSharedOpenGLContext, EJTexture, NSObject<EJFillable>;

@interface EJCanvasContext2D : EJCanvasContext
{
    unsigned int viewFrameBuffer;
    unsigned int viewRenderBuffer;
    unsigned int msaaFrameBuffer;
    unsigned int msaaRenderBuffer;
    unsigned int stencilBuffer;
    unsigned char stencilMask;
    short bufferWidth;
    short bufferHeight;
    unsigned int textureFilter;
    EJTexture *currentTexture;
    EJPath *path;
    struct {
        CDStruct_6e3f967a _field1;
        CDStruct_6e3f967a _field2;
        CDUnion_a0760c36 _field3;
    } *vertexBuffer;
    int vertexBufferSize;
    int vertexBufferIndex;
    int stateIndex;
    CDStruct_41dee45e stateStack[16];
    CDStruct_41dee45e *state;
    _Bool upsideDown;
    EJFontCache *fontCache;
    EJJavaScriptView *scriptView;
    EJGLProgram2D *currentProgram;
    EJSharedOpenGLContext *sharedGLContext;
    _Bool imageSmoothingEnabled;
}

@property(nonatomic) unsigned char stencilMask; // @synthesize stencilMask;
@property(nonatomic) CDStruct_41dee45e *state; // @synthesize state;
- (void)resetClip;
- (void)clip:(int)arg1;
- (CDStruct_de2edefb)measureText:(id)arg1;
- (void)strokeText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)fillText:(id)arg1 x:(float)arg2 y:(float)arg3;
- (void)arcX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(_Bool)arg6;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)rectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)quadraticCurveToCpx:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)bezierCurveToCpx1:(float)arg1 cpy1:(float)arg2 cpx2:(float)arg3 cpy2:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)stroke;
- (void)fill:(int)arg1;
- (void)closePath;
- (void)beginPath;
- (void)putImageData:(id)arg1 dx:(float)arg2 dy:(float)arg3;
- (id)getImageDataSx:(short)arg1 sy:(short)arg2 sw:(short)arg3 sh:(short)arg4;
- (void)clearRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)strokeRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4;
- (void)drawImage:(id)arg1 sx:(float)arg2 sy:(float)arg3 sw:(float)arg4 sh:(float)arg5 dx:(float)arg6 dy:(float)arg7 dw:(float)arg8 dh:(float)arg9;
- (void)setTransformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)transformM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)scaleX:(float)arg1 y:(float)arg2;
- (void)translateX:(float)arg1 y:(float)arg2;
- (void)rotate:(float)arg1;
- (void)restore;
- (void)save;
@property(retain, nonatomic) NSObject<EJFillable> *strokeObject;
@property(retain, nonatomic) NSObject<EJFillable> *fillObject;
@property(retain, nonatomic) EJFontDescriptor *font;
@property(nonatomic) int globalCompositeOperation;
@property(nonatomic) _Bool imageSmoothingEnabled; // @synthesize imageSmoothingEnabled;
- (void)flushBuffers;
- (void)pushTexturedRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 tx:(float)arg5 ty:(float)arg6 tw:(float)arg7 th:(float)arg8 color:(CDUnion_a0760c36)arg9 withTransform:(struct CGAffineTransform)arg10;
- (void)pushPatternedRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 pattern:(id)arg5 color:(CDUnion_a0760c36)arg6 withTransform:(struct CGAffineTransform)arg7;
- (void)pushGradientRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 gradient:(id)arg5 color:(CDUnion_a0760c36)arg6 withTransform:(struct CGAffineTransform)arg7;
- (void)pushFilledRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 fillable:(id)arg5 color:(CDUnion_a0760c36)arg6 withTransform:(struct CGAffineTransform)arg7;
- (void)pushRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 color:(CDUnion_a0760c36)arg5 withTransform:(struct CGAffineTransform)arg6;
- (void)pushQuadV1:(CDStruct_6e3f967a)arg1 v2:(CDStruct_6e3f967a)arg2 v3:(CDStruct_6e3f967a)arg3 v4:(CDStruct_6e3f967a)arg4 color:(CDUnion_a0760c36)arg5 withTransform:(struct CGAffineTransform)arg6;
- (void)pushTriX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 x3:(float)arg5 y3:(float)arg6 color:(CDUnion_a0760c36)arg7 withTransform:(struct CGAffineTransform)arg8;
- (void)setProgram:(id)arg1;
- (void)setTexture:(id)arg1;
- (void)setHeight:(short)arg1;
- (void)setWidth:(short)arg1;
- (void)prepare;
- (void)bindVertexBuffer;
- (void)createStencilBufferOnce;
- (void)resetFramebuffer;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)setStopRender:(_Bool)arg1;
- (void)create;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1 width:(short)arg2 height:(short)arg3;

@end

