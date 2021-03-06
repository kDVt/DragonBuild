//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSpecifierGroup-Protocol.h>

@class NSMutableArray, NSString, PSListController, PSSpecifier;

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup>
{
    PSListController *_listController;
    NSString *_groupSpecifierID;
    long long _collaspeAfterCount;
    NSMutableArray *_specifiers;
    BOOL _showAll;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

// - (void).cxx_destruct;
- (id)specifiers;
- (id)spinnerSpecifier;
- (void)showAll;
- (id)showAllSpecifier;
- (void)reloadSpecifiers;
- (void)reloadSpecifier:(id)arg1;
- (void)removeAllSpecifiers;
- (void)addSpecifiers:(id)arg1;
- (long long)_groupIndex;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifierID:(id)arg2 collapseAfterCount:(long long)arg3;

@end

