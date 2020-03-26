//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceSourced-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class IDSMessageContext, NMSMessageCenter, NSDictionary, NSString, NSURL;

@interface NMSIncomingFileTransfer : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>
{
    NSString *sourceDeviceID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSURL *_fileURL;
    NSDictionary *_metadata;
    id _pbHeaderInfo;
    NSUInteger _priority;
    IDSMessageContext *_idsContext;
}

@property(retain, nonatomic) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(nonatomic) NSUInteger priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id pbHeaderInfo; // @synthesize pbHeaderInfo=_pbHeaderInfo;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID;
// - (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;

@end
