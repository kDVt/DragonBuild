//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFFileIStream.h>

#import <PhotoFoundation/PFOStream-Protocol.h>

@interface PFFileIOStream : PFFileIStream <PFOStream>
{
}

- (BOOL)truncateLength:(long long)arg1;
- (BOOL)writeStream:(id)arg1 blockSize:(NSUInteger)arg2;
- (BOOL)writeStream:(id)arg1;
- (BOOL)writeStream:(const char )arg1 length:(NSUInteger)arg2 written:(NSUInteger )arg3;
- (BOOL)reserveLength:(long long)arg1;
- (BOOL)openStream;

@end
