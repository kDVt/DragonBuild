//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging>
{
    NSString *_updateIdentifier;
    id _value;
    NSString *_accessoryUUID;
    NSString *_serviceInstanceID;
    NSString *_characteristicInstanceID;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSString *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, nonatomic) NSString *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3;
- (BOOL)matchesCharacterisitic:(id)arg1;
- (id)logIdentifier;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5;

@end
