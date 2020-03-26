//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _artworkIndexs;
    NSMutableArray *_artworkItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artworkIndexs:1;
        unsigned int read_artworkItems:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artworkIndexs:1;
        unsigned int wrote_artworkItems:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)artworkItemType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)artworkItemAtIndex:(NSUInteger)arg1;
- (NSUInteger)artworkItemsCount;
- (void)_addNoFlagsArtworkItem:(id)arg1;
- (void)addArtworkItem:(id)arg1;
- (void)clearArtworkItems;
@property(retain, nonatomic) NSMutableArray *artworkItems;
- (void)_readArtworkItems;
- (void)setArtworkIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)artworkIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsArtworkIndex:(unsigned int)arg1;
- (void)addArtworkIndex:(unsigned int)arg1;
- (void)clearArtworkIndexs;
@property(readonly, nonatomic) unsigned int artworkIndexs;
@property(readonly, nonatomic) NSUInteger artworkIndexsCount;
- (void)_readArtworkIndexs;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)_maps_artworkIndicesAsString;

@end
