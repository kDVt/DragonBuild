//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKInlineNotificationView.h>

@class NSString, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView
{
    UIView *_contentView;
    UIButton *_failureButton;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    UIView *_leftGrayoutView;
    UIView *_rightGrayoutView;
}

@property(retain, nonatomic) UIView *rightGrayoutView; // @synthesize rightGrayoutView=_rightGrayoutView;
@property(retain, nonatomic) UIView *leftGrayoutView; // @synthesize leftGrayoutView=_leftGrayoutView;
@property(retain, nonatomic) UIView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) UIView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
// - (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
@property(nonatomic) BOOL rightButtonIsGrayedOut; // @dynamic rightButtonIsGrayedOut;
@property(nonatomic) BOOL leftButtonIsGrayedOut; // @dynamic leftButtonIsGrayedOut;
- (void)_updateFonts;
- (double)_heightForBottomBoxWithContainerWidth:(double)arg1 startingYOffset:(double)arg2 leftButtonFrame:(CGRect )arg3 rightButtonFrame:(CGRect )arg4 dividerFrame:(CGRect )arg5 leftGrayoutViewFrame:(CGRect )arg6 rightGrayoutViewFrame:(CGRect )arg7;
- (double)_heightForTopBoxWithContainerWidth:(double)arg1 failureButtonFrame:(CGRect )arg2 labelFrame:(CGRect )arg3 descriptionFrame:(CGRect )arg4;
@property(retain, nonatomic) NSString *rightButtonText; // @dynamic rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @dynamic leftButtonText;
@property(retain, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) NSString *headerText; // @dynamic headerText;
- (CGSize)contentViewSizeThatFits:(CGSize)arg1;
- (id)contentView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
