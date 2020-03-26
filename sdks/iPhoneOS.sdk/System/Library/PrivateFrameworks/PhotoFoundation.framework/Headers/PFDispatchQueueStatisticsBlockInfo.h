//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFDispatchQueueStatisticsBlockInfo : NSObject
{
    BOOL _skippedExecuting;
    NSUInteger _receivedTimestamp;
    NSUInteger _enqueueTimestamp;
    NSUInteger _dequeueTimestamp;
    NSUInteger _executionTimestamp;
    NSUInteger _completionTimestamp;
}

+ (void)initialize;
@property BOOL skippedExecuting; // @synthesize skippedExecuting=_skippedExecuting;
@property(readonly) NSUInteger completionTimestamp; // @synthesize completionTimestamp=_completionTimestamp;
@property(readonly) NSUInteger executionTimestamp; // @synthesize executionTimestamp=_executionTimestamp;
@property(readonly) NSUInteger dequeueTimestamp; // @synthesize dequeueTimestamp=_dequeueTimestamp;
@property(readonly) NSUInteger enqueueTimestamp; // @synthesize enqueueTimestamp=_enqueueTimestamp;
@property(readonly) NSUInteger receivedTimestamp; // @synthesize receivedTimestamp=_receivedTimestamp;
- (NSUInteger)executionTime;
- (NSUInteger)executionLatency;
- (void)blockCompleted;
- (void)blockWillStart;
- (void)blockDequeued;
- (void)blockEnqueued;
- (NSUInteger)nsecBetween:(NSUInteger)arg1 and:(NSUInteger)arg2;
- (NSUInteger)currentAbsoluteTime;
- (id)init;

@end
