//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol REElementActionDelegate;

@interface REElementAction : NSObject <NSCopying, NSCoding>
{
    id <REElementActionDelegate> _delegate;
    BOOL _forceExecution;
}

@property(nonatomic) BOOL forceExecution; // @synthesize forceExecution=_forceExecution;
// - (void).cxx_destruct;
- (void)_didFinish:(BOOL)arg1;
- (void)_performWithContext:(id)arg1;
@property(nonatomic) __weak id <REElementActionDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
