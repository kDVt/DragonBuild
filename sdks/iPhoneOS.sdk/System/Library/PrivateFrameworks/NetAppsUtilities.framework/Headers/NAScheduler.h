//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NAScheduler : NSObject
{
}

+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(NSUInteger)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;
+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;

@end
