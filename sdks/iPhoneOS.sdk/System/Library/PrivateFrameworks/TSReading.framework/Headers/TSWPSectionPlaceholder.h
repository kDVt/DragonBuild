//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSKDocumentObject-Protocol.h>
#import <TSReading/TSWPSection-Protocol.h>

@class TPDocumentRoot, TSWPStorage;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection>
{
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}

- (id)description;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)setParentStorage:(id)arg1;
- (id)parentStorage;
- (id)copyWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
