//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIColorScheme, UIControl, UISegmentedControl, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderFloatingView : UIView
{
    UISegmentedControl *_sectionControl;
    SKUIColorScheme *_colorScheme;
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    BOOL _isPad;
}

@property(readonly, nonatomic) UIControl *sectionControl; // @synthesize sectionControl=_sectionControl;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (void)_reloadBackdropView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long selectedSectionIndex;
@property(nonatomic) double backdropAlpha;
- (id)initWithSectionTitles:(id)arg1 isPad:(BOOL)arg2;

@end
