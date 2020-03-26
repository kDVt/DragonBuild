//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBNetworkSession : PBCodable <NSCopying>
{
    NSUInteger _sessionID;
    int _cellularRadioAccessTechnology;
    BOOL _wifiReachable;
    struct {
        unsigned int sessionID:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int wifiReachable:1;
    } _has;
}

@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property(nonatomic) BOOL wifiReachable; // @synthesize wifiReachable=_wifiReachable;
@property(nonatomic) NSUInteger sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCellularRadioAccessTechnology;
@property(nonatomic) BOOL hasWifiReachable;
@property(nonatomic) BOOL hasSessionID;

@end
