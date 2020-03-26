//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSDictionary;
@protocol SBIconListLayout;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>
{
    NSDictionary *_listLayouts;
    id <SBIconListLayout> _defaultLayout;
}

@property(readonly, nonatomic) id <SBIconListLayout> defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property(readonly, copy, nonatomic) NSDictionary *listLayouts; // @synthesize listLayouts=_listLayouts;
// - (void).cxx_destruct;
- (id)layoutForIconLocation:(id)arg1;
- (id)init;
- (id)initWithListLayouts:(id)arg1;
- (id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2;

@end
