//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSComparisonPredicate.h>

@class PHAssetCollection;

__attribute__((visibility("hidden")))
@interface WFPHAssetCollectionPredicate : NSComparisonPredicate
{
    PHAssetCollection *_assetCollection;
}

@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
// - (void).cxx_destruct;
- (id)wf_photoLibraryFilteringPredicate;
- (id)initForAssetsInCollection:(id)arg1;

@end
