//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXVelocityNumberFilter : PXNumberFilter
{
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;
- (double)updatedOutput;
- (id)initWithInput:(double)arg1;

@end
