//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface BBImage : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSString *_path;
    NSString *_name;
    NSString *_bundlePath;
}

+ (BOOL)supportsSecureCoding;
+ (id)imageWithName:(id)arg1 inBundlePath:(id)arg2;
+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithData:(id)arg1;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;

@end
