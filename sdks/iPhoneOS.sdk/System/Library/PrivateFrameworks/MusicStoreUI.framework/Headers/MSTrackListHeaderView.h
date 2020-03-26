//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUItem, SUItemOfferButton, SUReflectionImageView, SUTouchCaptureView, UIImage, UILabel;
@protocol MSTrackListHeaderDelegate;

@interface MSTrackListHeaderView : UIView
{
    id <MSTrackListHeaderDelegate> _delegate;
    UIImage *_artworkImage;
    SUItem *_item;
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}

@property(retain, nonatomic) SUItem *item; // @synthesize item=_item;
@property(nonatomic) id <MSTrackListHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (CGSize)_sizeThatFitsLabel:(id)arg1 size:(CGSize)arg2 numberOfLines:(long long)arg3;
- (void)_showPurchaseConfirmation;
- (void)_setShowingPurchaseConfirmation:(BOOL)arg1;
- (void)_reloadReleaseDateLabel;
- (void)_reloadOfferButton;
- (void)_reloadItemCountLabel;
- (void)_reloadDisclaimerLabel;
- (void)_reloadArtworkView;
- (void)_reloadArtistLabel;
- (void)_reloadAlbumLabel;
- (void)_performPurchaseAnimation;
- (id)_newGenericSmallFontLabel;
- (void)_hidePurchaseConfirmation;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)_offerButtonAction:(id)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
