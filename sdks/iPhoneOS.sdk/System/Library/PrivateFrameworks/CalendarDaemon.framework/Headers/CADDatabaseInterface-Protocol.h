//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID, NSArray;

@protocol CADDatabaseInterface
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(void (^)(int, NSUInteger))arg1;
- (void)CADDatabaseCanModifyCalendarDatabase:(void (^)(int, BOOL))arg1;
- (void)CADDatabaseResetWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRollbackWithReply:(void (^)(int))arg1;
- (void)CADDatabaseCommitWithReply:(void (^)(int, BOOL, NSDictionary *))arg1;
- (void)CADDatabaseSaveWithReply:(void (^)(int))arg1;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(void (^)(int))arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseExportICSDataForCalendarItems:(NSArray *)arg1 preventLineFolding:(BOOL)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADDatabaseImportICSData:(NSArray *)arg1 intoCalendarsWithIDs:(NSArray *)arg2 optionsMask:(NSUInteger)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetNextAssignableColorWithReply:(void (^)(int, NSString *))arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(void (^)(int, BOOL, NSArray *, double))arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(void (^)(int, NSDictionary *))arg2;
- (void)CADDatabaseGetSequenceNumber:(void (^)(int, int))arg1;
- (void)CADDatabaseMarkIndividualChangesConsumed:(NSArray *)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(void (^)(int))arg2;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(NSArray *)arg1 insideObject:(CADObjectID *)arg2 reply:(void (^)(int, BOOL, long long, NSArray *))arg3;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(void (^)(int, BOOL, long long, NSData *, int, int, int))arg2;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(void (^)(int))arg1;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(void (^)(int, long long))arg1;
- (void)CADDatabaseGetUUID:(void (^)(int, NSString *))arg1;
@end
