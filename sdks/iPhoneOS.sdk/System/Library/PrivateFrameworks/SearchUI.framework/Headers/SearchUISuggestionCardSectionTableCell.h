//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionTableCell.h>

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell
{
    BOOL _sectionHasHeader;
    int _actualSectionLocation;
}

@property int actualSectionLocation; // @synthesize actualSectionLocation=_actualSectionLocation;
@property(nonatomic) BOOL sectionHasHeader; // @synthesize sectionHasHeader=_sectionHasHeader;
- (BOOL)isDark;
- (BOOL)_isUsingOldStyleMultiselection;
- (BOOL)_insetsBackground;
- (BOOL)shouldDrawFullLengthSeparatorForSectionLocation:(int)arg1;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1;
- (BOOL)_showSeparatorAtTopOfSection;
- (BOOL)shouldDrawBackgroundColor;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
