//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUAnimationRunner : NSObject
{
    id /* CDUnknownBlockType */ _runBlock;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ runBlock; // @synthesize runBlock=_runBlock;
// - (void).cxx_destruct;
- (void)runWithFinishBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRunBlock:(id /* CDUnknownBlockType */)arg1;

@end
