//
//  SariskaRTCVideoRenderer.h
//  RCTWebRTC
//
//  Created by Dipak Sisodiya on 15/08/22.
//

#import <WebRTC/RTCVideoRenderer.h>
#import <WebRTC/RTCMediaStream.h>
#import <WebRTC/RTCVideoFrame.h>
#import <WebRTC/RTCVideoTrack.h>

typedef void (*MyFuncType)(const uint8_t * someNumber, int length);

@interface SariskaRTCVideoRenderer : NSObject<RTCVideoRenderer>

/**
 * The {@link RTCVideoTrack}, if any, which this instance renders.
 */

@property (nonatomic, strong) RTCVideoTrack *videoTrack;

- (instancetype)initWithSize:(CGSize)renderSize;

- (void)dispose;

- (void)setRenderFunction:(MyFuncType) func;

@end
