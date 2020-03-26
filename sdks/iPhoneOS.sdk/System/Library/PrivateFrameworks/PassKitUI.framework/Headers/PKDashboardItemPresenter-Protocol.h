//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSIndexPath, PKDashboardCollectionViewCell, UICollectionView, UICollectionViewCell, UITraitCollection;
@protocol PKDashboardItem;

@protocol PKDashboardItemPresenter <NSObject>
- (CGSize)sizeForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)didSelectItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)updateCell:(UICollectionViewCell *)arg1 forItem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (PKDashboardCollectionViewCell *)cellForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSDictionary *)collectionViewCellClasses;
- (Class)itemClass;

@optional
- (void)prefetchForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2;
- (BOOL)cellIsIndependentForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (BOOL)cellIsStackableForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)traitCollectionDidChangeFromTrait:(UITraitCollection *)arg1 toTrait:(UITraitCollection *)arg2 inCollectionView:(UICollectionView *)arg3;
- (void)cellWillAppear:(UICollectionViewCell *)arg1 forItem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)cellDidDisappear:(UICollectionViewCell *)arg1 foritem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (BOOL)canSelectItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
