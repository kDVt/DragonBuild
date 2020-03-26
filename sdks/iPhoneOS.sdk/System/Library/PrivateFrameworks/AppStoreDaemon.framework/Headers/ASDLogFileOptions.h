//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying>
{
    NSString *_directoryPath;
    NSString *_fileName;
    NSUInteger _maxSizeInBytes;
    long long _maxNumberOfLogFiles;
}

@property(nonatomic) long long maxNumberOfLogFiles; // @synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles;
@property(nonatomic) NSUInteger maxLogFileSize; // @synthesize maxLogFileSize=_maxSizeInBytes;
@property(copy, nonatomic) NSString *logFileBaseName; // @synthesize logFileBaseName=_fileName;
@property(copy, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_directoryPath;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end
