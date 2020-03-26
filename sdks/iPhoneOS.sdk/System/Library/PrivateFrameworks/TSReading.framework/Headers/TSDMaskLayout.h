//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDLayout.h>

@class TSDImageLayout, TSDInfoGeometry, TSDPathSource;

@interface TSDMaskLayout : TSDLayout
{
    struct {
        unsigned int path:1;
        unsigned int tightPathBounds:1;
    } mMaskInvalidFlags;
    CGPath mCachedPath;
    CGPath mCachedPathNoScale;
    CGRect mCachedTightPathBounds;
    CGRect mCachedTightPathBoundsNoScale;
    double mPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    BOOL mScalingInMaskMode;
}

@property(nonatomic) double pathScale; // @synthesize pathScale=mPathScale;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (CGRect)p_cachedTightPathBoundsNoScale;
- (CGRect)p_cachedTightPathBounds;
- (void)p_calculateTightPathBoundsIfNecessary;
- (CGPath )p_cachedPathNoScale;
- (CGPath )p_cachedPath;
- (void)p_calculateCachedPathIfNecessary;
- (id)infoGeometry;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (void)setControlKnobPosition:(NSUInteger)arg1 toPoint:(CGPoint)arg2;
- (NSUInteger)numberOfControlKnobs;
@property(readonly, nonatomic) BOOL hasSmartPath;
- (void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2;
- (void)dynamicMovePathKnobDidBegin;
- (id)pathSource;
- (CGRect)pathBounds;
- (CGPath )path;
- (id)maskInfo;
- (BOOL)shouldDisplayGuides;
- (void)maskModeScaleDidEnd;
- (void)maskModeScaleDidBegin;
- (void)dragBy:(CGPoint)arg1;
@property(readonly, nonatomic) TSDImageLayout *imageLayout;
- (CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1;
- (void)endDynamicOperation;
- (void)takeScaledMaskGeometry:(id)arg1;
- (void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2;
- (void)beginDynamicOperation;
- (CGRect)alignmentFrameForProvidingGuidesInRoot;
- (BOOL)shouldSnapWhileResizing;
- (CGAffineTransform)originalTransformForProvidingGuides;
- (CGRect)alignmentFrame;
- (void)invalidatePath;
- (void)invalidate;
- (void)processChangedProperty:(int)arg1;
- (CGAffineTransform)affineTransformForTightPathBounds;
- (id)computeLayoutGeometry;
- (id)dependentLayouts;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
