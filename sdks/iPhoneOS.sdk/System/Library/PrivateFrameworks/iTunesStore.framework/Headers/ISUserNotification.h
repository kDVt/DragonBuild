//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ISUserNotification : NSObject
{
    long long _allowedRetryCount;
    long long _currentRetryCount;
    NSDictionary *_dictionary;
    NSUInteger _optionFlags;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property long long allowedRetryCount; // @synthesize allowedRetryCount=_allowedRetryCount;
@property(readonly) NSUInteger optionFlags;
@property(readonly) NSDictionary *dictionary;
- (struct __CFUserNotification )copyUserNotification;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(NSUInteger)arg2;
- (id)init;

@end
