//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PDFSelection, PDFView;
@protocol PDFHostProtocol;

__attribute__((visibility("hidden")))
@interface PDFExtensionViewControllerPrivate : NSObject
{
    id <PDFHostProtocol> hostProxy;
    PDFView *pdfView;
    CGSize documentViewSize;
    NSString *searchString;
    PDFSelection *searchSelection;
    NSMutableArray *searchResults;
    BOOL didCancelActiveSearch;
    long long currentGestureState;
    BOOL hasSelection;
    CGPoint topLeftSelectionPoint;
    CGPoint bottomRightSelectionPoint;
}

// - (void).cxx_destruct;

@end
