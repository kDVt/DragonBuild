//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface SGM2SearchResultsUserSelectedContact : PBCodable <NSCopying>
{
    int _app;
    NSString *_key;
    BOOL _wasKnownContact;
    BOOL _wasSuggestedContact;
    CDStruct_73da3db5 _has;
}

@property(nonatomic) BOOL wasKnownContact; // @synthesize wasKnownContact=_wasKnownContact;
@property(nonatomic) BOOL wasSuggestedContact; // @synthesize wasSuggestedContact=_wasSuggestedContact;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
- (int)StringAsApp:(id)arg1;
- (id)appAsString:(int)arg1;
@property(nonatomic) BOOL hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(nonatomic) BOOL hasWasKnownContact;
@property(nonatomic) BOOL hasWasSuggestedContact;
@property(readonly, nonatomic) BOOL hasKey;

@end
