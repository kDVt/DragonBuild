//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation
{
    BOOL _requirement;
    _UIStatusBarDisplayItemState *_itemState;
    _UIStatusBarDisplayItemPlacement *_placement;
}

@property(nonatomic) BOOL requirement; // @synthesize requirement=_requirement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
@property(nonatomic) __weak _UIStatusBarDisplayItemState *itemState; // @synthesize itemState=_itemState;
// - (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)type;
- (id)itemStates;
- (BOOL)isFulfilled;

@end
