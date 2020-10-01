//
//  ClocketSyncAudioUnit.h
//  ClocketSync
//
//  Created by Wes Delp on 10/1/20.
//

#import <AudioToolbox/AudioToolbox.h>
#import "ClocketSyncDSPKernelAdapter.h"

// Define parameter addresses.
extern const AudioUnitParameterID myParam1;

@interface ClocketSyncAudioUnit : AUAudioUnit

@property (nonatomic, readonly) ClocketSyncDSPKernelAdapter *kernelAdapter;
- (void)setupAudioBuses;
- (void)setupParameterTree;
- (void)setupParameterCallbacks;
@end
