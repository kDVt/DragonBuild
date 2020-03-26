//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSMutableDictionary, NSString;

@protocol EDConversationRemoteStorage <NSObject>
- (NSString *)storageName;
- (BOOL)synchronize;
- (void)refresh;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (void)removeDictionaryForKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (BOOL)isInitialized;
@end
