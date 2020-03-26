//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavdServerProxy.h>

#import <GeoServices/GEONavdProxyObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver>
{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;
- (void)dealloc;
- (void)forceCacheRefresh;
- (void)didPostUINotification:(NSUInteger)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1;
- (void)statusWithCallback:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)close;
- (void)open;
- (id)init;

@end
