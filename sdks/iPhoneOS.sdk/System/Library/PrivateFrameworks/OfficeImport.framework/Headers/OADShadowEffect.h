//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect
{
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setStyleColor:(id)arg1;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)setDistance:(float)arg1;
- (float)distance;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setColor:(id)arg1;
- (id)color;
- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;
- (id)initWithType:(int)arg1;

@end
