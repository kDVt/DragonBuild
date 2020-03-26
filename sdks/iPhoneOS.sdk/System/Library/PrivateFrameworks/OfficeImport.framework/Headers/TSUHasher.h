//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUHasher : NSObject
{
    NSUInteger _currentHash;
}

@property(nonatomic) NSUInteger currentHash; // @synthesize currentHash=_currentHash;
- (NSUInteger)hashValue;
- (void)addObject:(id)arg1;
- (void)addUnsignedInteger:(NSUInteger)arg1;
- (void)addInteger:(long long)arg1;
- (void)addBool:(BOOL)arg1;
- (void)addUnsignedInt:(unsigned int)arg1;
- (void)addInt:(int)arg1;
- (void)p_appendUnsignedInteger:(NSUInteger)arg1;
- (id)init;

@end
