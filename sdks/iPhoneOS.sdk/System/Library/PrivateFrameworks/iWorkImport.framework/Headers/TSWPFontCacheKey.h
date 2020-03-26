//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPFontCacheKey : NSObject
{
    BOOL _hasExtraFields;
    BOOL _bold;
    BOOL _italic;
    NSString *_fontName;
    double _fontSize;
    NSArray *_fontFeatures;
}

+ (id)cacheKeyWithFontName:(id)arg1 fontSize:(double)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4 fontFeatures:(id)arg5;
+ (id)cacheKeyWithFontName:(id)arg1 size:(double)arg2;
@property(readonly, copy, nonatomic) NSArray *fontFeatures; // @synthesize fontFeatures=_fontFeatures;
@property(readonly, nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(readonly, nonatomic) BOOL bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) BOOL hasExtraFields; // @synthesize hasExtraFields=_hasExtraFields;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 hasExtraFields:(BOOL)arg3 bold:(BOOL)arg4 italic:(BOOL)arg5 fontFeatures:(id)arg6;

@end
