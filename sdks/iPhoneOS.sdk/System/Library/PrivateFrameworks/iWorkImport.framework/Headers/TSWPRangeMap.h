//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPRangeMap : NSObject
{
    _NSRange _subRange;
    vector_7c702c4c _unmappedIndexes;
    vector_7c702c4c _mappedIndexes;
}

@property(nonatomic) vector_7c702c4c mappedIndexes; // @synthesize mappedIndexes=_mappedIndexes;
@property(nonatomic) vector_7c702c4c unmappedIndexes; // @synthesize unmappedIndexes=_unmappedIndexes;
@property(nonatomic) _NSRange subRange; // @synthesize subRange=_subRange;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1 startingAt:(NSUInteger)arg2;
- (_NSRange)unmappedCharRange:(_NSRange)arg1;
- (_NSRange)mappedCharRange:(_NSRange)arg1;
- (NSUInteger)p_extendRightMappedIndex:(NSUInteger)arg1;
- (NSUInteger)p_extendLeftMappedIndex:(NSUInteger)arg1;
- (NSUInteger)unmappedCharIndex:(NSUInteger)arg1;
- (NSUInteger)mappedCharIndex:(NSUInteger)arg1;
- (id)initWithSubRange:(_NSRange)arg1 unmappedIndexes:(const vector_06e666a8 )arg2 affinity:(int)arg3;
- (id)initWithSubRange:(_NSRange)arg1 unmappedIndexes:(const vector_06e666a8 )arg2 isBackwardAffinities:(const vector_553f084a )arg3;
- (id)initWithSubRange:(_NSRange)arg1 unmappedPairIndexes:(const vector_06e666a8 )arg2;

@end
