//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolCSSStyleSheetBody.h>

@class IKCSSRuleList, NSIndexSet;

@interface RWIProtocolCSSStyleSheetBody (IKJSInspector)
+ (id)ik_stylesheetBodyFromRuleList:(id)arg1 forStyleMarkup:(id)arg2 withHeader:(id)arg3;
+ (id)safe_initWithStyleSheetId:(id)arg1 rules:(id)arg2;
@property(retain, nonatomic, setter=ik_setTextNewLineIndexSet:) NSIndexSet *ik_textNewLineIndexSet;
@property(retain, nonatomic, setter=ik_setRuleList:) IKCSSRuleList *ik_ruleList;
@end
