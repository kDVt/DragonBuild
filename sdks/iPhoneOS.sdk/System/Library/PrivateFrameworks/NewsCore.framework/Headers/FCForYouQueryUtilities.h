//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCForYouQueryUtilities : NSObject
{
}

+ (id)_filterTagsForQuerying:(id)arg1 withMutedTagIDs:(id)arg2;
+ (id)feedRequestsForTags:(id)arg1 tagBinProvider:(id /* CDUnknownBlockType */)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 purchasedTagIDs:(id)arg5 bundleSubscriptionProvider:(id)arg6 configuration:(id)arg7 maxCount:(NSUInteger)arg8 tagIDFeedRangeProvider:(id /* CDUnknownBlockType */)arg9 isRunningPPT:(BOOL)arg10;
+ (void)fetchTagsForQueryingWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(id /* CDUnknownBlockType */)arg9;
+ (void)fetchTagsForQueryingWithSubscribedTags:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 configuration:(id)arg5 contentContext:(id)arg6 fallbackToPresubscribedTagIDs:(BOOL)arg7 qualityOfService:(long long)arg8 completionHandler:(id /* CDUnknownBlockType */)arg9;

@end
