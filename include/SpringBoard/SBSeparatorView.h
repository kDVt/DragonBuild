//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBSeparatorNubView;

@interface SBSeparatorView : UIView
{
    SBSeparatorNubView *_nubView;
    NSUInteger _nubStyle;
}

@property(nonatomic) NSUInteger nubStyle; // @synthesize nubStyle=_nubStyle;
// - (void).cxx_destruct;
- (void)_updateNubViewFrame;
@property(readonly, nonatomic) CGRect nubRect;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

