//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableDictionary, NSString;

@interface MLMovieProperties : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;
}

// - (void).cxx_destruct;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyMoviePropertiesDictionary;
@property(copy, nonatomic) NSString *studioName;
@property(copy, nonatomic) NSArray *screenwriters;
@property(copy, nonatomic) NSArray *producers;
@property(copy, nonatomic) NSArray *directors;
@property(copy, nonatomic) NSString *copyrightWarning;
@property(copy, nonatomic) NSArray *castMembers;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithMoviePropertiesDictionary:(id)arg1;
- (id)init;

@end
