//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)finishSpeech;
- (BOOL)requiresResponse;
@property(nonatomic) double totalAudioRecorded;
@property(copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property(nonatomic) long long packetCount;
@property(copy, nonatomic) NSArray *orderedContext;
@property(copy, nonatomic) NSArray *featuresAtEndpoint;
@property(copy, nonatomic) NSString *endpoint;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
