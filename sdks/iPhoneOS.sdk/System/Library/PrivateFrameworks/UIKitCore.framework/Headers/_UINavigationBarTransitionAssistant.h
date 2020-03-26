//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UINavigationBar;
@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionAssistant : NSObject
{
    long long _animationCount;
    NSMutableArray *_animationIDs;
    BOOL _interruptable;
    BOOL _interactive;
    BOOL _needsLifetimeExtended;
    BOOL _cancelledTransition;
    BOOL _cancelledCleanUp;
    BOOL _shouldHideBackButtonDuringTransition;
    BOOL _shouldUpdatePromptAfterTransition;
    int _transition;
    id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
    UINavigationBar *_navigationBar;
    id <_UINavigationBarDelegatePrivate> _delegate;
    double _duration;
}

+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3;
+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *animationIDs; // @synthesize animationIDs=_animationIDs;
@property(nonatomic) BOOL shouldUpdatePromptAfterTransition; // @synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition;
@property(nonatomic) BOOL shouldHideBackButtonDuringTransition; // @synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition;
@property(readonly, nonatomic) BOOL cancelledCleanUp; // @synthesize cancelledCleanUp=_cancelledCleanUp;
@property(readonly, nonatomic) BOOL cancelledTransition; // @synthesize cancelledTransition=_cancelledTransition;
@property(nonatomic) BOOL needsLifetimeExtended; // @synthesize needsLifetimeExtended=_needsLifetimeExtended;
@property(readonly, nonatomic) BOOL interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) BOOL interruptable; // @synthesize interruptable=_interruptable;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) __weak id <_UINavigationBarDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
// - (void).cxx_destruct;
- (void)_getInteractive;
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)arg1;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)arg1;
- (void)_getTransitionCoordinator;
- (void)decrementAnimationCount;
- (void)incrementAnimationCount;
- (void)_finishTrackingAnimations;
- (void)_startTrackingAnimations;
- (void)finishTrackingInteractiveTransition;
- (void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(BOOL)arg3;
- (void)updateInteractiveTransitionPercent:(double)arg1;
- (void)startInteractiveTransition;
- (void)cancelCleanUp;
@property(readonly, nonatomic) BOOL shouldCrossfade;
@property(readonly, nonatomic) BOOL shouldAnimateAlongside;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;

@end
