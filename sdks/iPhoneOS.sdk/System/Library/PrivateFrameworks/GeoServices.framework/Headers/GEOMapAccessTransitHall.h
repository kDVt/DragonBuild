//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessTransitNodeBase.h>

#import <GeoServices/GEOMapTransitHall-Protocol.h>

@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall>
{
    id <GEOMapTransitStation> _station;
}

// - (void).cxx_destruct;
- (id)findStops:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)findStation:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSUInteger stationID;

@end
