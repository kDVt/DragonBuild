//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SOSManagerClientObserver-Protocol.h>

@class SBBacklightController, SBFUserAuthenticationController, SBLockScreenManager, SOSManager;
@protocol BSInvalidatable;

@interface SBSOSEventHandler : NSObject <SOSManagerClientObserver>
{
    id _coversheetObserverToken;
    id <BSInvalidatable> _disableSTARAssertion;
    BOOL _running;
    SBFUserAuthenticationController *_override_authenticationController;
    SBBacklightController *_override_backlightController;
    SBLockScreenManager *_override_lockscreenManager;
    SOSManager *_override_sosManager;
}

+ (id)sharedInstance;
@property(nonatomic, getter=_isRunning, setter=_setRunning:) BOOL running; // @synthesize running=_running;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=_sosManager) SOSManager *sosManager; // @synthesize sosManager=_override_sosManager;
@property(readonly, nonatomic, getter=_lockScreenManager) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_override_lockscreenManager;
@property(readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController; // @synthesize backlightController=_override_backlightController;
@property(readonly, nonatomic, getter=_authenticationController) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_override_authenticationController;
- (void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg1 showingPasscode:(BOOL)arg2;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)run;
@property(readonly, nonatomic, getter=isSOSActive) BOOL SOSActive;
- (void)dealloc;
- (id)init;

@end

