
//
//  SariskaVideoRederer.m
//  RCTWebRTC
//
//  Created by Dipak Sisodiya on 15/08/22.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreGraphics/CGImage.h>
#import <WebRTC/RTCVideoFrameBuffer.h>
#import <objc/runtime.h>
#import <WebRTC/RTCVideoRenderer.h>
#import <WebRTC/RTCVideoFrame.h>
#import "SariskaRTCVideoRenderer.h"
#import <WebRTC/RTCI420Buffer.h>
#import <WebRTC/RTCYUVPlanarBuffer.h>
#import "libyuv.h"

#define SIZEOF(a) sizeof(a)/sizeof(*a)

@implementation SariskaRTCVideoRenderer{
    CGSize _renderSize;
    CGSize _frameSize;
    CVPixelBufferRef _pixelBufferRef;
    RTCVideoRotation _rotation;
    MyFuncType _someFunc;
}

-(instancetype)initWithSize:(CGSize)renderSize{
    self = [super init];
    if (self){
            _renderSize = renderSize;
            _pixelBufferRef = nil;
        }
    return self;
}

-(void)dealloc {
    if(_pixelBufferRef){
        CVBufferRelease(_pixelBufferRef);
    }
}

- (CVPixelBufferRef)copyPixelBuffer {
    if(_pixelBufferRef != nil){
        CVBufferRetain(_pixelBufferRef);
        return _pixelBufferRef;
    }
    return nil;
}

-(void)dispose{
    // Do nothing for now
}

- (void)setVideoTrack:(RTCVideoTrack *)videoTrack {
   // Do nothing for now
}

- (void)setRenderFunction:(MyFuncType)func{
    _someFunc = func;
}

-(uint8_t*)copyI420ToCVPixelBuffer:(CVPixelBufferRef)outputPixelBuffer withFrame:(RTCVideoFrame *) frame
{
    id<RTCI420Buffer> i420Buffer = [frame.buffer toI420];
    CVPixelBufferLockBaseAddress(outputPixelBuffer, 0);
    uint8_t* dst = (uint8_t*)CVPixelBufferGetBaseAddress(outputPixelBuffer);
    const OSType pixelFormat = CVPixelBufferGetPixelFormatType(outputPixelBuffer);
    if (pixelFormat == kCVPixelFormatType_420YpCbCr8BiPlanarVideoRange ||
            pixelFormat == kCVPixelFormatType_420YpCbCr8BiPlanarFullRange) {
        NSLog(@"incorrect pixelformat");
        } else {
            const size_t bytesPerRow = CVPixelBufferGetBytesPerRow(outputPixelBuffer);
            if (pixelFormat == kCVPixelFormatType_32BGRA) {
                // Corresponds to libyuv::FOURCC_ARGB
                libyuv::I420ToARGB(i420Buffer.dataY,
                                   i420Buffer.strideY,
                                   i420Buffer.dataU,
                                   i420Buffer.strideU,
                                   i420Buffer.dataV,
                                   i420Buffer.strideV,
                                   dst,
                                   (int)bytesPerRow,
                                   i420Buffer.width,
                                   i420Buffer.height);
                NSLog(@"ARGB pixelformat");
            } else if (pixelFormat == kCVPixelFormatType_32ARGB) {
                // Corresponds to libyuv::FOURCC_BGRA
                libyuv::I420ToBGRA(i420Buffer.dataY,
                                   i420Buffer.strideY,
                                   i420Buffer.dataU,
                                   i420Buffer.strideU,
                                   i420Buffer.dataV,
                                   i420Buffer.strideV,
                                   dst,
                                   (int)bytesPerRow,
                                   i420Buffer.width,
                                   i420Buffer.height);
                NSLog(@"BGRA pixelformat");
            }
        }
        CVPixelBufferUnlockBaseAddress(outputPixelBuffer, 0);
    return dst;
}
#pragma mark - RTCVideoRenderer methods

-(void) renderFrame:(RTCVideoFrame *)frame{
    NSLog(@"We got the frame");
    NSDictionary *pixelAttributes = @{(id)kCVPixelBufferIOSurfacePropertiesKey : @{}};
    CVPixelBufferCreate(kCFAllocatorDefault,
                                frame.width, frame.height,
                                kCVPixelFormatType_32BGRA,
                                (__bridge CFDictionaryRef)(pixelAttributes), &_pixelBufferRef);
    
    uint8_t* dst = [self copyI420ToCVPixelBuffer:_pixelBufferRef withFrame:frame];
    
    
    NSLog(@"the dst is %hhu",*(dst+20));
    
    if(dst == NULL){
        NSLog(@"The RGB data is nill");
    }
    if(_someFunc != NULL){
        _someFunc(dst, 5);
    }
    CVPixelBufferRelease(_pixelBufferRef);
}


- (void)setSize:(CGSize)size {
    // Do nothing for nowy
}



@end


