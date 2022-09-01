
#import <sariska/sariska.h>
#import "SariskaRTCVideoRenderer.h"

typedef void (*RenderFunctionDelegate)(const uint8_t * data, int width, int height);

char const *GAME_OBJECT = "PluginBridge";
@interface SariskaNativeiOSPlugin : NSObject
@property Connection * connection;
@property Conference * conference;
@property SariskaRTCVideoRenderer * videoRendererLocal ;
@property SariskaRTCVideoRenderer * videoRendererRemote;
@property NSString * roomName;
@property RTCVideoView *localVideoView;
@property RTCVideoView *remoteVideoView;
@property NSTimer *localtimer;
@property NSTimer *remotetimer;
@property NSMutableArray * localTracks;
@property NSString * dominantSpeakerId;
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
    self.videoRendererLocal = [[SariskaRTCVideoRenderer alloc] init];
    self.videoRendererRemote = [[SariskaRTCVideoRenderer alloc] init];
    if (self)
        [self initHelper];
    return self;
}

-(void)initHelper
{
    // Set up code goes here
    NSLog(@"Initialized NativeCalculationsPlugin class");
}

-(void) initializeSariskaMediaTransport
{
    [SariskaMediaTransport initializeSdk];
    
    self.localtimer = [NSTimer scheduledTimerWithTimeInterval:1.0
        target:self
        selector:@selector(addRendererToLocalTrack)
        userInfo:nil
        repeats:YES];
    
    self.remotetimer = [NSTimer scheduledTimerWithTimeInterval:1.0
        target:self
        selector:@selector(addRendererToRemoteTrack)
        userInfo:nil
        repeats:YES];
    
    NSLog(@"initialized Sariska Media Transport yay!");
    
}


-(void) addRendererToLocalTrack{
    RTCVideoTrack *track = [self.localVideoView getVideoTrack];
    if(track != NULL){
        [track addRenderer:self.videoRendererLocal];
        [self.localtimer invalidate];
    }else{
        return;
    }
}

-(void) addRendererToRemoteTrack{
    NSLog(@"timer render");
   RTCVideoTrack *remoteTrack = [self.remoteVideoView getVideoTrack];
   if(remoteTrack != NULL){
       NSLog(@"Remote track is not null anymore");
       [remoteTrack addRenderer:self.videoRendererRemote];
       [self.remotetimer invalidate];
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
        JitsiLocalTrack *localVideoTrack;
        for (JitsiLocalTrack *localTrack in weakSelf.localTracks) {
            if([localTrack.getType isEqual:@"video"]){
                localVideoTrack = localTrack;
            }
        }
        if([track.getType isEqual:@"audio"]){
            return;
        }else{
            if([track.getStreamURL isEqual:localVideoTrack.getStreamURL]){
                NSLog(@"This is the local video track, returning");
                return;
            }else{
                NSLog(@"Rendering remote view");
                weakSelf.remoteVideoView = track.render;
            }
        }
    }];
    
    [self.conference addEventListener:@"DOMINANT_SPEAKER_CHANGED" callback1:^(id _Nonnull p) {
        NSLog(@"Dominant Speaker has changed");
        weakSelf.dominantSpeakerId = p;
        //UnitySendMessage(GAME_OBJECT, "HandleDominantSpeakerChanged", [p UTF8String]);
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

-(void) setupLocalStream: (bool) audio : (bool) video : (int) resolution{
    NSDictionary *options = NULL;
    if(audio == TRUE && video == TRUE){
        options = [NSDictionary dictionaryWithObjectsAndKeys:@YES, @"audio", @YES, @"video", nil];
    }else if(audio == TRUE && video == TRUE){
        options = [NSDictionary dictionaryWithObjectsAndKeys:@YES, @"audio", @NO, @"video", nil];
    }else if(audio == FALSE && video == TRUE){
        options = [NSDictionary dictionaryWithObjectsAndKeys:@NO, @"audio", @YES, @"video", nil];
    }else{
        options = [NSDictionary dictionaryWithObjectsAndKeys:@NO, @"audio", @NO, @"video", nil];
    }
    
    [SariskaMediaTransport createLocalTracks:options callback:^(NSMutableArray * _Nonnull tracks) {
            __weak SariskaNativeiOSPlugin *weakSelf = self;
            self.localTracks = tracks;
            for (JitsiLocalTrack *localTrack in tracks) {
                if([[localTrack getType] isEqual:@"video"]){
                    weakSelf.localVideoView = localTrack.render;
                }
            }
        }];
}

-(void) createConnection: (NSString *) roomname : (NSString *) token{
    
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

-(void) setLocalRender:(RenderFunctionDelegate) func{
    [self.videoRendererLocal setRenderFunction:func];
}

-(void) setRemoteRender:(RenderFunctionDelegate) func{
    [self.videoRendererRemote setRenderFunction:func];
}

-(NSString *) getDominantSpeaker{
    return self.dominantSpeakerId;
}

-(NSNumber *) getParticipantCount: (bool)hidden{
    return [self.conference getParticipantCount:hidden];
}

-(void) lockRoom:(NSString *) password{
    [self.conference lock:password];
}

-(void) unLockRoom{
    [self.conference unlock];
}

-(void)onSwitchCamera{
    for (JitsiLocalTrack *track in self.localTracks) {
        if([[track getType] isEqual:@"video"]){
            [track switchCamera];
        }
    }
}

-(void) onMuteVideo{
    for (JitsiLocalTrack *track in self.localTracks) {
        if([[track getType] isEqual:@"video"]){
            [track mute];
        }
    }
}

-(void) onUnMuteVideo{
    for (JitsiLocalTrack *track in self.localTracks) {
        if([[track getType] isEqual:@"video"]){
            [track unmute];
        }
    }
}



@end
//const char* token
extern "C"{
    void initializeSariskaMediaTransport(){
        NSLog(@"we are in initializeSariskaMediaTransport");
        [[SariskaNativeiOSPlugin sharedInstance] initializeSariskaMediaTransport];
    }

    void setupLocalStream(bool audio, bool video, int resolution){
        [[SariskaNativeiOSPlugin sharedInstance] setupLocalStream:audio :video :resolution];
    }

    void createConnection(const char* roomName, const char * token){
        [[SariskaNativeiOSPlugin sharedInstance]
            createConnection:[NSString stringWithUTF8String:roomName]
                :[NSString stringWithUTF8String:token]];
    }

    const char * getDominantSpeaker(){
        const char * dominantSpeaker =[[[SariskaNativeiOSPlugin sharedInstance] getDominantSpeaker] UTF8String];
        return dominantSpeaker;
    }

    int getParticipantCount(bool hidden){
        return [[[SariskaNativeiOSPlugin sharedInstance] getParticipantCount: hidden] intValue];
    }

    void lockRoom(const char * password){
        [[SariskaNativeiOSPlugin sharedInstance] lockRoom:[NSString stringWithUTF8String:password]];
    }

    void unLockRoom(){
        [[SariskaNativeiOSPlugin sharedInstance] unLockRoom];
    }

    void onSwitchCamera(){
        [[SariskaNativeiOSPlugin sharedInstance] onSwitchCamera];
    }

    void onMuteAudio(){
        [[SariskaNativeiOSPlugin sharedInstance] muteLocalAudio];
    }

    void onUnMuteAudio(){
        [[SariskaNativeiOSPlugin sharedInstance] unMuteLocalAudio];
    }

    void onMuteVideo(){
        [[SariskaNativeiOSPlugin sharedInstance] onMuteVideo];
    }

    void onUnMuteVideo(){
        [[SariskaNativeiOSPlugin sharedInstance] onUnMuteVideo];
    }

    void onSpeaker(){
        AVAudioSession *session = [AVAudioSession sharedInstance];
        try {
            [session setCategory:AVAudioSessionCategoryPlayAndRecord error:NULL];
        } catch (NSException * ex) {
            //do nothing
        }
        [session overrideOutputAudioPort:AVAudioSessionPortOverrideSpeaker error:NULL];
    }

    void offSpeaker(){
        AVAudioSession *session = [AVAudioSession sharedInstance];
        try {
            [session setCategory:AVAudioSessionCategoryPlayAndRecord error:NULL];
        } catch (NSException * ex) {
            //do nothing
        }
        [session overrideOutputAudioPort:AVAudioSessionPortOverrideNone error:NULL];
    }
        

    void onLogout(){
        [[SariskaNativeiOSPlugin sharedInstance] logout];
    }

    void onEndCall(){
        [[SariskaNativeiOSPlugin sharedInstance] endCall];
    }

    void RegisterCallbackLocal(RenderFunctionDelegate func, int isLocal) {
        NSLog(@"Registerting Local Callback");
        if(isLocal == 1){
            NSLog(@"settingLocalRenderer");
            [[SariskaNativeiOSPlugin sharedInstance] setLocalRender:func];
        }else if(isLocal ==0){
            NSLog(@"settingRemoteRenderer");
            [[SariskaNativeiOSPlugin sharedInstance] setRemoteRender:func];
        }
    }
}

