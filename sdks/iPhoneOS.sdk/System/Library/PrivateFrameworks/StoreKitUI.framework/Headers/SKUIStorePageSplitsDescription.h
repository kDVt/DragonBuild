//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SKUIStorePageSplit;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>
{
    SKUIStorePageSplit *_bottomSplit;
    SKUIStorePageSplit *_leftSplit;
    SKUIStorePageSplit *_rightSplit;
    SKUIStorePageSplit *_topSplit;
}

@property(copy, nonatomic) SKUIStorePageSplit *topSplit; // @synthesize topSplit=_topSplit;
@property(copy, nonatomic) SKUIStorePageSplit *rightSplit; // @synthesize rightSplit=_rightSplit;
@property(copy, nonatomic) SKUIStorePageSplit *leftSplit; // @synthesize leftSplit=_leftSplit;
@property(copy, nonatomic) SKUIStorePageSplit *bottomSplit; // @synthesize bottomSplit=_bottomSplit;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) long long numberOfSplits;
@property(readonly, nonatomic) SKUIStorePageSplit *firstSplit;
- (void)enumerateSplitsUsingBlock:(id /* CDUnknownBlockType */)arg1;

@end
