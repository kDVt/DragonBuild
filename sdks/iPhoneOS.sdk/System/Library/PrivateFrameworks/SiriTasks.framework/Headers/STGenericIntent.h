//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AFSiriTask, NSMutableDictionary, NSString, STGenericIntentRequest;

@interface STGenericIntent : NSObject <NSSecureCoding>
{
    BOOL _appInForeground;
    BOOL _isLaunch;
    BOOL _handled;
    BOOL _finishedState;
    NSString *_name;
    NSString *_utterance;
    NSString *_attributes;
    NSMutableDictionary *_parameters;
    AFSiriTask *_siriTask;
    STGenericIntentRequest *_intentRequest;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL finishedState; // @synthesize finishedState=_finishedState;
@property(nonatomic) BOOL handled; // @synthesize handled=_handled;
@property(retain, nonatomic) STGenericIntentRequest *intentRequest; // @synthesize intentRequest=_intentRequest;
@property(retain, nonatomic) AFSiriTask *siriTask; // @synthesize siriTask=_siriTask;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) BOOL isLaunch; // @synthesize isLaunch=_isLaunch;
@property(nonatomic) BOOL appInForeground; // @synthesize appInForeground=_appInForeground;
@property(copy, nonatomic) NSString *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addParam:(id)arg1 withValue:(id)arg2;
- (id)getPlacesParameter:(id)arg1;
- (id)getGroupParameter:(id)arg1;
- (id)getPersonParameter:(id)arg1;
- (id)getTopicParameter:(id)arg1;
- (id)getDateRangeParameter:(id)arg1;
- (void)handleWithProgress:(long long)arg1;
- (void)finished;
- (id)initWithName:(id)arg1;

@end
