//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)dispatcherWithQueue:(id)arg1;
+ (id)dispatcherWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)qosUserInteractiveDispatchBlockForBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)boostQualityOfService;
- (void)dispatchAsynchronousBlock:(id /* CDUnknownBlockType */)arg1;
- (void)dispatchSynchronousBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
