//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTextFieldSpecifier.h>


@class NSString;

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate>
{
    NSString *_countryCode;
}

@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
// - (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end
