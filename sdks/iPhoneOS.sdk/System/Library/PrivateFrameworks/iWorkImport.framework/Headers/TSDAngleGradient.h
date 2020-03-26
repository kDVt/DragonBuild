//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGradient.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDAngleGradient : TSDGradient <TSDMixing>
{
    double mAngle;
}

@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=mAngle;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_paintPath:(CGPath )arg1 inContext:(CGContext )arg2 naturalBounds:(CGRect)arg3;
- (CGAffineTransform)p_shadingTransformForBounds:(CGRect)arg1;
- (void)paintPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)paintPath:(CGPath )arg1 naturalBounds:(CGRect)arg2 inContext:(CGContext )arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)paintRect:(CGRect)arg1 inContext:(CGContext )arg2 atAngle:(double)arg3;
- (CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2;
- (double)p_bestGradientLengthForRect:(CGRect)arg1 atAngle:(double)arg2;
@property(readonly, nonatomic) double gradientAngleInDegrees;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(NSUInteger)arg3 angle:(double)arg4;
- (id)initWithGradientStops:(id)arg1 type:(NSUInteger)arg2 opacity:(double)arg3 angle:(double)arg4;
- (void)saveToArchive:(struct FillArchive )arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive )arg1 unarchiver:(id)arg2;

@end
