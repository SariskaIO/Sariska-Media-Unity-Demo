
#import <sariska/sariska.h>
#import "UnityForwardDecls.h"

char const *GAME_OBJECT = "PluginBridge";
@interface SariskaNativeiOSPlugin : NSObject
@property Connection * connection;
@property Conference * conference;
@property NSString * roomName;
@property NSMutableArray * localTracks;
extern void UnitySendMessage(const char *, const char *, const char *);
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
    
    NSLog(@"initialized Sariska Media Transport yay!");
    
    NSDictionary *options = [NSDictionary dictionaryWithObjectsAndKeys:
        @YES, @"audio", @NO, @"video", nil];
    
    [SariskaMediaTransport createLocalTracks:options callback:^(NSMutableArray * _Nonnull tracks) {
        self.localTracks = tracks;
    }];
    
    self.connection = [SariskaMediaTransport JitsiConnection:token roomName:@"dipak" isNightly:false];
    
    if(self.connection == NULL){
        NSLog(@"Connection is null");
    }
    
    [self.connection addEventListener:@"CONNECTION_ESTABLISHED" callback:^{
        NSLog(@"Inside the Connection Established Callback");
    }];
    
    [self createConference];
    
    [self.connection addEventListener:@"CONNECTION_FAILED" callback:^{
        NSLog(@"Inside the Connection Failed Callback");
    }];
    
    [self.connection addEventListener:@"CONNECTION_DISCONNECTED" callback:^{
        NSLog(@"Inside the Connection Disconnected Callback");
    }];
    
    [self.connection connect];
}


-(void) createConference{
    self.conference = [self.connection jitsiConference];
    
    [self.conference addEventListener:@"CONFERENCE_JOINED" callback0:^{
       //Do nothing
    }];
    
    [self.conference addEventListener:@"TRACK_ADDED" callback1:^(id _Nonnull p) {
        if([p isLocal]){
            return;
        }
        
        JitsiRemoteTrack * track = p;
        
        if([[track getType]  isEqual: @"audio"]){
            UnitySendMessage(GAME_OBJECT, "HandleTrackAdded", "somone");
        }
    }];
    
    
    [self.conference addEventListener:@"TRACK_REMOVED" callback1:^(id _Nonnull p){
        if([p isLocal]){
            return;
        }
        
        JitsiRemoteTrack * track = p;
        
        if([[track getType]  isEqual: @"audio"]){
            UnitySendMessage(GAME_OBJECT, "HandleTrackRemoved", "somone");
        }
    }];
    
    [self.conference addEventListener:@"CONFERENCE_LEFT" callback0:^{
       //Do nothing
    }];
    
    [self.conference join];
}

@end

extern "C"{
    void initializeSariskaMediaTransportAndStartCall(const char* token){
        NSLog(@"we are in initializeSariskaMediaTransportAndStartCall");
        [[SariskaNativeiOSPlugin sharedInstance] performSampleFunction: [NSString stringWithUTF8String:token]];
    }

    void onMuteAudioIos(){
        
    }

    void onUnMuteAudioIos(){
        
    }

    void onSpeakerIos(){
        
    }

    void offSpeakerIos(){
        
    }

    void onLogoutIos(){
        
    }

    void onEndCallIos(){
        
    }
    
}
