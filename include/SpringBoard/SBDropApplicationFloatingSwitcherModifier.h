//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

// - (void).cxx_destruct;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (BOOL)wantsResignActiveAssertion;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
