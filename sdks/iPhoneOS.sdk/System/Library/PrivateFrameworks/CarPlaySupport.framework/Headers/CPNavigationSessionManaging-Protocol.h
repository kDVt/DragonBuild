//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPManeuver, CPTravelEstimates, NSArray, NSString;

@protocol CPNavigationSessionManaging <NSObject>
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(NSUInteger)arg1 description:(NSString *)arg2;
@end
