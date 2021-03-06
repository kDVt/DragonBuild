//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifier : SBSwitcherModifier
{
    NSUUID *_tetheredRemovalID;
    BOOL _isFloating;
    NSUInteger _phase;
    NSUInteger _indexToScrollAfterInsertion;
}

// - (void).cxx_destruct;
- (long long)layoutUpdateMode;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)initWithTetheredRemovalID:(id)arg1 floating:(BOOL)arg2;

@end

