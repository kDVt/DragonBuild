//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayoutContext-Protocol.h>

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>
{
    struct __CFString _fontName;
    double _fontSize;
    double _columnWidth;
}

@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (double)containerWidth;
- (struct __CFString )baseFontName;
- (double)baseFontSize;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTextAttributes:(struct __CFDictionary )arg1 columnWidth:(double)arg2;

@end
