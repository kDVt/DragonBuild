//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDAssistantAccessControlModelV2;

@protocol HMDAssistantAccessControlModelUpdateReceiver <NSObject>
- (void)assistantAccessControlModelRemoved:(HMDAssistantAccessControlModelV2 *)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)assistantAccessControlModelUpdated:(HMDAssistantAccessControlModelV2 *)arg1 previousModel:(HMDAssistantAccessControlModelV2 *)arg2 completion:(void (^)(HMBAction *))arg3;
@end
