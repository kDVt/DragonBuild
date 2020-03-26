//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSProtobuf;

@protocol PBBridgeGizmoProtocol <NSObject>
- (void)handleRenameDeviceRequest:(IDSProtobuf *)arg1;
- (void)handleWarrantySentinelRequest:(IDSProtobuf *)arg1;
- (void)popToControllerType:(IDSProtobuf *)arg1;
- (void)pushControllerType:(IDSProtobuf *)arg1;
- (void)setPasscodeRestrictions:(IDSProtobuf *)arg1;
- (void)setLocationEnabled:(IDSProtobuf *)arg1;
- (void)enabledSiri:(IDSProtobuf *)arg1;
- (void)gotSiriState:(IDSProtobuf *)arg1;
- (void)handleActivationData:(IDSProtobuf *)arg1;
- (void)setCompanionRegion:(IDSProtobuf *)arg1;
- (void)setCompanionLanguage:(IDSProtobuf *)arg1;

@optional
- (void)companionBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;
@end
