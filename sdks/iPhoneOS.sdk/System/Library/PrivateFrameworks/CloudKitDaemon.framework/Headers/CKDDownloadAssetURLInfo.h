//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAsset;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetURLInfo : NSObject
{
    CKAsset *_asset;
    struct _OpaquePCSShareProtection _recordPCS;
}

@property(nonatomic) struct _OpaquePCSShareProtection recordPCS; // @synthesize recordPCS=_recordPCS;
@property(retain, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end
