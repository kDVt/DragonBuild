//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSSet;
@protocol AMSBagProtocol;

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer>
{
    BOOL _lightweightCheckOnly;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSSet *_offerIdentifiers;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@property(nonatomic) BOOL lightweightCheckOnly; // @synthesize lightweightCheckOnly=_lightweightCheckOnly;
@property(retain, nonatomic) NSSet *offerIdentifiers; // @synthesize offerIdentifiers=_offerIdentifiers;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;

@end
