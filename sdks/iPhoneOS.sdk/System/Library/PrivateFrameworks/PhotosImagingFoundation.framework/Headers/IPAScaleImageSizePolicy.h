//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPAScaleImageSizePolicy : IPAImageSizePolicy
{
    double _scale;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(CGSize)arg1;
- (CGSize)transformSize:(CGSize)arg1;
- (id)initWithScale:(double)arg1;

@end
