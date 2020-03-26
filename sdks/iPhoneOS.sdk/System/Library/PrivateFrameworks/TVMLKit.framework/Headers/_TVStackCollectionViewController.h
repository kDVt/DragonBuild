//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class IKViewElement, NSArray, NSIndexPath, UIView, UIViewController, _TVNeedsMoreContentEvaluator;
@protocol _TVStackCollectionViewControllerDelegate;

@interface _TVStackCollectionViewController : UICollectionViewController
{
    NSArray *_viewControllers;
    NSArray *_stackSections;
    NSArray *_stackRows;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    BOOL _configureForListTemplate;
    struct {
        BOOL respondsToStackCollectionViewControllerScrollViewDidScroll;
    } _delegateFlags;
    IKViewElement *_viewElement;
    id <_TVStackCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_TVStackCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
// - (void).cxx_destruct;
- (CGSize)_maxContentSize;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateBackgroundTintView;
- (void)_configureBackgroundTintView;
- (void)_updateFirstItemRowIndexes;
- (void)_buildStackSections;
- (double)_maxViewWidth;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint )arg2;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id )arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)_needsMoreTargetElement;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;

@end
