//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationServerMultiwindowDelegate-Protocol.h>

@class FBServiceClientAuthenticator;

@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate>
{
    FBServiceClientAuthenticator *_serviceClientAccessEntitlementAuthenticator;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)applicationServer:(id)arg1 client:(id)arg2 showAllWindowsForBundleIdentifier:(id)arg3;
- (id)init;

@end

