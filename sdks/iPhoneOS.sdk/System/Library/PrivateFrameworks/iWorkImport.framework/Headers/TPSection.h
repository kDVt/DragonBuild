//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSWPSection-Protocol.h>

@class NSArray, NSString, NSURL, NSUUID, TPPageMaster, TPPageTemplate, TSDFill, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection>
{
    TPPageMaster *_pageMasters[3];
    TSWPStorage *_parentStorage;
    NSString *_name;
    NSUUID *_sectionHyperlinkUUID;
    BOOL _inheritPreviousHeaderFooter;
    BOOL _pageMasterFirstPageDifferent;
    BOOL _pageMasterFirstPageHidesHeaderFooter;
    BOOL _pageMasterEvenOddPagesDifferent;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
    TSDFill *_backgroundFill;
}

+ (BOOL)needsObjectUUID;
@property(retain, nonatomic) TSDFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
// - (void).cxx_destruct;
- (id)allDrawables;
- (void)p_addAllDrawablesFromInfo:(id)arg1 toMutableArray:(id)arg2;
- (id)pageMasterOwningModel:(id)arg1;
- (id)pageMasterForType:(long long)arg1;
@property(readonly, nonatomic) NSArray *pageMasters;
- (void)p_makeUserGuideStorage;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const struct SectionArchive )arg1;
- (void)p_unarchiveAndUpgrade:(id)arg1 archive:(const struct SectionArchive )arg2;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(nonatomic) __weak TSWPStorage *parentStorage;
- (void)setPageMasterForFirstPage:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *localizedPrettyDisplayStringLong;
@property(readonly, nonatomic) NSString *localizedPrettyDisplayStringShort;
@property(copy, nonatomic) NSUUID *sectionHyperlinkUUID;
- (BOOL)isHeaderFooterEmpty:(long long)arg1;
- (BOOL)isHeaderFooterVisible:(long long)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectUUIDPath;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 section:(id)arg2;
@property(nonatomic) unsigned int sectionPageNumberStart;
@property(nonatomic) unsigned int sectionPageNumberKind;
@property(nonatomic) unsigned int sectionStartKind;
@property(nonatomic) BOOL pageMasterEvenOddPagesDifferent;
@property(nonatomic) BOOL pageMasterFirstPageHidesHeaderFooter;
@property(nonatomic) BOOL pageMasterFirstPageDifferent;
@property(nonatomic) BOOL inheritPreviousHeaderFooter;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *pageInfosForPropagation;
@property(readonly, nonatomic) TPPageTemplate *pageTemplate;

@end
