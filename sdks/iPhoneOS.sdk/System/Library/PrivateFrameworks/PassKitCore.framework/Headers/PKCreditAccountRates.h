//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDecimalNumber;

@interface PKCreditAccountRates : NSObject <NSSecureCoding, NSCopying>
{
    NSDecimalNumber *_aprForPurchases;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDecimalNumber *aprForPurchases; // @synthesize aprForPurchases=_aprForPurchases;
// - (void).cxx_destruct;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)formattedAPRForPurchasesPercentageString;
- (id)initWithDictionary:(id)arg1;

@end
