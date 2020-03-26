//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUGradient;

@interface SUScriptGradient : SUScriptObject
{
    SUGradient *_nativeGradient;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *type;
- (id)_className;
- (id)patternColorWithWidth:(double)arg1 height:(double)arg2 opaque:(BOOL)arg3;
- (void)addColorStopWithOffset:(double)arg1 color:(id)arg2;
- (id)copyNativeGradient;
- (void)dealloc;
- (id)initWithGradient:(id)arg1;
- (id)initRadialGraidentWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)initLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)init;

@end
