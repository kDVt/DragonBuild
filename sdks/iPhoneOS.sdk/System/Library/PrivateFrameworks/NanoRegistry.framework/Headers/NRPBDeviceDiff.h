//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>
{
    NSMutableArray *_diffs;
    NSMutableArray *_names;
}

+ (Class)diffsType;
+ (Class)namesType;
@property(retain, nonatomic) NSMutableArray *diffs; // @synthesize diffs=_diffs;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)diffsAtIndex:(NSUInteger)arg1;
- (NSUInteger)diffsCount;
- (void)addDiffs:(id)arg1;
- (void)clearDiffs;
- (id)namesAtIndex:(NSUInteger)arg1;
- (NSUInteger)namesCount;
- (void)addNames:(id)arg1;
- (void)clearNames;

@end
