//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, OBBoldTrayButton, UIView;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferListViewController : OBTableWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>
{
    BOOL _isInEligiblePlanPresent;
    NSLayoutConstraint *_tableHeightAnchor;
    OBBoldTrayButton *_continueButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSArray *_transferItems;
    NSLayoutConstraint *_heightAnchor;
    UIView *_tableFooter;
    NSMutableArray *_chosenUseIndexPaths;
}

@property(retain) NSMutableArray *chosenUseIndexPaths; // @synthesize chosenUseIndexPaths=_chosenUseIndexPaths;
@property(retain) UIView *tableFooter; // @synthesize tableFooter=_tableFooter;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain) NSArray *transferItems; // @synthesize transferItems=_transferItems;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)_startPlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_preparePlanTransfer:(id)arg1 withDeviceID:(id)arg2;
- (void)_continueButtonTapped;
- (void)_skipButtonTapped;
- (double)_heightAnchorConstant;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFooterView;
- (void)updateTableData:(id)arg1 isInEligiblePlanPresent:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTransferItems:(id)arg1;

@end
