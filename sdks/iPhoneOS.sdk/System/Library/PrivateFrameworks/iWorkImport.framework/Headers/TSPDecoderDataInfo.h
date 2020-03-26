//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoderDataInfo-Protocol.h>

@class NSString, TSPDataMetadata, TSPDigest;

__attribute__((visibility("hidden")))
@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>
{
    TSPDigest *_digest;
    NSString *_preferredFilename;
    NSString *_externalFilePath;
    NSString *_documentResourceLocator;
    TSPDataMetadata *_dataMetadata;
    long long _identifier;
}

@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TSPDataMetadata *dataMetadata; // @synthesize dataMetadata=_dataMetadata;
@property(readonly, nonatomic) NSString *documentResourceLocator; // @synthesize documentResourceLocator=_documentResourceLocator;
@property(readonly, nonatomic) NSString *externalFilePath; // @synthesize externalFilePath=_externalFilePath;
@property(readonly, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(readonly, nonatomic) TSPDigest *digest; // @synthesize digest=_digest;
// - (void).cxx_destruct;
- (id)initWithMessage:(const struct DataInfo )arg1;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5;
- (id)init;

@end
