//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKEditOptionContainerView-Protocol.h>

@class NSMutableDictionary;

@interface NTKRichComplicationPickerView : UIView <NTKEditOptionContainerView>
{
    NSMutableDictionary *_sideViews;
    double _fraction;
    NSUInteger _fromSide;
    NSUInteger _toSide;
    long long _animationType;
}

// - (void).cxx_destruct;
- (void)_updateViews;
- (void)transitionToFraction:(double)arg1 fromSideAtIndex:(NSUInteger)arg2 toSideAtIndex:(NSUInteger)arg3;
- (void)transitionToSideAtIndex:(NSUInteger)arg1;
- (void)enumerateSideViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)viewForSideAtIndex:(NSUInteger)arg1;
- (void)setView:(id)arg1 forSideAtIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSUInteger numberOfVisibleSides;
@property(readonly, nonatomic) NSUInteger numberOfSides;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithMaskImage:(id)arg1 animationType:(long long)arg2;

@end
