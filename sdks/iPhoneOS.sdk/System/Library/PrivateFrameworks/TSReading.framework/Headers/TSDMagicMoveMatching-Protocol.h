//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, TSDRep, TSDTextureContext;

@protocol TSDMagicMoveMatching

@optional
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(TSDRep *)arg1 incomingObject:(TSDRep *)arg2;
+ (NSArray *)magicMoveMatchesBetweenOutgoingObjects:(NSArray *)arg1 andIncomingObjects:(NSArray *)arg2 textureContext:(TSDTextureContext *)arg3;
@end
