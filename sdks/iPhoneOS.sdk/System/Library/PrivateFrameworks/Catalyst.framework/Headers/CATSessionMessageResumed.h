//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATSessionMessage.h>

@class NSArray, NSDictionary, NSUUID;

@interface CATSessionMessageResumed : CATSessionMessage
{
    NSUUID *_sessionUUID;
    NSDictionary *_serverUserInfo;
    NSArray *_pendingRemoteTaskUUIDs;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *pendingRemoteTaskUUIDs; // @synthesize pendingRemoteTaskUUIDs=_pendingRemoteTaskUUIDs;
@property(copy, nonatomic) NSDictionary *serverUserInfo; // @synthesize serverUserInfo=_serverUserInfo;
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;

@end
