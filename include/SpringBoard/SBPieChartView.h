//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView
{
    NSArray *_slices;
    double _valueTotal;
    double _radius;
    CGPoint _center;
    double _defaultRotation;
}

// - (void).cxx_destruct;
- (void)_drawSlice:(id)arg1 atValue:(double)arg2;
- (void)_rotateContext;
- (void)_updateMetrics;
- (void)drawRect:(CGRect)arg1;
- (void)setSlices:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

