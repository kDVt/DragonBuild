//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class EDResources, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject <EDKeyedObject>
{
    EDResources *mResources;
    int mDefaultTextType;
    NSUInteger mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    BOOL mShowCategoryLabel;
    BOOL mShowValueLabel;
    BOOL mShowPercentageLabel;
    BOOL mShowSeriesLabel;
    BOOL mShowBubbleSizeLabel;
}

+ (id)defaultTextPropertyWithResources:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setIsShowSeriesLabel:(BOOL)arg1;
- (BOOL)isShowSeriesLabel;
- (void)setIsShowBubbleSizeLabel:(BOOL)arg1;
- (BOOL)isShowBubbleSizeLabel;
- (void)setIsShowPercentageLabel:(BOOL)arg1;
- (BOOL)isShowPercentageLabel;
- (void)setIsShowValueLabel:(BOOL)arg1;
- (BOOL)isShowValueLabel;
- (void)setIsShowCategoryLabel:(BOOL)arg1;
- (BOOL)isShowCategoryLabel;
- (void)setLabelPosition:(int)arg1;
- (int)labelPosition;
- (long long)key;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setRuns:(id)arg1;
- (id)runs;
- (void)setDefaultTextType:(int)arg1;
- (int)defaultTextType;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (NSUInteger)contentFormatId;

@end
