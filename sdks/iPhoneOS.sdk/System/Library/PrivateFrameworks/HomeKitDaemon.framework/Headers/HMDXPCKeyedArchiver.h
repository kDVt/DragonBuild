//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
}

@property(readonly, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
// - (void).cxx_destruct;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_configure;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)arg1;

@end
