//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKStructuredLocation, NSDate, NSDictionary, NSString, NSURL;

@interface CALNTriggeredEventNotificationInfo : NSObject
{
    BOOL _isAllDay;
    BOOL _hasSuggestedLocation;
    BOOL _eventHasAlarms;
    BOOL _allowsLocationAlerts;
    BOOL _forceDisplayOfNewTravelAdvisoryHypotheses;
    NSString *_title;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_eventObjectID;
    NSDictionary *_eventRepresentationDictionary;
    NSString *_legacyIdentifier;
    EKStructuredLocation *_preferredLocation;
    NSURL *_conferenceURL;
    NSURL *_mailtoURL;
}

@property(readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses; // @synthesize forceDisplayOfNewTravelAdvisoryHypotheses=_forceDisplayOfNewTravelAdvisoryHypotheses;
@property(readonly, nonatomic) BOOL allowsLocationAlerts; // @synthesize allowsLocationAlerts=_allowsLocationAlerts;
@property(readonly, nonatomic) BOOL eventHasAlarms; // @synthesize eventHasAlarms=_eventHasAlarms;
@property(readonly, nonatomic) BOOL hasSuggestedLocation; // @synthesize hasSuggestedLocation=_hasSuggestedLocation;
@property(readonly, copy, nonatomic) NSURL *mailtoURL; // @synthesize mailtoURL=_mailtoURL;
@property(readonly, copy, nonatomic) NSURL *conferenceURL; // @synthesize conferenceURL=_conferenceURL;
@property(readonly, nonatomic) EKStructuredLocation *preferredLocation; // @synthesize preferredLocation=_preferredLocation;
@property(readonly, copy, nonatomic) NSString *legacyIdentifier; // @synthesize legacyIdentifier=_legacyIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary; // @synthesize eventRepresentationDictionary=_eventRepresentationDictionary;
@property(readonly, copy, nonatomic) NSString *eventObjectID; // @synthesize eventObjectID=_eventObjectID;
@property(readonly, copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, nonatomic) BOOL isAllDay; // @synthesize isAllDay=_isAllDay;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *locationWithoutPrediction; // @synthesize locationWithoutPrediction=_locationWithoutPrediction;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(BOOL)arg6 eventID:(id)arg7 eventObjectID:(id)arg8 eventRepresentationDictionary:(id)arg9 legacyIdentifier:(id)arg10 preferredLocation:(id)arg11 conferenceURL:(id)arg12 mailtoURL:(id)arg13 hasSuggestedLocation:(BOOL)arg14 eventHasAlarms:(BOOL)arg15 allowsLocationAlerts:(BOOL)arg16 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg17;

@end
