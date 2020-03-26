//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/SFUDataRepresentation.h>

#import <iWorkImport/SFUZipArchiveDataRepresentation-Protocol.h>

@class SFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
