//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying>
{
    CDStruct_fae3dc92 _negativeScores;
    CDStruct_fae3dc92 _positiveScores;
    NSUInteger _falseNegatives;
    NSUInteger _falsePositives;
    NSUInteger _trueNegatives;
    NSUInteger _truePositives;
    float _f1;
    float _rmse;
    float _secsToExecute;
    struct {
        unsigned int falseNegatives:1;
        unsigned int falsePositives:1;
        unsigned int trueNegatives:1;
        unsigned int truePositives:1;
        unsigned int f1:1;
        unsigned int rmse:1;
        unsigned int secsToExecute:1;
    } _has;
}

+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(NSUInteger)arg3 trueNegatives:(NSUInteger)arg4 falsePositives:(NSUInteger)arg5 falseNegatives:(NSUInteger)arg6;
+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2;
@property(nonatomic) float secsToExecute; // @synthesize secsToExecute=_secsToExecute;
@property(nonatomic) NSUInteger falseNegatives; // @synthesize falseNegatives=_falseNegatives;
@property(nonatomic) NSUInteger falsePositives; // @synthesize falsePositives=_falsePositives;
@property(nonatomic) NSUInteger trueNegatives; // @synthesize trueNegatives=_trueNegatives;
@property(nonatomic) NSUInteger truePositives; // @synthesize truePositives=_truePositives;
@property(nonatomic) float f1; // @synthesize f1=_f1;
@property(nonatomic) float rmse; // @synthesize rmse=_rmse;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSecsToExecute;
- (void)setNegativeScores:(float )arg1 count:(NSUInteger)arg2;
- (float)negativeScoresAtIndex:(NSUInteger)arg1;
- (void)addNegativeScores:(float)arg1;
- (void)clearNegativeScores;
@property(readonly, nonatomic) float negativeScores;
@property(readonly, nonatomic) NSUInteger negativeScoresCount;
- (void)setPositiveScores:(float )arg1 count:(NSUInteger)arg2;
- (float)positiveScoresAtIndex:(NSUInteger)arg1;
- (void)addPositiveScores:(float)arg1;
- (void)clearPositiveScores;
@property(readonly, nonatomic) float positiveScores;
@property(readonly, nonatomic) NSUInteger positiveScoresCount;
@property(nonatomic) BOOL hasFalseNegatives;
@property(nonatomic) BOOL hasFalsePositives;
@property(nonatomic) BOOL hasTrueNegatives;
@property(nonatomic) BOOL hasTruePositives;
@property(nonatomic) BOOL hasF1;
@property(nonatomic) BOOL hasRmse;
- (void)dealloc;
- (id)toDictionary;

@end
