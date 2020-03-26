//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADDrawableProperties.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>
#import <OfficeImport/OADProperties3DParent-Protocol.h>

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

+ (id)defaultProperties;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasShape3D;
- (void)setShape3D:(id)arg1;
- (id)shape3D;
- (BOOL)hasScene3D;
- (void)setScene3D:(id)arg1;
- (id)scene3D;
- (BOOL)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (BOOL)hasFill;
- (void)setFill:(id)arg1;
- (id)fill;
- (id)initWithDefaults;

@end
