//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSSMutablePropertySet;

__attribute__((visibility("hidden")))
@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;
}

// - (void).cxx_destruct;
- (id)changedProperties;
- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end
