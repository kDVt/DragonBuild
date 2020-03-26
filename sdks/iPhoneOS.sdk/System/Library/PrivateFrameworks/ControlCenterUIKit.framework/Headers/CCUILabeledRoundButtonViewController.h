//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CCUICAPackageDescription, CCUILabeledRoundButton, NSString, UIColor, UIControl, UIImage;

@interface CCUILabeledRoundButtonViewController : UIViewController
{
    BOOL _labelsVisible;
    BOOL _toggleStateOnTap;
    BOOL _useAlternateBackground;
    BOOL _enabled;
    BOOL _inoperative;
    BOOL _useLightStyle;
    NSString *_subtitle;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    UIImage *_glyphImage;
    UIColor *_highlightColor;
    CCUILabeledRoundButton *_buttonContainer;
    UIControl *_button;
}

@property(retain, nonatomic) UIControl *button; // @synthesize button=_button;
@property(retain, nonatomic) CCUILabeledRoundButton *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(nonatomic) BOOL useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic, getter=isInoperative) BOOL inoperative; // @synthesize inoperative=_inoperative;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL useAlternateBackground; // @synthesize useAlternateBackground=_useAlternateBackground;
@property(nonatomic) BOOL toggleStateOnTap; // @synthesize toggleStateOnTap=_toggleStateOnTap;
@property(nonatomic) BOOL labelsVisible; // @synthesize labelsVisible=_labelsVisible;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)buttonTapped:(id)arg1;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;

@end
