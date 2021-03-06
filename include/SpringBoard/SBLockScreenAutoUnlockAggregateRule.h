//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAutoUnlockComposableRule.h>

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule
{
    SBFUserAuthenticationController *_userAuthenticationController;
    SBSyncController *_syncController;
}

@property(retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController; // @synthesize syncController=_syncController;
@property(readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
// - (void).cxx_destruct;
- (BOOL)shouldAutoUnlockForSource:(int)arg1;
- (id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2;
- (id)initWithUserAuthenticationController:(id)arg1;

@end

