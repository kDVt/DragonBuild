//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CPSNavigationAlertProgressView : UIView
{
    BOOL _hasStartedAnimating;
    double _duration;
    UIView *_progressView;
}

@property(nonatomic) BOOL hasStartedAnimating; // @synthesize hasStartedAnimating=_hasStartedAnimating;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithFrame:(CGRect)arg1 duration:(double)arg2;

@end
