//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SUNetworkObserver <NSObject>

@optional
- (void)operatorBundleChanged;
- (void)carrierBundleChanged;
- (void)cellularRoamingStatusChanged:(BOOL)arg1;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
@end
