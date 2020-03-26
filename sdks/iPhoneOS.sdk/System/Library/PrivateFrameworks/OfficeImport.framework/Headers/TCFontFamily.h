//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TCFontFamily : NSObject
{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)englishName;
- (BOOL)doesAnyNonBoldVariantExistForFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (NSUInteger)regularFontIndexInWeightVariants:(id)arg1;
- (NSUInteger)boldFontIndexInWeightVariants:(id)arg1;
- (id)weightVariantsOfFont:(id)arg1;
- (BOOL)allFamilyIsBold;
- (id)variantByTogglingItalicOfFont:(id)arg1;
- (BOOL)allFamilyIsItalic;
- (BOOL)traitsAreAdditive;
- (id)regularVariant:(BOOL)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;

@end
