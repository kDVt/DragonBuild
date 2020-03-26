//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection
{
    NSArray *_motionVectors;
    CGSize _size;
}

@property(readonly) CGSize size; // @synthesize size=_size;
@property(readonly) NSArray *motionVectors; // @synthesize motionVectors=_motionVectors;
// - (void).cxx_destruct;
- (id)classPaddingMap;
- (id)classMotionScoreMap;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (float)scoreForSubBoundingBox:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4;
- (id)initWithBoundingBox:(CGRect)arg1 size:(CGSize)arg2 motionVectors:(id)arg3;

@end
