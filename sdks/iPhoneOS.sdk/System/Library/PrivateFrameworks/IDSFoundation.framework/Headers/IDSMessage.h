//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>


@class NSDictionary, NSNumber;

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSNumber *_version;
    NSDictionary *_deliveryStatusContext;
    BOOL _wantsCertifiedDelivery;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property BOOL wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
// - (void).cxx_destruct;
- (id)_objectForKeyFromMadridBag:(id)arg1;
- (id)_madridServerBag;
- (BOOL)_shouldUseJSONForEncoding;
- (BOOL)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsAPSRetries;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
