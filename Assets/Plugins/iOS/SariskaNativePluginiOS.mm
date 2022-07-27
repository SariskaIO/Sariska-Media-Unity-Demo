
#import <sariska/sariska.h>
char const *GAME_OBJECT = "PluginBridge";
@interface SariskaNativeiOSPlugin : NSObject
@property Connection * connection;
@property Conference * conference;
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

-(void) performSampleFunction: (NSString*)token
{
    NSLog(@"performing sample functions");
    
    [SariskaMediaTransport initializeSdk];
    
    
    
    NSLog(@"initialized Sariska Media Transport yay!");
    
    NSDictionary *options = [NSDictionary dictionaryWithObjectsAndKeys:
        @YES, @"audio", @NO, @"video", nil];
    
    [SariskaMediaTransport createLocalTracks:options callback:^(NSMutableArray * _Nonnull tracks) {
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
    
    [self.conference addEventListener:@"TRACK_ADDED" callback0:^{
       //Do nothing
    }];
    
    [self.conference addEventListener:@"TRACK_REMOVED" callback0:^{
       //Do nothing
    }];
    
    [self.conference addEventListener:@"CONFERENCE_LEFT" callback0:^{
       //Do nothing
    }];
    
    [self.conference join];
}

@end

extern "C"{
void initializeSariskaMediaTransport(){
        NSLog(@"We are in iOS from Unity");
    NSString * token = @"eyJhbGciOiJSUzI1NiIsImtpZCI6IjNmYjc1MTJjZjgzYzdkYTRjMjM0Y2QzYWEyYWViOTUzMGNlZmUwMDg1YzRiZjljYzgwY2U5YmQ5YmRiNjA3ZjciLCJ0eXAiOiJKV1QifQ.eyJjb250ZXh0Ijp7InVzZXIiOnsiaWQiOiJseDVudnc2dyIsImF2YXRhciI6IiMwRkU4MkEiLCJuYW1lIjoiZGlwc2Rkc2QifSwiZ3JvdXAiOiIxIn0sInN1YiI6InVhdG5jb2U1djcybG5vaGxud2dxdjgiLCJyb29tIjoiKiIsImlhdCI6MTY1ODg1NDE5NSwibmJmIjoxNjU4ODU0MTk1LCJpc3MiOiJzYXJpc2thIiwiYXVkIjoibWVkaWFfbWVzc2FnaW5nX2NvLWJyb3dzaW5nIiwiZXhwIjoxNjU5MDI2OTk1fQ.heOmSfRvwpy9GVS5lJle_dOVIh_TR-jGFpwIJIOsTQSL1sjfP0-A9VON13Y903_lI5_Pz6Kdk4fMG9VMj4laJiDGtqWICQ09nnhS1yqoBMY5pOITo8tfn5ZDm9ZZlggcZTjrds0QcJfQvDL612O9e2AQ-xRg3eJST5gYDTbTzNLItDMbVKrnDyTEeWR4dTttkCD8aoo51p1VT1aS619rMEZ2KANsg3zImmrswZNQqEFohZVndhaJVQhwUkWObu4txuqvr2cIpdD9lkaN26Q73aRABo1vrLPnWYEP_n8NLzr-MZguY3UooldoZT9C6Zy5NqaIwU5Oi7iL3N1IoKMruQ";
        [[SariskaNativeiOSPlugin sharedInstance] performSampleFunction:token];
    }
    
}
