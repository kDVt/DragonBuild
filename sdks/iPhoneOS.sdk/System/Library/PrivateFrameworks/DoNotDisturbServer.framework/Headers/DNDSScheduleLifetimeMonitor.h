//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor
{
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;
// - (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(BOOL)arg6;
- (id)activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3;

@end
