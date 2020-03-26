//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _EARFormatter;
@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject
{
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    struct shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;
    NSString *_configPath;
}

+ (void)initialize;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)resultsWithEndedAudio;
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(NSUInteger)arg2 taskName:(id)arg3;
- (id)getSpeechRecognitionResultFromTokens:(vector_2c247c42)arg1 taskName:(id)arg2;
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(BOOL)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;
- (id)initWithConfiguration:(id)arg1;

@end
