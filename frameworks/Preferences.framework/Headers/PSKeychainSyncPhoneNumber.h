//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainSyncCountryInfo, NSString;

@interface PSKeychainSyncPhoneNumber : NSObject
{
    NSString *_digits;
    KeychainSyncCountryInfo *_countryInfo;
}

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;
@property(retain, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
// - (void).cxx_destruct;
- (id)formattedAndObfuscatedString;
- (id)formattedStringWithDialingPrefix;
- (id)formattedString;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;

@end

