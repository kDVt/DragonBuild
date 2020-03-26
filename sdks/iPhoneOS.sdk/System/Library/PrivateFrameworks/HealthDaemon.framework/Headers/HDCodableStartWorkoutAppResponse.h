//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDCodableError, NSString;

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying>
{
    HDCodableError *_launchError;
    NSString *_requestIdentifier;
    BOOL _success;
    CDStruct_f2ecb737 _has;
}

@property(retain, nonatomic) HDCodableError *launchError; // @synthesize launchError=_launchError;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
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
@property(readonly, nonatomic) BOOL hasLaunchError;
@property(nonatomic) BOOL hasSuccess;
@property(readonly, nonatomic) BOOL hasRequestIdentifier;

@end
