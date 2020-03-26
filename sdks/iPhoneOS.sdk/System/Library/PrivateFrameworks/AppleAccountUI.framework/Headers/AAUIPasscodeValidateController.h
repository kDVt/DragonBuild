//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DevicePINControllerDelegate-Protocol.h>

@class AAUICDPHelper, PSSetupController;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate>
{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    id /* CDUnknownBlockType */ __passcodeValidationCompletion;
}

+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(BOOL)arg2;
+ (id)stingrayControllerWithPresenter:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ _passcodeValidationCompletion; // @synthesize _passcodeValidationCompletion=__passcodeValidationCompletion;
// - (void).cxx_destruct;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)didAcceptEnteredPIN;
- (id)_specifierForMode:(int)arg1;
- (void)_setupNavController;
- (id)_presentingViewController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;

@end
