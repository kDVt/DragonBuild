//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying>
{
    double _relativeTimestamp;
    int _action;
    int _target;
    struct {
        unsigned int has_relativeTimestamp:1;
        unsigned int has_action:1;
        unsigned int has_target:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRelativeTimestamp;
@property(nonatomic) double relativeTimestamp;
- (int)StringAsTarget:(id)arg1;
- (id)targetAsString:(int)arg1;
@property(nonatomic) BOOL hasTarget;
@property(nonatomic) int target;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) BOOL hasAction;
@property(nonatomic) int action;

@end
