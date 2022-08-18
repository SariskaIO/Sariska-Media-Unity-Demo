
#import <sariska/sariska.h>
#import "SariskaRTCVideoRenderer.h"

typedef void (*MyFuncType)(const uint8_t * someNumber, int length);

char const *GAME_OBJECT = "PluginBridge";
@interface SariskaNativeiOSPlugin : NSObject
@property Connection * connection;
@property Conference * conference;
@property SariskaRTCVideoRenderer * videoRenderer ;
@property NSString * roomName;
@property RTCVideoView *someView;
@property NSTimer *timer;
@property NSMutableArray * localTracks;
@end

@implementation SariskaNativeiOSPlugin

static SariskaNativeiOSPlugin *_sharedInstance;

+(SariskaNativeiOSPlugin*)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[SariskaNativeiOSPlugin alloc] init];
    });
    return _sharedInstance;
}

-(id)init
{
    self = [super init];
    self.videoRenderer = [[SariskaRTCVideoRenderer alloc] init];
    if (self)
        [self initHelper];
    return self;
}

-(void)initHelper
{
    // Set up code goes here
    NSLog(@"Initialized NativeCalculationsPlugin class");
}

-(void) performSampleFunction: (NSString *) token
{
    NSLog(@"performing sample functions");
    
    [SariskaMediaTransport initializeSdk];
    
    self.timer = [NSTimer scheduledTimerWithTimeInterval:1.0
        target:self
        selector:@selector(someThing)
        userInfo:nil
        repeats:YES];
    
    
    NSLog(@"initialized Sariska Media Transport yay!");
    
    NSDictionary *options = [NSDictionary dictionaryWithObjectsAndKeys:
        @YES, @"audio", @YES, @"video", nil];
    
    [SariskaMediaTransport createLocalTracks:options callback:^(NSMutableArray * _Nonnull tracks) {
        self.localTracks = tracks;
    }];
    
    self.connection = [SariskaMediaTransport JitsiConnection:token roomName:@"dipak" isNightly:false];
    
    if(self.connection == NULL){
        NSLog(@"Connection is null");
    }
    
    __weak SariskaNativeiOSPlugin *weakSelf = self;
    
    [self.connection addEventListener:@"CONNECTION_ESTABLISHED" callback:^{
        NSLog(@"Inside the Connection Established Callback");
        [weakSelf createConference];
    }];
    
    [self.connection addEventListener:@"CONNECTION_FAILED" callback:^{
        NSLog(@"Inside the Connection Failed Callback");
    }];
    
    [self.connection addEventListener:@"CONNECTION_DISCONNECTED" callback:^{
        NSLog(@"Inside the Connection Disconnected Callback");
    }];
    
    [self.connection connect];
}

-(void) someThing{
    NSLog(@"HEy Jude");
    RTCVideoTrack *localTrack = [self.someView getVideoTrack];
    if(localTrack != NULL){
        NSLog(@"HEy Jude localTrack is not null");
        [localTrack addRenderer:self.videoRenderer];
        [self.timer invalidate];
    }else{
        return;
    }
}

-(void) createConference{
    self.conference = [self.connection jitsiConference];
    
    NSLog(@"We are in create conference");
    
    __weak SariskaNativeiOSPlugin *weakSelf = self;
    
    [self.conference addEventListener:@"CONFERENCE_JOINED" callback0:^{
        for (JitsiLocalTrack * track in weakSelf.localTracks) {
            [weakSelf.conference addTrack:track];
        }
    }];
    
    
    [self.conference addEventListener:@"TRACK_ADDED" callback1:^(id _Nonnull p) {
        JitsiRemoteTrack *track = p;
        if([track.getType isEqual:@"video"]){
            NSLog(@"In the track video");
            weakSelf.someView = track.render;
        }
    }];
    
    [self.conference addEventListener:@"DOMINANT_SPEAKER_CHANGED" callback1:^(id _Nonnull p) {
        NSLog(@"Dominant Speaker has changed");
        UnitySendMessage(GAME_OBJECT, "HandleDominantSpeakerChanged", [p UTF8String]);
    }];
    
    [self.conference addEventListener:@"TRACK_REMOVED" callback1:^(id _Nonnull p){
        JitsiRemoteTrack *track = p;
        if([track.getType isEqual:@"audio"]){
            NSLog(@"The track removed is: %@", track.getParticipantId);
            UnitySendMessage(GAME_OBJECT, "HandleTrackRemoved", [track.getParticipantId UTF8String]);
        }
    }];
    
    [self.conference addEventListener:@"CONFERENCE_LEFT" callback0:^{
       //Do nothing
    }];
    
    [self.conference join];
}

-(void) muteLocalAudio{
    for (JitsiLocalTrack *track in self.localTracks) {
        if([[track getType] isEqual:@"audio"]){
            [track mute];
        }
    }
}

-(void) unMuteLocalAudio{
    for (JitsiLocalTrack *track in self.localTracks) {
        if([[track getType] isEqual:@"audio"]){
            [track unmute];
        }
    }
}

-(void) logout{
    __weak SariskaNativeiOSPlugin *weakSelf = self;
    if(self.conference != NULL){
        [weakSelf.conference leave];
    }
    [self.connection disconnect];
}

-(void) endCall{
    __weak SariskaNativeiOSPlugin *weakSelf = self;
    if(self.conference != NULL){
        [weakSelf.conference leave];
    }
    [self.connection disconnect];
    exit(-1);
}

-(void) setRender:(MyFuncType) func{
    [self.videoRenderer setRenderFunction:func];
}

@end

extern "C"{
    void initializeSariskaMediaTransportAndStartCall(const char* token){
        NSLog(@"we are in initializeSariskaMediaTransportAndStartCall");
        [[SariskaNativeiOSPlugin sharedInstance] performSampleFunction: [NSString stringWithUTF8String:token]];
    }

    void onMuteAudioIos(){
        [[SariskaNativeiOSPlugin sharedInstance] muteLocalAudio];
    }

    void onUnMuteAudioIos(){
        [[SariskaNativeiOSPlugin sharedInstance] unMuteLocalAudio];
    }

    void onSpeakerIos(){
        AVAudioSession *session = [AVAudioSession sharedInstance];
        try {
            [session setCategory:AVAudioSessionCategoryPlayAndRecord error:NULL];
        } catch (NSException * ex) {
            //do nothing
        }
        [session overrideOutputAudioPort:AVAudioSessionPortOverrideSpeaker error:NULL];
    }

    void offSpeakerIos(){
        AVAudioSession *session = [AVAudioSession sharedInstance];
        try {
            [session setCategory:AVAudioSessionCategoryPlayAndRecord error:NULL];
        } catch (NSException * ex) {
            //do nothing
        }
        [session overrideOutputAudioPort:AVAudioSessionPortOverrideNone error:NULL];
    }
        

    void onLogoutIos(){
        [[SariskaNativeiOSPlugin sharedInstance] logout];
    }

    void onEndCallIos(){
        [[SariskaNativeiOSPlugin sharedInstance] endCall];
    }

    void RegisterCallback(MyFuncType func) {
        [[SariskaNativeiOSPlugin sharedInstance] setRender:func];
    }
}

