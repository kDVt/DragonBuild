//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NUVideoViewControllerAdConfiguration : NSObject <NSCopying>
{
    BOOL _adsEnabled;
    BOOL _allowLeadingAdSlot;
}

@property(readonly, nonatomic) BOOL allowLeadingAdSlot; // @synthesize allowLeadingAdSlot=_allowLeadingAdSlot;
@property(readonly, nonatomic, getter=areAdsEnabled) BOOL adsEnabled; // @synthesize adsEnabled=_adsEnabled;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAdsEnabled:(BOOL)arg1 allowLeadingAdSlot:(BOOL)arg2;
- (id)init;

@end
